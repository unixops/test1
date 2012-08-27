<?php
/**
 * @file
 * home_page_boxes.box.inc
 */

/**
 * Implements hook_default_box().
 */
function home_page_boxes_default_box() {
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
      'value' => '<h2 style="margin-bottom:6px;"><a href="http://mta.info/nyct/AdvertiseonMetroCard.html">Advertise on MetroCard <img alt="" src="http://mta.info/siteimages/mini_MetroCard.jpg" style="width: 26px; height: 17px; float: right;" /></a></h2>
<div style="float:right; margin-left:0; margin-top:-4px;"><img alt=" " src="http://mta.info/images/MC-Front-Back.jpg" /></div>
<ul class="arrow" style="margin-top:0; font-size:12px;">
	<li style="margin-bottom:4px;"><a href="http://mta.info/nyct/AdvertiseonMetroCard.html">Reach Millions</a></li>
	<li><a href="http://mta.info/mta/realestate/ad_tele.html">Other Advertising Opportunities</a></li>
</ul>
',
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
      'value' => '<div style="margin-top:0; height:82px; font-size:12px;">
	<h2><a href="http://mta.info/apps/">App Center</a></h2>
	<div class="span-12" style="margin-top:0; margin-right:0; float:left;">
		<ul class="arrow" style="margin:0; padding:0;">
			<li><a href="http://mta.info/mta/news/releases/?en=120620-BT63">MTA EZTravel</a></li>
			<li><a href="http://mta.info/apps/weekenderApp.html">The Weekender</a></li>
			<li><a href="http://mta.info/art/app/">Arts for Transit</a></li>
		</ul>
	</div>
	<div class="span-8 last" style="margin-top:-8px; padding:0; float:right;">
		<ul class="arrow">
			<li><a href="http://mta.info/apps">More Apps</a></li>
			<li><a href="http://mta.info/developers">Developer Resources</a></li>
		</ul>
	</div>
</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['app_center'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'copyright';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Copyright';
  $box->options = array(
    'body' => array(
      'value' => '<hr />
<p><strong>&nbsp; A public benefit corporation chartered by the State of New York.&nbsp; &nbsp; <a href="http://mta.info/mta/privacy.htm">Internet Privacy Policy</a></strong><a href="http://mta.info/sitehtml/mtacopy.htm">&copy; Copyright</a> 2012 Metropolitan Transportation Authority.</p>',
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
      'value' => '<div style="float: left; height: 170px; width: 203px; margin-right: 10px;">
	<h2>Customer Self Service</h2>
	<div style="margin: 20px 0 15px 0px; padding-bottom: 5px;"><a href="http://mta.info/selfserve/"><img alt="Graphic Icon" src="http://mta.info/siteimages/self_serv.jpg" style="float: left; margin: 0 10px 10px 0;" /></a>
		<ul class="arrow" style="margin: 0 0 20px 55px;">
			<li style="margin-bottom: 1px;"><a href="http://mta.info/selfserve/">Things you can do online, anytime</a></li>
		</ul>
	</div>
	<div><a href="http://mta.info/faqs.htm/"><img alt="Envelope Icon" src="http://mta.info/siteimages/get_n_touch.jpg" style="float: left; margin: 1px 10px 20px 0;" /></a>
		<ul class="arrow" style="margin: 25px 0px 20px 55px;">
			<li style="margin-top: -10px; margin-bottom: 1px;"><a href="http://mta.info/faqs.htm/">Get in touch with us</a> E-mail, send a letter, phone us, or search our FAQs.</li>
		</ul>
	</div>
</div>
<p>&nbsp;</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['customer_self_service'] = $box;

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
<p>&nbsp;<a href="http://mta.info/mta/employment/">Employment<img alt="" src="http://mta.info/siteimages/employment.png" style="width: 26px; height: 19px;" /></a>&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/social/">Social Media <img alt="" src="http://mta.info/siteimages/social_media.png" style="width: 84px; height: 19px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="http://www.transitmuseumstore.com/mtainfo"> Shop Transit<img alt="" src="http://mta.info/siteimages/shop_transit.png" style="width: 22px; height: 19px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/mta/museum/">Transit Museum<img alt="" src="http://mta.info/siteimages/transit_museum.png" style="width: 19px; height: 19px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="www.mta.info/mta/aft/poetry/"> Poetry in Motion<img alt="" src="http://mta.info/siteimages/PIM_feather.png" style="width: 17px; height: 19px;" /></a> &nbsp; &nbsp; <a href="http://mta.info/mta/aft/">Arts for Transit<img alt="" src="http://mta.info/siteimages/arts_for_transit.png" style="width: 20px; height: 19px;" /></a> &nbsp;&nbsp; Google Translate<img alt="" src="http://mta.info/siteimages/google_logo.png" style="width: 19px; height: 19px;" /> &nbsp;&nbsp;&nbsp;</p>
',
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
      'value' => '<h2>Grand Central<img alt="" src="http://mta.info/siteimages/GCT_logo_sm.jpg" style="width: 74px; height: 80px; float: right;" /><br />
	Centennial</h2>
<ul class="arrow" style="margin-top:0; font-size:12px;">
	<li style="margin-bottom:3px;"><a href="http://mta.info/gct/">Arriving 2013</a></li>
	<li><a href="http://mta.info/gct/sponsor.html">Become a Sponsor</a></li>
</ul>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['gc_centennial'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mta_bus_time';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'MTA Bus Time';
  $box->options = array(
    'body' => array(
      'value' => '<p style="text-align: center;"><img alt="" src="http://mta.info/siteimages/Bus_Time_anim.gif" style="width: 223px; height: 47px;" /></p>
<ul class="arrow" style="margin-top:0;">
	<li style="margin-bottom: 0px;"><a href="http://bustime.mta.info">Go to Bus Time</a></li>
	<li><a href="http://mta.info/nyct/BusTime_B61.htm">New! Now on the B61</a></li>
</ul>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['mta_bus_time'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mta_capitol';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'MTA Capitol Program';
  $box->options = array(
    'body' => array(
      'value' => '<div>
	<h2><a href="http://mta.info/capital">MTA Capital Program</a></h2>
	<ul class="arrow" style="margin-top:0;">
		<li><a href="http://mta.info/capital">Building for the future</a></li>
		<li><a href="http://mta.info/sasair">Second Ave Subway Air Study</a></li>
	</ul>
</div>
<p>&nbsp;</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['mta_capitol'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'special_service';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Special Service';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Special Service Notices</h2>
<ul class="arrow" style="font-size:12px;">
	<li><a href="http://mta.info/supplemental/lirr/EastSideAccessWork.htm">Starting July 9: LIRR PM Peak Service Changes due to East Side Access work</a></li>
	<li><a href="http://mta.info/nyct/service/fastrack_changes.htm">Subway FASTRACK schedule</a></li>
</ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['special_service'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'tourism';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Tourism';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Tourism<img alt="" src="http://mta.info/siteimages/liberty_sm.jpg" style="width: 35px; height: 69px; float: right;" /></h2>
<ul class="arrow" style="margin-top:0; font-size:12px;">
	<li><a href="http://mta.info/metrocard/tourism/index.html">About MetroCard<sup>&reg;</sup></a></li>
	<li><a href="http://mta.info/mta/destinations.htm">Deals &amp; Getaways</a></li>
</ul>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['tourism'] = $box;

  return $export;
}
