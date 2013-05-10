<?php

define('SUBWAY', 2);
define('LIRR', 5);
define('MNR', 6);
define('BUS', 3);
define('BNT', 4);


class ServiceStatusDataHandler {

    private $arrXMLObject;
    private $arrStatusData;
    private $msgERROR = NULL;

    function __construct()
    {
        /*
        1.  Check the short term cache. If still valid use its data.
        2.  If short term cache not valid then fetch from mta.info
        3.  If can NOT fetch from mta.info, send ERROR email, use long term cache if still valid
        4.  If can fetch from mta.info but the data is older than 2 minutes, send WARNING email
        5.  If can fetch from mta.info but the data is corrupt or can't be parsed, send WARNING email
        6.  If can NOT fetch from server and long term cache is invalid send ERROR email but use long term cache
        */
        $cache = cache_get("ss_shortCache");

        // Use short term cache if still valid (less than 2 minutes old)
        if ($cache && $cache->expire > REQUEST_TIME)
            $this->arrStatusData = $cache->data;
        else
        {
            // Short term cache is invalid -- pulling status from mta.into
            $ssFeed = "http://mta.info/status/serviceStatus.txt";

            // Check to see if the file exsist on server
            if ($this->isDomainAvailible($ssFeed))
            {
                $this->arrXMLObject = $this->xml_to_object(file_get_contents($ssFeed));

                if($this->arrXMLObject)
                {
                    $dt = explode(" ", $this->arrXMLObject->children[1]->content);

                    $this->arrStatusData[0]         = "as of " . $dt[1] . " " . $dt[2];
                    $this->arrStatusData[1]         = strtotime($dt[0] . " " . $dt[1] . " " . $dt[2]);

                    // Check if the data is more than 4 minutes old. Even though Service Status data is updated once every 2 minutes
                    // we are checking for a 4 minute limit due to caching done by Varnish and Akamai (CDN).  It is almost gauranteed that
                    // the user will not hit the new status every 2 minutes because this data would not have expired in Varnish or CDN.  Once
                    // this data expires there, only then a fresh Service Status data will be obtained from the server and in that case it will
                    // most likey be older than 2 minutes.
                    // if ((REQUEST_TIME-$this->arrStatusData[1]) > 240)
                    //     notifyByEmail("Service Status obtained from mta.info is more than 4 minutes old.");

                    // dsm ($this->arrStatusData[1]);
                    // dsm ("Request time is: " . REQUEST_TIME);
                    // dsm ("Diff is: " . (REQUEST_TIME-$this->arrStatusData[1]));

                    $this->arrStatusData[SUBWAY]    = $this->extractData(SUBWAY);
                    $this->arrStatusData[LIRR]      = $this->extractData(LIRR);
                    $this->arrStatusData[MNR]       = $this->extractData(MNR);
                    $this->arrStatusData[BUS]       = $this->extractData(BUS);
                    $this->arrStatusData[BNT]       = $this->extractData(BNT);

                    $this->msgERROR = NULL;

                    cache_set("ss_shortCache", $this->arrStatusData, "cache", REQUEST_TIME+variable_get('statusblock_cache_time', 120));
                    cache_set("ss_longCache", $this->arrStatusData, "cache", REQUEST_TIME+variable_get('statusblock_cache_time_backup', 900));
                    cache_clear_all();
                }
                else
                {
                    // Service Status data received is corrupt or can't be parsed. Use long term cache.
                    // notifyByEmail("Error occurred while trying to parse Service Status data - using long term cache.");
                    $cache = cache_get("ss_longCache");
                    if ($cache && $cache->expire > REQUEST_TIME)
                        $this->arrStatusData = $cache->data;
                    else
                        $this->msgERROR = "Service Status is not available.";
                }
            }
            // Handle case when Mta.info is not available
            $cache = cache_get("ss_longCache");
            if ($cache && $cache->expire > REQUEST_TIME) {
                // notifyByEmail("The Mta.info is not responding to requests for Service Status - using long term cache.");
                $this->arrStatusData = $cache->data;
            } else
                $this->msgERROR = "Service Status is not available.";
        }
    }

