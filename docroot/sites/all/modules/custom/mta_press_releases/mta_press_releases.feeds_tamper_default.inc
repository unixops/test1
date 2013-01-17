<?php
/**
 * @file
 * mta_press_releases.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mta_press_releases_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_press_releases-blank_source_1-default_value';
  $feeds_tamper->importer = 'mta_press_releases';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['mta_press_releases-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_press_releases-xpathparser_1-truncate_text';
  $feeds_tamper->importer = 'mta_press_releases';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['mta_press_releases-xpathparser_1-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_press_releases-xpathparser_2-img_move';
  $feeds_tamper->importer = 'mta_press_releases';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'img_move';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Image mover';
  $export['mta_press_releases-xpathparser_2-img_move'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_press_releases-xpathparser_2-pdf_move';
  $feeds_tamper->importer = 'mta_press_releases';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'pdf_move';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'PDF mover';
  $export['mta_press_releases-xpathparser_2-pdf_move'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_press_releases-xpathparser_2-subway_icon';
  $feeds_tamper->importer = 'mta_press_releases';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'subway_icon';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Subway Icon Parser';
  $export['mta_press_releases-xpathparser_2-subway_icon'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_press_releases-xpathparser_4-mta_agency';
  $feeds_tamper->importer = 'mta_press_releases';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'mta_agency';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'MTA Agency re-format';
  $export['mta_press_releases-xpathparser_4-mta_agency'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mta_press_releases-xpathparser_5-date_parse';
  $feeds_tamper->importer = 'mta_press_releases';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'date_parse';
  $feeds_tamper->settings = array(
    'date_format' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Date Parse';
  $export['mta_press_releases-xpathparser_5-date_parse'] = $feeds_tamper;

  return $export;
}
