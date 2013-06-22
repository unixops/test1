/*!
 * MTA Service Status Plugin
 * Fetches service status data.
 */
 (function($) {

    $().ready(function(){

        $('#pageTitleArea').html("<h2>MTA Service Status</h2>");

        var differential = Math.round((new Date().getTime())/60000);
        var url = "/service_status_json/" + differential;
        // var url = "http://newdev.mta-hq.info/service_status_json/" + differential;
        // var url = "http://new.mta-hq.info/service_status_json/" + differential;

        $.ajaxSetup({ 
            // cache: false,
            async: false,
            contentType: "application/json; charset=utf-8"
        });

        // console.log("ss making a request." + differential);

        $.ajax({
            url: url,
            dataType: 'json',
            success: function(d) {
                var data = $.parseJSON(d);
                
                // console.log("ss got data back.");

                var ts = (data.timestamp).split(" ");
                $(".statusDateTime").html("as of " + ts[1] + " " + ts[2]);

                $.each(data.subway, function(key, val){
                    $.each(val, function(index, val){
                        generateHTML(val.name, val.status, differential);
                    });
                });

                $.each(data.LIRR, function(key, val){
                    $.each(val, function(index, val){
                        generateRailHTML(val.name, val.status, "LIRR");
                    });
                });

                $.each(data.MetroNorth, function(key, val){
                    $.each(val, function(index, val){
                        generateRailHTML(val.name, val.status, "MetroNorth");
                    });
                });

                $.each(data.bus, function(key, val){
                    $.each(val, function(index, val){
                        generateBusHTML(val.name, val.status);
                    });
                });

                $.each(data.BT, function(key, val){
                    $.each(val, function(index, val){
                        generateBnTHTML(val.name, val.status);
                    });
                });
            },
            error: function(jqxhr, msg, exception) {
                $('#123').html(msg);
            }
        });

    });

    function generateHTML(name, val, differential)
    {
        switch(val) {
            case 'GOOD SERVICE':
                $('#'+name).addClass("subway_GoodService");
                $('#'+name).html("Good Service");
                break;
            case 'PLANNED WORK':
                $('#'+name).addClass("subway_PlannedWork");
                var html = '<a style="color: #996600" href="/status/subway/' + name + '/' + differential +'">Planned Work</a>';
                $('#'+name).html(html);
                break;
            case 'SERVICE CHANGE':
                $('#'+name).addClass("subway_ServiceChange");
                var html = '<a style="color: #996600" href="/status/subway/' + name + '/' + differential +'">Service Change</a>';
                $('#'+name).html(html);
                break;
            case 'DELAYS':
                $('#'+name).addClass("subway_Delays");
                var html = '<a style="color: #990033" href="/status/subway/' + name + '/' + differential +'">Delays</a>';
                $('#'+name).html(html);
                break;
            case 'SANDY REROUTE':
                $('#'+name).addClass("subway_sandyreroute");
                var html = '<a style="color: #5d0dff" href="/status/subway/' + name + '/' + differential +'">Sandy Reroute</a>';
                $('#'+name).html(html);
                break;
        }

        return html;
    }

    function generateRailHTML(name, val, service)
    {
        var n = name.replace(/\s+/g, '');

        switch(val) {
            case 'GOOD SERVICE':
                $('#'+n).addClass("rail_GoodService");
                $('#'+n).html("Good Service");
                break;
            case 'PLANNED WORK':
                $('#'+n).addClass("rail_PlannedWork");
                var html = '<a style="color: #996600" href="/status/' + service + '/' + n + '">Planned Work</a>';
                $('#'+n).html(html);
                break;
            case 'SERVICE CHANGE':
                $('#'+n).addClass("rail_ServiceChange");
                var html = '<a style="color: #996600" href="/status/' + service + '/' + n + '">Service Change</a>';
                $('#'+n).html(html);
                break;
            case 'DELAYS':
                $('#'+n).addClass("rail_Delays");
                var html = '<a style="color: #990033" href="/status/' + service + '/'  + n + '">Delays</a>';
                $('#'+n).html(html);
                break;
        }

        return html;
    }

    function generateBusHTML(name, val)
    {
        var n = name.replace(/\s+/g, '');

        switch(val) {
            case 'GOOD SERVICE':
                $('#'+n).addClass("bus_GoodService");
                $('#'+n).html("Good Service");
                break;
            case 'PLANNED WORK':
                $('#'+n).addClass("bus_PlannedWork");
                var html = '<a style="color: #996600" href="/status/bus/' + n + '">Planned Detour</a>';
                $('#'+n).html(html);
                break;
            case 'SERVICE CHANGE':
                $('#'+n).addClass("bus_PlannedWork");
                var html = '<a style="color: #996600" href="/status/bus/' + n + '">Service Change</a>';
                $('#'+n).html(html);
                break;
            case 'DELAYS':
                $('#'+n).addClass("bus_Delays");
                var html = '<a style="color: #990033" href="/status/bus/' + n + '">Delays</a>';
                $('#'+n).html(html);
                break;
        }

        return html;
    }

    function generateBnTHTML(name, val)
    {
        var n = name.replace(/\s+/g, '').replace(".", '');

        switch(val) {
            case 'GOOD SERVICE':
                $('#'+n).addClass("bus_GoodService");
                $('#'+n).html("Good Service");
                break;
            case 'PLANNED WORK':
                $('#'+n).addClass("bus_PlannedWork");
                var html = '<a style="color: #996600" href="/status/BT/' + n + '">Planned Work</a>';
                $('#'+n).html(html);
                break;
            case 'SERVICE CHANGE':
                $('#'+n).addClass("bus_PlannedWork");
                var html = '<a style="color: #996600" href="/status/BT/' + n + '">Service Change</a>';
                $('#'+n).html(html);
                break;
            case 'DELAYS':
                $('#'+n).addClass("bus_Delays");
                var html = '<a style="color: #990033" href="/status/BT/' + n + '">Delays</a>';
                $('#'+n).html(html);
                break;
        }

        return html;
    }        

}(jQuery));

