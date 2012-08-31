<?php
/**
 * @file
 * mta_home_new.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mta_home_new_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mta_home_new';
  $context->description = 'Alternate Style for MTA Home Boxes';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/3628' => 'node/3628',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mta_megamenu-mta_megamenu' => array(
          'module' => 'mta_megamenu',
          'delta' => 'mta_megamenu',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-news_rotator-block_1' => array(
          'module' => 'views',
          'delta' => 'news_rotator-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'boxes-ways_to_save' => array(
          'module' => 'boxes',
          'delta' => 'ways_to_save',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'boxes-fast_track' => array(
          'module' => 'boxes',
          'delta' => 'fast_track',
          'region' => 'content_bottom_left',
          'weight' => '-10',
        ),
        'boxes-hear_from_you' => array(
          'module' => 'boxes',
          'delta' => 'hear_from_you',
          'region' => 'content_bottom_right',
          'weight' => '-10',
        ),
        'boxes-capitol_program' => array(
          'module' => 'boxes',
          'delta' => 'capitol_program',
          'region' => 'postscript',
          'weight' => '-10',
        ),
        'statusblock-mta-service-status' => array(
          'module' => 'statusblock',
          'delta' => 'mta-service-status',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-tourism' => array(
          'module' => 'boxes',
          'delta' => 'tourism',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'boxes-advertise_on_metrocard' => array(
          'module' => 'boxes',
          'delta' => 'advertise_on_metrocard',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'boxes-app_center' => array(
          'module' => 'boxes',
          'delta' => 'app_center',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'tripplanner-tripplanner' => array(
          'module' => 'tripplanner',
          'delta' => 'tripplanner',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-customer_self_service' => array(
          'module' => 'boxes',
          'delta' => 'customer_self_service',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-mta_bus_time' => array(
          'module' => 'boxes',
          'delta' => 'mta_bus_time',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'boxes-gc_centennial' => array(
          'module' => 'boxes',
          'delta' => 'gc_centennial',
          'region' => 'sidebar_second',
          'weight' => '-7',
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternate Style for MTA Home Boxes');
  $export['mta_home_new'] = $context;

  return $export;
}
