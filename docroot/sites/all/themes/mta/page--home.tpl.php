<!--[if lt IE 9]>
			<style>.roundCorners, #block-google-appliance-ga-related-searches {border: 1px solid #b4b4b4;-moz-border-radius: 5px;-webkit-border-radius: 5px;border-radius: 5px;background: #fff;behavior: url(<?php print base_path();?>sites/all/themes/mta/border-radius.htc);}</style>
		<![endif]-->
		
<div id="page">
		<div id="mainbox">

			<div id="topbar">
				<div id="branding">
					<a href="http://www.mta.info"><img src="<?php print $base_path ?>sites/all/themes/mta/images/mta_info.gif"></a>
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
			<div id="contentbox" class="clearfix">
							<div class="container">
								<div class="span-94">									
									<?php print $messages; ?>
											
									<?php if ($page['sidebar_first']): ?>
										<div id="sidebar_first" class="span-23">
											<?php print render($page['sidebar_first']); ?>
											</div>
										<?php endif; ?>

								
								
								<?php 
										print'<div id="main-message" class="span-46">';

								?>
								

									<a id="main-content"></a>

									
									<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
									<?php print render($page['content']); ?>
									<?php print render($page['content_bottom']); ?>
			<div id="contentbl" class="bl">
									<?php print render($page['content_bottom_left']); ?>
									</div>
			<div id ="contentbr" class="br">						
									<?php print render($page['content_bottom_right']); ?>
									</div>
									 						         
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
		<?php print render($page['footer']);?>
		
		</div>