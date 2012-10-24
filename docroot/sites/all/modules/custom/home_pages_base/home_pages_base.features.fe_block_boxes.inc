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
  $fe_block_boxes->body = '<p style="padding-top:5px;"><strong>&nbsp; A public benefit corporation chartered by the State of New York.&nbsp; &nbsp; <a href="http://mta.info/mta/privacy.htm">Internet Privacy Policy</a></strong><a href="http://mta.info/sitehtml/mtacopy.htm">&copy; Copyright</a> 2012 Metropolitan Transportation Authority.</p>
<p>&nbsp;</p>
';

  $export['copyright_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_block';
  $fe_block_boxes->body = '<div class="prepend-3" style="width:904px; padding: 10px auto; border-top: 1px solid #b4b4b4; border-bottom: 1px solid #b4b4b4;">
	<ul id="footer-navlist">
		<li class="employment">
			<a href="/mta/employment/" style="width:80px;">Employment</a></li>
		<li class="shop">
			<a href="http://www.transitmuseumstore.com/mtainfo" style="width:85px;">Shop Transit</a></li>
		<li class="museum">
			<a href="http://www.mta.info/mta/museum/" style="width:105px;">Transit Museum</a></li>
		<li class="pim">
			<a href="http://www.mta.info/mta/aft/poetry/" style="width:104px;">Poetry in Motion</a></li>
		<li class="aft">
			<a href="/mta/aft/" style="width:95px;">Arts for Transit</a></li>
		<li class="social">
			<a href="http://www.mta.info/social/" style="width:86px;">Social Media</a></li>
	</ul>
</div>
';

  $export['footer_block'] = $fe_block_boxes;

  return $export;
}
