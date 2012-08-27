<?php
/**
 * @file
 * mta_emergency.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mta_emergency_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_agency_emergency_notice';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_agency_emergency_notice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_main_emergency_notice';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_main_emergency_notice'] = $strongarm;

  return $export;
}
