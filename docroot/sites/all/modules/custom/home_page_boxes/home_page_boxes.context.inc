<?php
/**
 * @file
 * home_page_boxes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_page_boxes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lirr_box_home';
  $context->description = 'For box placement on LIRR Home Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/3620' => 'node/3620',
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
          'weight' => '-36',
        ),
        'views-news_rotator-block_1' => array(
          'module' => 'views',
          'delta' => 'news_rotator-block_1',
          'region' => 'content',
          'weight' => '-35',
        ),
        'statusblock-mta-service-status' => array(
          'module' => 'statusblock',
          'delta' => 'mta-service-status',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-special_service' => array(
          'module' => 'boxes',
          'delta' => 'special_service',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'tripplanner-tripplanner' => array(
          'module' => 'tripplanner',
          'delta' => 'tripplanner',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-mta_bus_time' => array(
          'module' => 'boxes',
          'delta' => 'mta_bus_time',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-gc_centennial' => array(
          'module' => 'boxes',
          'delta' => 'gc_centennial',
          'region' => 'sidebar_second',
          'weight' => '-8',
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
  t('For box placement on LIRR Home Page');
  $export['lirr_box_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mta_box_home';
  $context->description = 'For box placement on MTA Home Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/3618' => 'node/3618',
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
          'weight' => '-36',
        ),
        'views-news_rotator-block_1' => array(
          'module' => 'views',
          'delta' => 'news_rotator-block_1',
          'region' => 'content',
          'weight' => '-35',
        ),
        'boxes-customer_self_service' => array(
          'module' => 'boxes',
          'delta' => 'customer_self_service',
          'region' => 'content_bottom_left',
          'weight' => '-10',
        ),
        'boxes-tourism' => array(
          'module' => 'boxes',
          'delta' => 'tourism',
          'region' => 'content_bottom_right',
          'weight' => '-10',
        ),
        'boxes-app_center' => array(
          'module' => 'boxes',
          'delta' => 'app_center',
          'region' => 'content_bottom_right',
          'weight' => '-9',
        ),
        'statusblock-mta-service-status' => array(
          'module' => 'statusblock',
          'delta' => 'mta-service-status',
          'region' => 'sidebar_first',
          'weight' => '-34',
        ),
        'boxes-special_service' => array(
          'module' => 'boxes',
          'delta' => 'special_service',
          'region' => 'sidebar_first',
          'weight' => '-33',
        ),
        'boxes-mta_capitol' => array(
          'module' => 'boxes',
          'delta' => 'mta_capitol',
          'region' => 'sidebar_first',
          'weight' => '-32',
        ),
        'tripplanner-tripplanner' => array(
          'module' => 'tripplanner',
          'delta' => 'tripplanner',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-mta_bus_time' => array(
          'module' => 'boxes',
          'delta' => 'mta_bus_time',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-gc_centennial' => array(
          'module' => 'boxes',
          'delta' => 'gc_centennial',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'boxes-advertise_on_metrocard' => array(
          'module' => 'boxes',
          'delta' => 'advertise_on_metrocard',
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
  t('For box placement on MTA Home Page');
  $export['mta_box_home'] = $context;

  return $export;
}
