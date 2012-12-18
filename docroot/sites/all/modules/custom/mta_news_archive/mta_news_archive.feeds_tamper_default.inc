<?php
/**
 * @file
 * mta_news_archive.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mta_news_archive_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_import-blank_source_1-default_value';
  $feeds_tamper->importer = 'news_article_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['news_article_import-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_import-xpathparser_4-html_entity_decode';
  $feeds_tamper->importer = 'news_article_import';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['news_article_import-xpathparser_4-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_import-xpathparser_5-img_move';
  $feeds_tamper->importer = 'news_article_import';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'img_move';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Image mover';
  $export['news_article_import-xpathparser_5-img_move'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_import-xpathparser_5-subway_icon_parser';
  $feeds_tamper->importer = 'news_article_import';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'subway_icon';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Subway Icon Parser';
  $export['news_article_import-xpathparser_5-subway_icon_parser'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_import-xpathparser_6-date_parse';
  $feeds_tamper->importer = 'news_article_import';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'date_parse';
  $feeds_tamper->settings = array(
    'date_format' => 'ymd',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Date Parse';
  $export['news_article_import-xpathparser_6-date_parse'] = $feeds_tamper;

  return $export;
}
