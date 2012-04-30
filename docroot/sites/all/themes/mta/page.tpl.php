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
									<?php print render($title_prefix); ?>
									<?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
									<?php print render($title_suffix); ?>
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
<div class="container clear">
				<div style="text-align: left;" class="span-15">
					<div id="translate">
						<div id="google_translate_element">
							<div class="span-15" id="temp_GT">
								<ul style="margin: 0;">
									<li class="list_f last_list_f first_list_f"><span style="color: #0055AA; font-weight: bold; margin-right: 5px;">Google Translate</span><img src="<?php print base_path();?>sites/all/themes/mta/images/google_logo.png" style="vertical-align: baseline;"></li>
								</ul>
							</div>
						</div><!-- close google_translate_element -->
					</div><!-- close translate -->
				</div><!-- close span-14 last -->

			</div>
</div>
					  
	