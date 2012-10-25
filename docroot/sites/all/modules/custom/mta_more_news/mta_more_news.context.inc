<?php
/**
 * @file
 * mta_more_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mta_more_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mta_news';
  $context->description = 'Recent MTA News Articles';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mta-news' => 'mta-news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-mta_news-block' => array(
          'module' => 'views',
          'delta' => 'mta_news-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-more_news_links' => array(
          'module' => 'boxes',
          'delta' => 'more_news_links',
          'region' => 'sidebar_first',
          'weight' => '-41',
        ),
        'boxes-more_news_video' => array(
          'module' => 'boxes',
          'delta' => 'more_news_video',
          'region' => 'sidebar_first',
          'weight' => '-40',
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
  t('Recent MTA News Articles');
  $export['mta_news'] = $context;

  return $export;
}
