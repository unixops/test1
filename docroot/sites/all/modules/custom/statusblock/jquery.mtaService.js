/*!
 * MTA Service Status Plugin
 */
 (function($) {

    $.fn.mtaService = function(service, line) {

        var ele = $(this);

        var differential = new Date().getTime();
        // url = "http://newdev.mta.info/service_status_json/xhr";
        url = "http://newdev.mta-hq.info/service_status_json/xhr/" + differential;
        // url = "http://newmta.localhost:8082/service_status_json/xhr/" + differential;

        // $.ajax({ 
        //     type: 'GET', 
        //     url: url,
        //     dataType: 'json',
        //     success: function (data) { 
        //         alert ("test new code");
        //         console.log(data.timestamp);
        //     }
        // });

        $.getJSON(url,
            function(data){  
                var arr;

                $.ajaxSetup({ cache: false });

                // console.log(data.timestamp);

                $.each(data, function(index, d){
                    if (service == "subway")
                        arr = data.subway;
                    else if (service == "LIRR")
                        arr = data.LIRR;

                    $.each(arr, function(key, val){
                        $.each(val, function(index, v){
                            if (v.name == line)
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