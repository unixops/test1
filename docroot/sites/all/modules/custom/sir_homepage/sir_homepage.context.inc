<?php
/**
 * @file
 * sir_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sir_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sir_homepage';
  $context->description = 'Staten Island Railroad Homepage';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sir' => 'sir',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mta_megamenu-sir_megamenu' => array(
          'module' => 'mta_megamenu',
          'delta' => 'sir_megamenu',
          'region' => 'content',
          'weight' => '-10',
        ),
        'service_notice-service_notice_sir' => array(
          'module' => 'service_notice',
          'delta' => 'service_notice_sir',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-news_rotator-block_6' => array(
          'module' => 'views',
          'delta' => 'news_rotator-block_6',
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
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Staten Island Railroad Homepage');
  $export['sir_homepage'] = $context;

  return $export;
}
