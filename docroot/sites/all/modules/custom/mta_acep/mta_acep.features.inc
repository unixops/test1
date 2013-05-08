<?php
/**
 * @file
 * mta_acep.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mta_acep_ctools_plugin_api() {
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
 * Implements hook_views_api().
 */
function mta_acep_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mta_acep_node_info() {
  $items = array(
    'mta_acep' => array(
      'name' => t('MTA ACEP'),
      'base' => 'node_content',
      'description' => t('Content type and view for MTA\'s ACEPs spreadsheet items'),
      'has_title' => '1',
      'title_label' => t('ACEP'),
      'help' => '',
    ),
  );
  return $items;
}
