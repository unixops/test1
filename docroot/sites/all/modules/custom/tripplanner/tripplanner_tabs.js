/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
(function($) {            
    Drupal.behaviors.tripplaner_tabs = {
        attach: function (context, settings) {
            
            var t = parseInt($.cookie('tp_mode'));
            
//            alert ("cookie is : '" + t + "'");

            switch (t) {
                case 1:
                    selectCustomTab();
                    break;
                case 2:
                    selectNearByTab();
                    break;
                case 3:
                    selectMenuTab();
                break;
                default:
                    selectCustomTab();
                    break;
            }
            
            // Add custom function here
            $("#CustomTab", context).click(function() {
                selectCustomTab();
            });            
            
            $("#NearByTab", context).click(function() {
                selectNearByTab();
            });
            
            $("#MenuTab", context).click(function() {
                selectMenuTab();
            });
            

            
            function selectCustomTab () {
                $("#customDiv").show();
                $("#nearbyDiv").hide();
                $("#menuDiv").hide();

                $("#MenuTab").removeClass("selectedStatusTab");
                $("#NearbyTab").removeClass("selectedStatusTab");
                $("#CustomTab").removeClass("notselectedStatusTab");
                $("#CustomTab").addClass("selectedStatusTab");

                $.cookie('tp_mode', '1', {path: '/'});
//                alert ("Subway - cookie is : " + $.cookie('ss_mode'));
            }
            
            function selectNearByTab () {
                $("#customDiv").hide();
                $("#menuDiv").hide();
                $("#nearbyDiv").show();

                $("#MenuTab").removeClass("selectedStatusTab");
                $("#CustomTab").removeClass("selectedStatusTab");
                $("#NearbyTab").removeClass("notselectedStatusTab");
                $("#NearbyTab").addClass("selectedStatusTab");

                $.cookie('tp_mode', '2', {path: '/'});
//                alert ("Rail - cookie is : " + $.cookie('tab'));
            }
            
            function selectMenuTab () {
                $("#customDiv").hide();
                $("#nearbyDiv").hide();
                $("#menuDiv").show();

                $("#CustomTab").removeClass("selectedStatusTab");
                $("#NearByTab").removeClass("selectedStatusTab");
                $("#MenuTab").removeClass("notselectedStatusTab");
                $("#MenuTab").addClass("selectedStatusTab");

                $.cookie('tp_mode', '3', {path: '/'});
//                alert ("Bus - cookie is : " + $.cookie('ss_mode'));
            }

 
        }       
    }
}(jQuery));