<?php
/**
 * @file
 * mta_press_releases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mta_press_releases_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mta_press_releases_node_info() {
  $items = array(
    'press_release' => array(
      'name' => t('Press Release'),
      'base' => 'node_content',
      'description' => t('MTA Press release content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
