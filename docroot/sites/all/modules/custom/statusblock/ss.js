/*!
 * MTA Service Status Plugin
 */
 (function($) {

    $().ready(function(){

        $('#pageTitleArea').html("<h2>MTA Service Status</h2>");

        var differential = new Date().getTime();
        // var url = "http://newmta.localhost:8082/service_status_json/" + differential;
        url = "http://newdev.mta-hq.info/service_status_json/" + differential;
        // console.log(url);

        // console.log(data.timestamp);

        // $.each(json, function(index, d){
        //     // console.log (json.subway.line[3].name);
        //     var ts = (json.timestamp).split(" ");
        //     $(".statusDateTime").html("as of " + ts[1] + " " + ts[2]);

        //     $.each(json.subway, function(key, val){
        //         $.each(val, function(index, val){
        //             // console.log(key);
        //             // console.log(val.name);   
        //             generateHTML(val.name, val.status);
        //         }); 
        //     });
        // });

        $.ajaxSetup({ 
            cache: false,
            async: false,
        });

        $.ajax({
            url: url,
            dataType: 'json',
            success: function(data) {
                var ts = (data.timestamp).split(" ");
                $(".statusDateTime").html("as of " + ts[1] + " " + ts[2]);

                $.each(data.subway, function(key, val){
                    $.each(val, function(index, val){
                        // console.log(key);
                        // console.log(val.name);
                        generateHTML(val.name, val.status);
                    });
                });
            },
            error: function(jqxhr, msg, exception) {
                $('#123').html(msg);
            }
        });

        // $.getJSON(url,
        //     function(data){
                
        //         $.ajaxSetup({ 
        //             cache: false,
        //             async: false,
        //         });

        //         $.each(data, function(index, d){
        //             // console.log (data.subway.line[3].name);
        //             var ts = (data.timestamp).split(" ");
        //             $(".statusDateTime").html("as of " + ts[1] + " " + ts[2]);

        //             $.each(data.subway, function(key, val){
        //                 $.each(val, function(index, val){
        //                     // console.log(key);
        //                     // console.log(val.name);
        //                     generateHTML(val.name, val.status);
        //                 });
        //             });
        //         });
        //     });
        });

        function generateHTML(name, val)
        {
            switch(val) {
                case 'GOOD SERVICE':
                    $('#'+name).addClass("subway_GoodService");
                    $('#'+name).html(val);
                    break;
                case 'PLANNED WORK':
                    $('#'+name).addClass("subway_PlannedWork");
                    var html = '<a style="color: #996600" href="/serviceStatus/subway/' + name + '">Planned Work</a>';
                    $('#'+name).html(html);
                    break;
                case 'SERVICE CHANGE':
                    $('#'+name).addClass("subway_ServiceChange");
                    var html = '<a style="color: #996600" href="/serviceStatus/subway/' + name + '">Service Change</a>';
                    $('#'+name).html(html);
                    break;
                case 'DELAYS':
                    $('#'+name).addClass("subway_Delays");
                    var html = '<a style="color: #990033" href="/serviceStatus/subway/' + name + '">Delays</a>';
                    $('#'+name).html(html);
                    break;
                case 'SANDY REROUTE':
                    $('#'+name).addClass("subway_sandyreroute");
                    var html = '<a style="color: #5d0dff" href="/serviceStatus/subway/' + name + '">Sandy Reroute</a>';
                    $('#'+name).html(html);
                    break;
            }

            return html;
        }        

}(jQuery));

