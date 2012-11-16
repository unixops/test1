<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($teaser) print render($content['field_image']); ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <?php print render($content['links']); ?>
<?php 
global $user;
$check = array_intersect(array('master content provider', 'content provider', 'administrator'), array_values($user->roles));
?>
<?php if (!empty($check)):?>
  <p>&nbsp;</p>
<p>Here is a preview of this News Article's rotator slide.
</p>
<div id="rotator-preview">

<?php    // is admin
    print views_embed_view('news_rotator_preview', 'block_1', $node->nid); // with single argument
?>
</div>
<p>&nbsp;</p>
<p>&nbsp;</p>

<div class="view-news-rotator-preview">
<div class="views_slideshow_main">
<div id="views_slideshow_cycle_div_news_rotator_preview-block_1_0" class="news-rot-image-large">
<?php print theme('image_style', array('style_name' => 'wide_rotator', 'path' => $node->field_wide_image['und'][0]['uri']));?>
</div>
<div class="news-rot-image-caption">
<div class="news-rot-image-caption-text">
<?php print 'text';
?>
</div>
</div>
</div>
</div>

<p>&nbsp;</p>
<p>&nbsp;</p>

<?php endif;?>

<?php if ($node->field_news_story_style['und'][0]['value']==0):?>

<div class = "news-rot-image-more single-image">
<?php print theme('image_style', array('style_name' => 'medium', 'path' => $node->field_wide_image['und'][0]['uri']));?>
<?php print '<div style="width:220px; margin-top:0;">'.$node->field_wide_image['und'][0]['title'].'</div>';?>
</div>

<?php //print views_embed_view('mta_news', 'page_1', $node->nid);?>
<?php print $node->field_article_body['und'][0]['value'];?>
<div>
<p>&nbsp;</p>
</div>


<?php elseif ($node->field_news_story_style['und'][0]['value']==1):?>
<?php print $node->field_article_body['und'][0]['value'];?>
<div class = "first-picture-multi">
<?php print theme('image_style', array('style_name' => 'medium', 'path' => $node->field_wide_image['und'][0]['uri']));?>
<?php print '<div style="width:220px; margin-top:0;">'.$node->field_wide_image['und'][0]['title'].'</div>';?>
</div>
<?php 
	print '<div class="more-pictures-multi">';

foreach ($field_mta_image['und'] as $more_images) {
	print '<div class="more-images-multi">';
	print theme('image_style', array('style_name' => 'medium', 'path' => $more_images['uri']));
	print $more_images['title'];
	print '</div>';
}
	print '</div>';

?>


<?php //print views_embed_view('mta_news', 'page_2', $node->nid);?>
<?php endif;?>

<?php //dsm($node);?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    //  print render($content);
    ?>
  </div>


  <?php print render($content['comments']); ?>

</div>
