<?php
/**
 * @file
 * news_system.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_system_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_system_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function news_system_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: b_t_news_rotator
  $nodequeues['b_t_news_rotator'] = array(
    'qid' => '1',
    'name' => 'b_t_news_rotator',
    'title' => 'B & T News Rotator',
    'subqueue_title' => '',
    'size' => '6',
    'link' => 'Add to B & T queue',
    'link_remove' => 'Remove from B & T queue',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'news_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: lirr_news_rotator
  $nodequeues['lirr_news_rotator'] = array(
    'qid' => '6',
    'name' => 'lirr_news_rotator',
    'title' => 'LIRR News Rotator',
    'subqueue_title' => '',
    'size' => '6',
    'link' => 'Add to LIRR queue',
    'link_remove' => 'Remove from LIRR queue',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'news_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: mnr_news_article
  $nodequeues['mnr_news_article'] = array(
    'qid' => '11',
    'name' => 'mnr_news_article',
    'title' => 'MNR News Rotator',
    'subqueue_title' => '',
    'size' => '6',
    'link' => 'Add to MNR queue',
    'link_remove' => 'Remove from MNR queue',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'news_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: news_rotator
  $nodequeues['news_rotator'] = array(
    'qid' => '16',
    'name' => 'news_rotator',
    'title' => 'MTA News Rotator',
    'subqueue_title' => '',
    'size' => '6',
    'link' => 'Add to MTA queue',
    'link_remove' => 'Remove from MTA queue',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'news_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: nyct_news_rotator
  $nodequeues['nyct_news_rotator'] = array(
    'qid' => '21',
    'name' => 'nyct_news_rotator',
    'title' => 'NYCT News Rotator',
    'subqueue_title' => '',
    'size' => '6',
    'link' => 'Add to NYCT queue',
    'link_remove' => 'Remove from NYCT queue',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'news_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function news_system_image_default_styles() {
  $styles = array();

  // Exported image style: portrait.
  $styles['portrait'] = array(
    'name' => 'portrait',
    'effects' => array(
      8 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '100',
          'height' => '110',
          'keepproportions' => 1,
          'style_name' => 'portrait',
        ),
        'weight' => '0',
      ),
      9 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '220',
          'upscale' => 1,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: small_rotator.
  $styles['small_rotator'] = array(
    'name' => 'small_rotator',
    'effects' => array(
      6 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '240',
          'height' => '220',
          'keepproportions' => 1,
          'style_name' => 'small_rotator',
        ),
        'weight' => '-10',
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '210',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '-9',
      ),
    ),
  );

  // Exported image style: wide_rotator.
  $styles['wide_rotator'] = array(
    'name' => 'wide_rotator',
    'effects' => array(
      7 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '438',
          'height' => '220',
          'keepproportions' => 1,
          'style_name' => 'wide_rotator',
        ),
        'weight' => '1',
      ),
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '438',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
