<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<meta http-equiv="X-UA-Compatible" content="IE=EmulateIE7"/>

<!--[if lt IE 9]>
			<style>.roundCorners, #block-google-appliance-ga-related-searches {border: 1px solid #b4b4b4;-moz-border-radius: 5px;-webkit-border-radius: 5px;border-radius: 5px;background: #fff;behavior: url(<?php print base_path();?>sites/all/themes/mta/border-radius.htc);}</style>
		<![endif]-->
		
<div id="page-wrapper">
	<div id="page">
		<div id="mainbox">
			<?php 
			if ($secondary_sf_menu): ?>
    	  		<div id="top-navigation"><div class="section clearfix">      
        			<?php //print $secondary_sf_menu;  ?>
				</div></div> <!-- /.section, /#top-navigation -->
			    <?php 
			endif; ?>
			<div id="topbar">
				<div id="branding">
					<a href=""><img src="<?php print $base_path ?>sites/all/themes/mta/images/mta_info.gif"></a>
				</div>
				<div id="middle-header">
				<?php print render($page['header_middle']); ?>
				</div>
				<div id="search">

			<?php print render($page['header_right']); ?>
			
				</div>
			 </div>
			<div id="navbar"><?php print render($page['navbar']);?></div>
			<div id="breadcrumb"> <!-- we leave the div and keep spacing -->
								<?php if ($breadcrumb){print $breadcrumb;}?>
			</div>
			<div id="contentbox" class="roundCorners clearfix">
				<div id="header">
					<div class="clearfix">
						<div id="logo-title">
							<div class="container">
								<div class="span-90">									
									<?php print $messages; ?>
									
							<!-- 	<div class="span-23 pull-1 append-1"> -->	
									<?php if ($page['sidebar_first']): ?>
										<div id="sidebar_first">
											<?php print render($page['sidebar_first']); ?>
											</div>
										<?php endif; ?>

							<!-- 	</div>close span-23 -->
								
								
								<?php if ($page['sidebar_first'] && $page['sidebar_second']) {
										print'<div id="main-message" class="span-43 small-main">';
								} elseif ($page['sidebar_first'] || $page['sidebar_second']){
										print'<div id="main-message" class="span-43 mid-main">';
								} else {
										print'<div id="main-message" class="span-43 full-main">';
								}
								?>

									<a id="main-content"></a>
									<div id="pageTitleArea" >
										<?php print render($title_prefix); ?>
										<?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
										<span><?php print render($title_suffix); ?>
										<?php print render($page['page_title']);?></span>
									</div>
									<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
									<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
									<?php print render($page['content']); ?>        
								</div><!-- close span-43 -->

							
									<?php if ($page['sidebar_second']): ?>
										<div id="sidebar_second" class="column sidebar"><div class="section">
										<?php print render($page['sidebar_second']); ?>
										</div></div> <!-- /.section, /#sidebar_second -->
									<?php endif; ?>

										<?php if ($page['help']): ?>
										<div id="help" class="column sidebar"><div class="section">
										<?php print render($page['help']); ?>
										</div></div> <!-- /.section, /#help -->
									<?php endif; ?>

									<?php if ($page['highlighted']): ?>
										<div id="highlighted" class="column sidebar" style="padding-top: 10px; border-top: 1px solid black;"><div class="section">
										<?php print render($page['highlighted']); ?>
										</div></div> <!-- /.section, /#highlighted-->
									<?php endif; ?>
						


								<!-- close span-21 last -->
						</div><!-- close container for grid -->
					</div>
				</div>
			</div>
		</div>
	</div>
	<?php print render($page['footer']);?>