    function isDomainAvailible($domain)
    {
        //check, if a valid url is provided
        if(!filter_var($domain, FILTER_VALIDATE_URL))
            return false;

        //initialize curl
        $curlInit = curl_init($domain);
        curl_setopt($curlInit,CURLOPT_CONNECTTIMEOUT,10);
        curl_setopt($curlInit,CURLOPT_HEADER,true);
        curl_setopt($curlInit,CURLOPT_NOBODY,true);
        curl_setopt($curlInit,CURLOPT_RETURNTRANSFER,true);

        //get answer
        $response = curl_exec($curlInit);

        curl_close($curlInit);

        if ($response)
            return true;

        $this->msgERROR = "Site is not available : returned with code: " . $response;

        return false;
    }

    function getStatusTimeStamp() {
        return $this->arrStatusData[0];
    }

    function getServiceStatusData($service) {
        return isset($this->msgERROR) ? $this->msgERROR : $this->arrStatusData[$service];
    }

    function getStatus($row, $col) {
        $msg = $this->arrStatusData[$row][$col]['text'];

        if (!strlen($msg))
            $msg = "<p>Posted: " . date("F j, Y, g:i a", REQUEST_TIME) .
                    "</p><p>The status has changed.  Please go back to the previous page and refresh your browser.</p>";
        return $msg;
    }

    private function extractData($service) {
        $arrData = array();

        for($s=0; $s < count($this->arrXMLObject->children[$service]->children); $s++)
        {
            $arrData[$s]['name'] = $this->arrXMLObject->children[$service]->children[$s]->children[0]->content;

            switch($service)
            {
                case SUBWAY:
                    $arrData[$s]['status'] = $this->formatSubwayStatus($this->arrXMLObject->children[$service]->children[$s]->children[1]->content, $service, $s);
                    break;
                case LIRR:
                    $arrData[$s]['status'] = $this->formatRailStatus($this->arrXMLObject->children[$service]->children[$s]->children[1]->content, $service, $s);
                    break;
                case MNR:
                    $arrData[$s]['status'] = $this->formatRailStatus($this->arrXMLObject->children[$service]->children[$s]->children[1]->content, $service, $s);
                    break;
                case BNT:
                    $arrData[$s]['status'] = $this->formatBusStatus($this->arrXMLObject->children[$service]->children[$s]->children[1]->content, $service, $s);
                    break;
                case BUS:
                    $arrData[$s]['status'] = $this->formatBusStatus($this->arrXMLObject->children[$service]->children[$s]->children[1]->content, $service, $s);
                    break;
            }

            $arrData[$s]['text'] = $this->arrXMLObject->children[$service]->children[$s]->children[2]->content;
        }

        return $arrData;
    }

    function formatSubwayStatus($statusIn, $service, $index) {
        $statusOut = array();
        global $base_url;

        switch (trim($statusIn)) {
            case 'GOOD SERVICE':
                $statusOut[0] = "GoodService";
                $statusOut[1] = "Good Service";
                break;

            case 'PLANNED WORK':
                $statusOut[0] = "PlannedWork";
                $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Planned Work</a>';
                break;

            case 'SERVICE CHANGE':
                $statusOut[0] = "ServiceChange";
                $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Service Change</a>';
                break;

            case 'DELAYS':
                $statusOut[0] = "Delays";
                $statusOut[1] = '<a style="color: #990033" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Delays</a>';
                break;

			case 'SANDY REROUTE':
                $statusOut[0] = "Sandy Reroute";
                $statusOut[1] = '<a style="color: #5d0dff" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Sandy Reroute</a>';
                break;

            case 'SANDY REROUTE':
                $statusOut[0] = "Sandy Reroute";
                $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Sandy Reroute</a>';
                break;

            default:
                $statusOut[0] = "GoodService";
                $statusOut[1] = "-";
                break;
        }

        return $statusOut;
    }

