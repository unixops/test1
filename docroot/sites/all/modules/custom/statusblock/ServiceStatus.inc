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
    
    function __construct() {
        $cache = cache_get("ss_shortCache");
	    	if ($cache && $cache->expire > REQUEST_TIME)
	            $this->arrStatusData = $cache->data;
	    	else {
	            // Fetch fresh Service Status Data.
	            	
	            
	            //$this->arrXMLObject = $this->xml_to_object(file_get_contents("http://mta.info/status/serviceStatus.txt"));

	            // first check if file exsist on server
	    		if (isDomainAvailible("http://advisory.mtanyct.info/ServiceWS/service.aspx")){
	            	$this->arrXMLObject = $this->xml_to_object(file_get_contents("http://advisory.mtanyct.info/ServiceWS/service.aspx"));
	            }
		            if($this->arrXMLObject) {
		                $dt = explode(" ", $this->arrXMLObject->children[1]->content);
		
		               // dsm ($dt[2]);
		                $this->arrStatusData[0]         = "as of " . $dt[1] . " " . $dt[2];
		                $this->arrStatusData[1]         = strtotime($dt[0] . " " . $dt[1] . " " . $dt[2]);
		                
		                $this->arrStatusData[SUBWAY]    = $this->extractData(SUBWAY);
		                $this->arrStatusData[LIRR]      = $this->extractData(LIRR);
		                $this->arrStatusData[MNR]       = $this->extractData(MNR);
		                $this->arrStatusData[BUS]       = $this->extractData(BUS);
		                $this->arrStatusData[BNT]       = $this->extractData(BNT);                
		
		                $this->msgERROR = NULL;
		
		                cache_set("ss_shortCache", $this->arrStatusData, "cache", REQUEST_TIME+variable_get('statusblock_cache_time', 120));
		                cache_set("ss_longCache", $this->arrStatusData, "cache", REQUEST_TIME+variable_get('statusblock_cache_time_backup', 900));
		                cache_clear_all();
		        
	            } else {
	                $cache = cache_get("ss_longCache");
	                if ($cache && $cache->expire > REQUEST_TIME) {
	                    //dsm ("getting from long term");
	                    $this->arrStatusData = $cache->data;
	                } else {
	                    /* We have exhausted both caches and still have an issue with 
	                    * retrieving fresh Service Status information.
	                    */
	                    $this->msgERROR = "Service Status is not available.";
	                }
	            }
	    	}
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
                $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/' . $service.'/'.$index.'">Planned Detour</a>';
                break;
            
            case 'SERVICE CHANGE':
                $statusOut[0] = "rail_ServiceChange";
                $statusOut[1] = '<a style="color: #996600" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Service Change</a>';
                break;

            case 'DELAYS':
                $statusOut[0] = "rail_Delays";
                $statusOut[1] = '<a  style="color: #990033" href="' . $base_url . '/gss/'.$service.'/'.$index.'">Delays</a>';
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

class XmlElement {
    var $name;
    var $content;
    var $children;
}
function isDomainAvailible($domain)
       {
               //check, if a valid url is provided
               if(!filter_var($domain, FILTER_VALIDATE_URL))
               {
                       return false;
               }

               //initialize curl
               $curlInit = curl_init($domain);
               curl_setopt($curlInit,CURLOPT_CONNECTTIMEOUT,10);
               curl_setopt($curlInit,CURLOPT_HEADER,true);
               curl_setopt($curlInit,CURLOPT_NOBODY,true);
               curl_setopt($curlInit,CURLOPT_RETURNTRANSFER,true);

               //get answer
               $response = curl_exec($curlInit);

               curl_close($curlInit);

               if ($response) return true;

               return false;
       }
?>