<?php
/**
 * @file
 * b_t_homepage.box.inc
 */

/**
 * Implements hook_default_box().
 */
function b_t_homepage_default_box() {
  $export = array();

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
  $box->delta = 'footer';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Footer';
  $box->options = array(
    'body' => array(
      'value' => '<p>&nbsp;</p><hr /><p>&nbsp;<a href="http://mta.info/mta/employment/">Employment<img alt="" src="/sites/default/files/mtaimgs/employment.png" style="width: 26px; height: 19px;" /></a>&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/social/">Social Media <img alt="" src="/sites/default/files/mtaimgs/social_media.png" style="width: 80px; height: 18px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="http://www.transitmuseumstore.com/mtainfo"> Shop Transit<img alt="" src="/sites/default/files/mtaimgs/shop_transit.png" style="width: 21px; height: 18px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp; <a href="http://www.mta.info/mta/museum/">Transit Museum<img alt="" src="/sites/default/files/mtaimgs/transit_museum.png" style="width: 17px; height: 17px;" /></a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="www.mta.info/mta/aft/poetry/"> Poetry in Motion<img alt="" src="/sites/default/files/mtaimgs/PIM_feather.png" style="width: 17px; height: 19px;" /></a> &nbsp; &nbsp; <a href="http://mta.info/mta/aft/">Arts for Transit<img alt="" src="/sites/default/files/mtaimgs/arts_for_transit.png" style="width: 20px; height: 19px;" /></a> &nbsp;&nbsp; Google Translate<img alt="" src="/sites/default/files/mtaimgs/google_logo.png" style="width: 18px; height: 18px;" /> &nbsp;&nbsp;&nbsp;</p>',
      'format' => 'full_html',
    ),
  );
  $export['footer'] = $box;

  return $export;
}
