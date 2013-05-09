/*!
 * MTA Service Status Plugin
 */
 (function($) {

    $.fn.mtaService = function(service, line) {

        var ele = $(this);

        url = "http://newdev.mta.info/service_status_json";

        $.getJSON(url,
            function(data){  
                var arr;

                $.ajaxSetup({ cache: false });

                // console.log("This is: " + this);
                // ele.html (data.subway.line[3].text);
                // console.log (data.subway.line[3].text);

                $.each(data, function(index, d){
                    // console.log (data.timestamp);
                    if (service == "subway")
                        arr = data.subway;
                    else if (service == "LIRR")
                        arr = data.LIRR;

                    $.each(arr, function(key, val){
                        $.each(val, function(index, v){
                            if (v.name == line)
                            {
                                console.log(v.status);
                                console.log(v.name);
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