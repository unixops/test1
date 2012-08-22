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
