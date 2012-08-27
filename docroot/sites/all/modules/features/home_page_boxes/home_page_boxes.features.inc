<?php
/**
 * @file
 * home_page_boxes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_boxes_ctools_plugin_api() {
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
function home_page_boxes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function home_page_boxes_node_info() {
  $items = array(
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
