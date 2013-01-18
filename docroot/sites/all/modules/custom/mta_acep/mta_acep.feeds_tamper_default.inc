<?php
/**
 * @file
 * mta_acep.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mta_acep_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_acep-10-number_format';
  $feeds_tamper->importer = 'mta_acep';
  $feeds_tamper->source = '10';
  $feeds_tamper->plugin_id = 'number_format';
  $feeds_tamper->settings = array(
    'decimals' => 2,
    'dec_point' => '.',
    'thousands_sep' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format a number';
  $export['mta_acep-10-number_format'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_acep-11-number_format';
  $feeds_tamper->importer = 'mta_acep';
  $feeds_tamper->source = '11';
  $feeds_tamper->plugin_id = 'number_format';
  $feeds_tamper->settings = array(
    'decimals' => 2,
    'dec_point' => '.',
    'thousands_sep' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format a number';
  $export['mta_acep-11-number_format'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_acep-12-number_format';
  $feeds_tamper->importer = 'mta_acep';
  $feeds_tamper->source = '12';
  $feeds_tamper->plugin_id = 'number_format';
  $feeds_tamper->settings = array(
    'decimals' => 2,
    'dec_point' => '.',
    'thousands_sep' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format a number';
  $export['mta_acep-12-number_format'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_acep-6-number_format';
  $feeds_tamper->importer = 'mta_acep';
  $feeds_tamper->source = '6';
  $feeds_tamper->plugin_id = 'number_format';
  $feeds_tamper->settings = array(
    'decimals' => 2,
    'dec_point' => '.',
    'thousands_sep' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format a number';
  $export['mta_acep-6-number_format'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_acep-7-number_format';
  $feeds_tamper->importer = 'mta_acep';
  $feeds_tamper->source = '7';
  $feeds_tamper->plugin_id = 'number_format';
  $feeds_tamper->settings = array(
    'decimals' => 2,
    'dec_point' => '.',
    'thousands_sep' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format a number';
  $export['mta_acep-7-number_format'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_acep-8-number_format';
  $feeds_tamper->importer = 'mta_acep';
  $feeds_tamper->source = '8';
  $feeds_tamper->plugin_id = 'number_format';
  $feeds_tamper->settings = array(
    'decimals' => 2,
    'dec_point' => '.',
    'thousands_sep' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format a number';
  $export['mta_acep-8-number_format'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_acep-9-number_format';
  $feeds_tamper->importer = 'mta_acep';
  $feeds_tamper->source = '9';
  $feeds_tamper->plugin_id = 'number_format';
  $feeds_tamper->settings = array(
    'decimals' => 2,
    'dec_point' => '.',
    'thousands_sep' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format a number';
  $export['mta_acep-9-number_format'] = $feeds_tamper;

  return $export;
}
