<?php
/**
 * @file
 * home_pages_base.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function home_pages_base_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright_block';
  $fe_block_boxes->body = '<hr />
<p><strong>&nbsp; A public benefit corporation chartered by the State of New York.&nbsp; &nbsp; <a href="http://mta.info/mta/privacy.htm">Internet Privacy Policy</a></strong><a href="http://mta.info/sitehtml/mtacopy.htm">&copy; Copyright</a> 2012 Metropolitan Transportation Authority.</p>
<p>&nbsp;</p>
';

  $export['copyright_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_block';
  $fe_block_boxes->body = '<p>&nbsp;</p>
<hr />
<p>&nbsp;<a href="http://mta.info/mta/employment/">Employment<img alt="" src="sites/all/themes/mta/images/employment.png" /></a>&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/social/">Social Media <img alt="" src="sites/all/themes/mta/images/social_media.png" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="http://www.transitmuseumstore.com/mtainfo"> Shop Transit<img alt="" src="sites/all/themes/mta/images/shop_transit.png" /></a>&nbsp;&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/mta/museum/">Transit Museum<img alt="" src="sites/all/themes/mta/images/transit_museum.png" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="www.mta.info/mta/aft/poetry/"> Poetry in Motion<img alt="" src="sites/all/themes/mta/images/PIM_feather.png" /></a> &nbsp; &nbsp; <a href="http://mta.info/mta/aft/">Arts for Transit<img alt="" src="sites/all/themes/mta/images/arts_for_transit.png" /></a> &nbsp;&nbsp; Google Translate<img alt="" src="sites/all/themes/mta/images/google_logo.png" /> &nbsp;&nbsp;&nbsp;</p>
<p>&nbsp;</p>
';

  $export['footer_block'] = $fe_block_boxes;

  return $export;
}
