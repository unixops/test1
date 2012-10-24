<?php
/**
 * @file
 * home_pages_base.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function home_pages_base_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-copyright_block' => array(
      'machine_name' => 'copyright_block',
      'module' => 'block',
    ),
    'block-footer_block' => array(
      'machine_name' => 'footer_block',
      'module' => 'block',
    ),
  );

  // mta
  $theme = array();

  $theme['block-copyright_block'] = array(
    'module' => 'block',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'copyright_block',
  );

  $theme['block-footer_block'] = array(
    'module' => 'block',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'footer_block',
  );

  $export['theme']['mta'] = $theme;

  // seven
  $theme = array();

  $theme['block-copyright_block'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'copyright_block',
  );

  $theme['block-footer_block'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'footer_block',
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
