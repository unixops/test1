<?php
/**
 * @file
 * mta_emergency.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mta_emergency_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function mta_emergency_views_api() {
  return array("version" => "3.0");
}
