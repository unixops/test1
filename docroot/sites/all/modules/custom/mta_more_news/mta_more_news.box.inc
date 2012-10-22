<?php
/**
 * @file
 * mta_more_news.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mta_more_news_default_box() {
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

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'more_news_links';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'More News Links';
  $box->options = array(
    'body' => array(
      'value' => '<div>
		<h2>News Links</h2>
		<ul class="arrow">

		<li><a href="/mta/news/books">Board &amp; Committee Materials</a></li>
		<li><a href="/mta/news/calendar.htm">Committee Meeting Calendar</a></li>	
		<li><a href="/mta/network.htm">Facts &amp; Figures</a></li>
		<li><a href="/mta/budget/">Financial Information</a>
			<ul>
	<!--				<li><a href="/mta/budget/">Budget</a></li> -->
			<li><a href="/mta/ind-finance/budgetwatch.pdf">BudgetWatch</a></li>
			<li><a href="/mta/capital">Capital Program</a></li>
			<li><a href="/capitaldashboard/10_14/CapitalDashBoard7.html">Capital Program Dashboard</a></li>
			<li><a href="/mta/investor">Investor Information</a></li>
			<li><a href="/mta/budget/peg.html">PEG Reports</a></li>
			</ul>
		</li>
		<li><a href="/persdashboard/performance14.html">Performance Indicators</a></li>
		<li><a href="/mta/news/releases/">Press Releases</a></li>		
		<li><a href="/mta/news/hearings">Public Hearings</a><a href="/mta/news/releases/"></a></li>
		<li><a href="/social">Social Media</a></li>
		<li><a href="/mta/reports.html">Special Reports</a></li>		
		<li><a href="/mta/network.htm"></a><a href="/mta/webcasts">Webcasts</a></li>	
		</ul>
		
<p>
		<h2>News Archive</h2>
<a href="archive.html">Read more archived stories</a></p></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['more_news_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'more_news_video';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'More News Video';
  $box->options = array(
    'body' => array(
      'value' => '<div><h2>MTA Video</h2><p><a href="http://www.youtube.com/mtainfo">Click here to access all current and archived videos on the MTA&#39;s official YouTube channel</a></p><p style="text-align: center;"><img alt="" src="/sites/default/files/mtaimgs/videopage.jpg" style="width: 165px; height: 117px;" /></p></div><p>&nbsp;</p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['more_news_video'] = $box;

  return $export;
}
