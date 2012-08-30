<?php
/**
 * @file
 * mta_home_new.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mta_home_new_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function mta_home_new_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mta_home_new_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('Home Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news_article' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('Create News Article Copy'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
