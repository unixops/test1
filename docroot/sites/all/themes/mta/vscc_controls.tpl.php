<?php

/**
 * @file
 * Views Slideshow Configurable Controls HTML template.
 */
?>
<div id="vscc_controls_<?php print $variables['vss_id']; ?>" class="<?php print $classes; ?>">
  <?php print $rendered_control_previous; ?>
  <?php if (isset($rendered_control_pause)) {
    print $rendered_control_pause;
  } ?>
  <?php print $rendered_control_next; ?>
</div>

<div id="news_rotator_more">
	<?php print $news_rotator_more; ?>
	<div>
		<input type="button" value="more news"
			onclick="location.href='http://mta.info/news'">
	</div>
</div>

<div id="news_rotator_archive">
	<?php print $news_rotator_archive; ?>
	<div>
		<input type="button" value="archives"
			onclick="location.href='http://mta.info/news/archive.html'">
	</div>
</div>
