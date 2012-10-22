<?php
/**
 * @file
 * nyc_transit_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nyc_transit_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nyct_homepage';
  $context->description = 'NYC Transit Homepage';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nyct' => 'nyct',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mta_megamenu-nyct_megamenu' => array(
          'module' => 'mta_megamenu',
          'delta' => 'nyct_megamenu',
          'region' => 'content',
          'weight' => '-10',
        ),
        'service_notice-service_notice_nyct' => array(
          'module' => 'service_notice',
          'delta' => 'service_notice_nyct',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-news_rotator-block_1' => array(
          'module' => 'views',
          'delta' => 'news_rotator-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'statusblock-mta-service-status' => array(
          'module' => 'statusblock',
          'delta' => 'mta-service-status',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tripplanner-tripplanner' => array(
          'module' => 'tripplanner',
          'delta' => 'tripplanner',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-footer' => array(
          'module' => 'boxes',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-copyright' => array(
          'module' => 'boxes',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'google_adsense-google_adsense_horizontal' => array(
          'module' => 'google_adsense',
          'delta' => 'google_adsense_horizontal',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('NYC Transit Homepage');
  $export['nyct_homepage'] = $context;

  return $export;
}
