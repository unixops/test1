<?php
/**
 * @file
 * home_pages_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_pages_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function home_pages_base_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('Home Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
