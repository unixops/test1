/*!
 * MTA Service Status Plugin
 */
 (function($) {

    $.fn.mtaService = function(service, line) {

        var ele = $(this);

        var differential = Math.round((new Date().getTime())/60000);
        var url = "http://newdev.mta-hq.info/service_status_json/" + differential;
        // var url = "http://new.mta-hq.info/service_status_json/" + differential;
        // var url = "http://newmta.localhost:8082/service_status_json/" + differential;
        

        $.getJSON(url,
            function(d){
                var data = $.parseJSON(d);
                var arr;

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
                        $.each(val, function(index, v){
                            if ((v.name.replace(/\s+/g, '').replace(".", '')) == line)
                            {
                                ele.html(v.text);
                                return false;
                            }
                        });
                    });
                });
            }
        );
    }
}(jQuery));