<?php
/**
 * @file
 * nyc_transit_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyc_transit_homepage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
