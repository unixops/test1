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

  $export['version'] = '2.0';

  $export['views-mta_news-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'mta_news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mta',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-news_rotator-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'news_rotator-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mta',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-news_rotator-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'news_rotator-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mta',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-news_rotator-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'news_rotator-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mta',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-news_rotator-block_4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'news_rotator-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mta',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-news_rotator-block_5'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'news_rotator-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mta',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-news_rotator-block_7'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'news_rotator-block_7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mta',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
