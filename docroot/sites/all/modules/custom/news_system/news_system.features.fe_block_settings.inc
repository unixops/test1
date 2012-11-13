<?php
/**
 * @file
 * news_system.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function news_system_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'views-mta_news-block' => array(
      'delta' => 'mta_news-block',
      'module' => 'views',
    ),
    'views-news_rotator-block_1' => array(
      'delta' => 'news_rotator-block_1',
      'module' => 'views',
    ),
    'views-news_rotator-block_2' => array(
      'delta' => 'news_rotator-block_2',
      'module' => 'views',
    ),
    'views-news_rotator-block_3' => array(
      'delta' => 'news_rotator-block_3',
      'module' => 'views',
    ),
    'views-news_rotator-block_4' => array(
      'delta' => 'news_rotator-block_4',
      'module' => 'views',
    ),
    'views-news_rotator-block_5' => array(
      'delta' => 'news_rotator-block_5',
      'module' => 'views',
    ),
    'views-news_rotator-block_7' => array(
      'delta' => 'news_rotator-block_7',
      'module' => 'views',
    ),
  );

  // mta
  $theme = array();

  $theme['views-mta_news-block'] = array(
    'module' => 'views',
    'delta' => 'mta_news-block',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_1'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_1',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_2'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_2',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_3'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_3',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_4'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_4',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_5'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_5',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_7'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_7',
    'theme' => 'mta',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['mta'] = $theme;

  // seven
  $theme = array();

  $theme['views-mta_news-block'] = array(
    'module' => 'views',
    'delta' => 'mta_news-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_1'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_2'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_3'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_4'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_4',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_5'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_5',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_rotator-block_7'] = array(
    'module' => 'views',
    'delta' => 'news_rotator-block_7',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
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
