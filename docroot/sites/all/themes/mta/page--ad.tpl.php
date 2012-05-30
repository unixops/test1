<meta http-equiv="X-UA-Compatible" content="IE=EmulateIE7"/>

<!--[if lt IE 9]>
			<style>.roundCorners, #block-google-appliance-ga-related-searches {border: 1px solid #b4b4b4;-moz-border-radius: 5px;-webkit-border-radius: 5px;border-radius: 5px;background: #fff;behavior: url(<?php print base_path();?>sites/all/themes/mta/border-radius.htc);}</style>
		<![endif]-->
		
<div id="page">
		<div id="mainbox">

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
							<div class="container">
								<div class="span-ad roundCorners">									
									<?php print $messages; ?>
			 				 <div id="pageTitleAreaAd">
									<?php print render($title_prefix); ?>
									<?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
									<?php print render($title_suffix); ?>
									<?php print render($page['page_title']); dsm('here is page_title '.$page['page_title']);?>
									
							</div>											


									<a id="main-content"></a>

									
									<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
									<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
									<?php print render($page['content']); ?>        
								<!-- close span-43 -->


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

										<?php if ($page['sidebar_second']): ?>
										<div id="sidebar_second_ad" class="column sidebar"><div class="section roundCorners">
										<?php print render($page['sidebar_second']); ?>
										</div></div> <!-- /.section, /#sidebar_second -->
									<?php endif; ?>	
		</div>
		<div id="foot-div">	
		<?php print render($page['footer']);?>
		</div>

</div>
									

		