    function formatRailStatus($statusIn, $service, $index) {
        $statusOut = array();
        global $base_url;

        switch (trim($statusIn)) {
            case 'GOOD SERVICE':
                $statusOut[0] = "rail_GoodService";
                $statusOut[1] = "Good Service";
                break;

            case 'PLANNED WORK':
                $statusOut[0] = "rail_PlannedWork";
                $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/' . $service.'/'.$index.'">Planned Work</a>';
                break;

            case 'SERVICE CHANGE':
                $statusOut[0] = "rail_ServiceChange";
                $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Service Change</a>';
                break;

            case 'DELAYS':
                $statusOut[0] = "rail_Delays";
                $statusOut[1] = '<a  style="color: #990033" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Delays</a>';
                break;

            case 'SUSPENDED':
                $statusOut[0] = "rail_ServiceChange";
                $statusOut[1] = '<a  style="color: #990033" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Suspended</a>';
                break;

            default:
                $statusOut[0] = "rail_GoodService";
                $statusOut[1] = "-";
                break;
        }

        return $statusOut;
    }


    function formatBusStatus($statusIn, $service, $index) {
        $statusOut = array();
        global $base_url;

        switch (trim($statusIn)) {
        case 'GOOD SERVICE':
            $statusOut[0] = "bus_GoodService";
            $statusOut[1] = "Good Service";
            break;

        case 'SERVICE CHANGE':
            $statusOut[0] = "bus_PlannedWork";
            $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Service Change</a>';
            break;

        case 'PLANNED WORK':
            $statusOut[0] = "bus_PlannedWork";
            $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Planned Detour</a>';
            break;

        case 'DELAYS':
            $statusOut[0] = "bus_Delays";
            $statusOut[1] = '<a style="color: #990033" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Delays</a>';
            break;

        default:
            $statusOut[0] = "bus_GoodService";
            $statusOut[1] = "-";
            break;
        }

        return $statusOut;
    }

    private function xml_to_object($xml) {
        $xml = str_replace("&", "#@#", $xml);
        $parser = xml_parser_create();

        xml_parser_set_option($parser, XML_OPTION_CASE_FOLDING, 0);
        xml_parser_set_option($parser, XML_OPTION_SKIP_WHITE, 1);
        xml_parser_set_option($parser, XML_OPTION_TARGET_ENCODING, "UTF-8");
        xml_parse_into_struct($parser, $xml, $tags);
        xml_parser_free($parser);

        $elements = array();
        $stack = array();

        foreach ($tags as $tag)
        {
                $index = count($elements);

                if ($tag['type'] == "complete" || $tag['type'] == "open")
                {
                        $elements[$index] = new XmlElement;
                        $elements[$index]->name = $tag['tag'];

                        if(isset($tag['value']))
                                $elements[$index]->content = str_replace("#@#", "&", $tag['value']);

                        if ($tag['type'] == "open")
                        {
                                $elements[$index]->children = array();
                                $stack[count($stack)] = &$elements;
                                $elements = &$elements[$index]->children;
                        }
                }

                if ($tag['type'] == "close")
                {  // pop
                        $elements = &$stack[count($stack) - 1];
                        unset($stack[count($stack) - 1]);
                }
        }
        return $elements[0];  // the single top-level element
    }
}
/*
function notifyByEmail($msg)
{
    $to = "ksheikh@mtahq.org, aszegda@mtahq.org, CYoung@mtahq.org";
    $subject = "Service Status Data Problem!";
    $body = $msg;

    // if (mail($to, $subject, $body, "From: ksheikh@mtahq.org")) {
    //     echo("<p>Message successfully sent!</p>");
    // } else {
    //     echo("<p>Message delivery failed...</p>");
    // }
    mail($to, $subject, $body, "From: ksheikh@mtahq.org");
}
*/
class XmlElement {
    var $name;
    var $content;
    var $children;
}
?>