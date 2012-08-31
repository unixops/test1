<?php
/**
 * @file
 * mta_home_new.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mta_home_new_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'advertise_on_metrocard';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Advertise on Metro Card';
  $box->options = array(
    'body' => array(
      'value' => '<h2 style="margin-bottom:6px;"><a href="http://mta.info/nyct/AdvertiseonMetroCard.html">Advertise on MetroCard <img alt="" src="/sites/default/files/mtaimgs/mini_MetroCard.jpg" style="width: 26px; height: 17px; float: right;" /></a></h2><div style="float:right; margin-left:0; margin-top:-4px;"><img alt=" " src="/sites/default/files/mtaimgs/MC-Front-Back.jpg" style="width: 74px; height: 46px;" /></div><ul class="arrow" style="margin-top:0; font-size:12px;"><li style="margin-bottom:4px;"><a href="http://mta.info/nyct/AdvertiseonMetroCard.html">Reach Millions</a></li><li><a href="http://mta.info/mta/realestate/ad_tele.html">Other Advertising Opportunities</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['advertise_on_metrocard'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'app_center';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'App Center';
  $box->options = array(
    'body' => array(
      'value' => '<div class="span-22" style="background: url(\'/siteimages/app_wkdr.jpg\') no-repeat right top; padding: 5px 0 10px; margin: 10px 0 0px;"><h2><img alt="" src="/sites/new.localhost/files/mtaimgs/monitor.jpg" style="width: 48px; height: 42px; float: right;" />App Center</h2><ul class="arrow"><li><a href="http://wp1.mtahq.org/apps/">Get Apps</a></li><li><a href="http://wp1.mtahq.org/art/app/">Arts for Transit App</a></li><li><a href="http://wp1.mtahq.org/apps/weekenderApp.html">New App! The Weekender</a></li><li><a href="http://wp1.mtahq.org/developers">Developer Resources</a></li></ul></div><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['app_center'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'capitol_program';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Capitol Program';
  $box->options = array(
    'body' => array(
      'value' => '<div class="span-45" id="centerRow3" style="margin-top: 10px;"><table border="0" cellpadding="1" cellspacing="1" style="width: 420px;"><tbody><tr><td colspan="2" style="white-space: nowrap; text-align: left; vertical-align: top;"><h2><a href="http://wp1.mtahq.org/capital">MTA Capital Program</a></h2></td></tr><tr><td style="text-align: left; vertical-align: top;"><div class="span-18"><ul class="arrow"><li><a href="http://www.mta.info/capital/">Building for the Future</a></li><li><a href="http://www.mta.info/capital/future/east-side-access.php">East Side Access</a></li><li><a href="http://www.mta.info/capital/future/avenue-subway.php">Second Avenue Subway</a></li></ul></div></td><td style="text-align: left; vertical-align: top;"><div class="span-14"><ul class="arrow"><li><a href="http://wp1.mtahq.org/nyct/service/sevenlin.htm"><img align="absmiddle" alt="7 Line" class="bullet" src="http://wp1.mtahq.org/siteimages/subwaybullets/7.png" title="View 7 Line Service Information" /></a> <a href="http://www.mta.info/capital/future/extension.php">Line Extension</a></li><li><a href="http://www.mta.info/capital/future/fstc.php">Fulton Center</a></li></ul></div></td><td style="text-align: left; vertical-align: top;"><ul class="arrow"><li><a href="http://wp1.mtahq.org/default_new.html">Congestion Relief Project within Harold Interlocking</a><p>&nbsp;</p></li></ul></td></tr></tbody></table></div><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['capitol_program'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'copyright';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Copyright';
  $box->options = array(
    'body' => array(
      'value' => '<hr /><p><strong>&nbsp; A public benefit corporation chartered by the State of New York.&nbsp; &nbsp; <a href="http://mta.info/mta/privacy.htm">Internet Privacy Policy</a></strong><a href="http://mta.info/sitehtml/mtacopy.htm">&copy; Copyright</a> 2012 Metropolitan Transportation Authority.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['copyright'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'customer_self_service';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Customer Self Service';
  $box->options = array(
    'body' => array(
      'value' => '<div style="float: left; height: 170px; width: 203px; margin-right: 10px;"><h2>Customer Self Service</h2><div style="margin: 20px 0 15px 0px; padding-bottom: 5px;"><a href="http://mta.info/selfserve/"><img alt="Graphic Icon" src="http://mta.info/siteimages/self_serv.jpg" style="float: left; margin: 0 10px 10px 0;" /></a><ul class="arrow" style="margin: 0 0 20px 55px;"><li style="margin-bottom: 1px;"><a href="http://mta.info/selfserve/">Things you can do online, anytime</a></li></ul></div><div><a href="http://mta.info/faqs.htm/"><img alt="Envelope Icon" src="http://mta.info/siteimages/get_n_touch.jpg" style="float: left; margin: 1px 10px 20px 0;" /></a><ul class="arrow" style="margin: 25px 0px 20px 55px;"><li style="margin-top: -10px; margin-bottom: 1px;"><a href="http://mta.info/faqs.htm/">Get in touch with us</a> E-mail, send a letter, phone us, or search our FAQs.</li></ul></div></div><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['customer_self_service'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'fast_track';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Fast Track';
  $box->options = array(
    'body' => array(
      'value' => '<img alt="" src="/sites/new.localhost/files/mtaimgs/fastrack.jpg" style="width: 185px; height: 22px;" /><ul class="arrow"><li><a href="http://wp1.mtahq.org/nyct/service/oneline.htm"><img align="absmiddle" alt="1 Line" class="bullet" src="http://wp1.mtahq.org/siteimages/subwaybullets/1.png" title="View 1 Line Service Information" /></a><a href="http://wp1.mtahq.org/nyct/service/twoline.htm"><img align="absmiddle" alt="2 Line" class="bullet" src="http://wp1.mtahq.org/siteimages/subwaybullets/2.png" title="View 2 Line Service Information" /></a><a href="http://wp1.mtahq.org/nyct/service/threelin.htm"><img align="absmiddle" alt="3 Line" class="bullet" src="http://wp1.mtahq.org/siteimages/subwaybullets/3.png" title="View 3 Line Service Information" /></a><a href="http://wp1.mtahq.org/default_new.html"> June 25&ndash;29</a></li><li><a href="http://wp1.mtahq.org/nyct/service/fourline.htm"><img align="absmiddle" alt="4 Line" class="bullet" src="http://wp1.mtahq.org/siteimages/subwaybullets/4.png" title="View 4 Line Service Information" /></a><a href="http://wp1.mtahq.org/nyct/service/fiveline.htm"><img align="absmiddle" alt="5 Line" class="bullet" src="http://wp1.mtahq.org/siteimages/subwaybullets/5.png" title="View 5 Line Service Information" /></a><a href="http://wp1.mtahq.org/nyct/service/sixline.htm"><img align="absmiddle" alt="6 Line" class="bullet" src="http://wp1.mtahq.org/siteimages/subwaybullets/6.png" title="View 6 Line Service Information" /></a><a href="http://wp1.mtahq.org/default_new.html"> Accomplishments</a></li><li><a href="http://wp1.mtahq.org/default_new.html">2012 Service Change Schedule</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['fast_track'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Footer';
  $box->options = array(
    'body' => array(
      'value' => '<p>&nbsp;</p>
<hr /><p>&nbsp;<a href="http://mta.info/mta/employment/">Employment<img alt="" src="/sites/default/files/mtaimgs/employment.png" style="width: 26px; height: 19px;" /></a>&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/social/">Social Media <img alt="" src="/sites/default/files/mtaimgs/social_media.png" style="width: 80px; height: 18px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="http://www.transitmuseumstore.com/mtainfo"> Shop Transit<img alt="" src="/sites/default/files/mtaimgs/shop_transit.png" style="width: 21px; height: 18px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/mta/museum/">Transit Museum<img alt="" src="/sites/default/files/mtaimgs/transit_museum.png" style="width: 17px; height: 17px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="www.mta.info/mta/aft/poetry/"> Poetry in Motion<img alt="" src="/sites/default/files/mtaimgs/PIM_feather.png" style="width: 17px; height: 19px;" /></a> &nbsp; &nbsp; <a href="http://mta.info/mta/aft/">Arts for Transit<img alt="" src="/sites/default/files/mtaimgs/arts_for_transit.png" style="width: 20px; height: 19px;" /></a> &nbsp;&nbsp; Google Translate<img alt="" src="/sites/default/files/mtaimgs/google_logo.png" style="width: 18px; height: 18px;" /> &nbsp;&nbsp;&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['footer'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'gc_centennial';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Grand Central Centennial';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Grand Central<img alt="" src="/sites/default/files/mtaimgs/GCT_logo_sm.jpg" style="width: 74px; height: 80px; float: right;" /><br />Centennial</h2><ul class="arrow" style="margin-top:0; font-size:12px;"><li style="margin-bottom:3px;"><a href="http://mta.info/gct/">Arriving 2013</a></li><li><a href="http://mta.info/gct/sponsor.html">Become a Sponsor</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['gc_centennial'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'hear_from_you';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Hear From You';
  $box->options = array(
    'body' => array(
      'value' => '<div class="span-21" style="padding-bottom: 15px; background: url(\'/siteimages/survey.jpg\') no-repeat right center; margin: 10px 0 0px 10px;"><h2><a href="http://wp1.mtahq.org/survey">We Want to Hear from You</a><br /><br />&nbsp;</h2><p>&nbsp;</p><ul class="arrow"><li><a href="http://wp1.mtahq.org/survey">Take the MTA&#39;s Online<br />Customer Survey&ndash;you<br />could win FREE rides</a></li></ul></div><p>&nbsp;</p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['hear_from_you'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mta_bus_time';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'MTA Bus Time';
  $box->options = array(
    'body' => array(
      'value' => '<p style="text-align: center;"><img alt="" src="/sites/default/files/mtaimgs/Bus_Time_anim.gif" style="width: 223px; height: 47px;" /></p><ul class="arrow" style="margin-top:0;"><li style="margin-bottom: 0px;"><a href="http://bustime.mta.info">Go to Bus Time</a></li><li><a href="http://mta.info/nyct/BusTime_B61.htm">New! Now on the B61</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['mta_bus_time'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'tourism';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Tourism';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Tourism<img alt="" src="/sites/default/files/mtaimgs/liberty_sm.jpg" style="width: 35px; height: 69px; float: right;" /></h2><ul class="arrow" style="margin-top:0; font-size:12px;"><li><a href="http://mta.info/metrocard/tourism/index.html">About MetroCard<sup>&reg;</sup></a></li><li><a href="http://mta.info/mta/destinations.htm">Deals &amp; Getaways</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['tourism'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ways_to_save';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Ways To Save';
  $box->options = array(
    'body' => array(
      'value' => '<table align="center" cellpadding="0" cellspacing="0" style="width: 420px;"><tbody><tr><td><h2>Ways to Save</h2></td><td><h2 style="text-align: center;"><strong>$$</strong></h2></td></tr></tbody></table><table align="left" border="0" cellpadding="3" cellspacing="5" height="244" style="width: 420px;height: 160px" width="515"><tbody><tr><td style="white-space: nowrap; text-align: left; vertical-align: top;"><h4 style="margin-bottom: 3px;">Subway and Bus</h4><ul class="arrow" style="margin: 0;"><li><a href="http://wp1.mtahq.org/mta/fares/mc_value.htm">MetroCard</a></li><li><a href="http://wp1.mtahq.org/nyct/fare/rfindex.htm">Reduced Fare</a></li><li><a href="http://wp1.mtahq.org/metrocard/EasyPayXpress.htm">E</a></li></ul></td><td style="white-space: nowrap; text-align: left; vertical-align: top;"><h4 style="margin-bottom: 3px;">Rail</h4><ul class="arrow" style="margin: 0;"><li><a href="http://wp1.mtahq.org/lirr/about/TicketInfo/ValueChart.htm">Long Island Rail Road</a></li><li><a href="http://wp1.mtahq.org/mta/fares/MNRValueTables_rev2.html">Metro-North Railroad</a></li></ul><h4 style="margin-bottom:3px;">Transit Benefits</h4><a href="http://wp1.mtahq.org/mta/farebenefits.htm">Pre-Tax</a></td><td style="white-space: nowrap; vertical-align: top; text-align: left;"><h4 style="margin-bottom:3px;">Car</h4><ul class="arrow" style="margin: 0;"><li><a href="http://wp1.mtahq.org/mta/pdf/approved_bandt_tolls.pdf">E-ZPass</a><sup style="color:#0055aa;">&reg;</sup></li><li><a href="http://wp1.mtahq.org/bandt/onthego/onthego.html">E-ZPass On-the-Go</a></li></ul></td></tr></tbody></table><p>&nbsp;</p><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ways_to_save'] = $box;

  return $export;
}
