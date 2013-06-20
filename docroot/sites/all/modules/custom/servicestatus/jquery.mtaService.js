/*!
 * MTA Service Status Plugin
 */
 (function($) {

    $.fn.mtaService = function(service, line) {

        var ele = $(this);

        var differential = Math.round((new Date().getTime())/60000);
        // var url = "http://newdev.mta-hq.info/service_status_json/" + differential;
        // var url = "http://new.mta-hq.info/service_status_json/" + differential;
        var url = "/service_status_json/" + differential;
        
        // console.log("plugin making a request." + differential);

        $.getJSON(url,
            function(d){
                var data = $.parseJSON(d);
                var arr;
                var notFound = true;

                // console.log("plugin got data back.");

                $.each(data, function(index, d){
                    if (service == "subway")
                        arr = data.subway;
                    else if (service == "LIRR")
                        arr = data.LIRR;
                    else if (service == "MetroNorth")
                        arr = data.MetroNorth;
                    else if (service == "bus")
                        arr = data.bus;
                    else if (service == "BT")
                        arr = data.BT;

                    $.each(arr, function(key, val){
                        if (notFound){
                            $.each(val, function(index, v){
                                if (notFound){
                                    if ((v.name.replace(/\s+/g, '').replace(".", '')) == line)
                                    {  
                                        // console.log("Data returned : " + v.text);

                                        if (v.text.length)
                                            ele.html(v.text);
                                        else
                                            ele.html("Your data is stale. Please go back to MTA home page and refresh your page.")

                                        notFound = false;

                                        return notFound;
                                    }
                                }
                            });
                        }
                        
                    });
                });
            }
        );
    }
}(jQuery));