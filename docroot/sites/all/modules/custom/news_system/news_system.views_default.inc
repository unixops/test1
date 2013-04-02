<?php
/**
 * @file
 * news_system.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_system_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mta_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MTA News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '60';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'archive-post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_headline']['hide_empty'] = TRUE;
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title-more';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['hide_empty'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image_caption']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_caption']['element_class'] = 'new-rot-title-more';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'news-rot-image-more';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_mta_image']['id'] = 'field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['table'] = 'field_data_field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['field'] = 'field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['label'] = '';
  $handler->display->display_options['fields']['field_mta_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mta_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_mta_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_mta_image']['element_class'] = 'news-rot-image-more';
  $handler->display->display_options['fields']['field_mta_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mta_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mta_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mta_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_mta_image']['delta_offset'] = '0';
  /* Field: Content: Wide Image */
  $handler->display->display_options['fields']['field_wide_image']['id'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['table'] = 'field_data_field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['field'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['label'] = '';
  $handler->display->display_options['fields']['field_wide_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_wide_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_wide_image']['element_class'] = 'news-rot-image-more';
  $handler->display->display_options['fields']['field_wide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_wide_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Article Teaser */
  $handler->display->display_options['fields']['field_article_teaser']['id'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['table'] = 'field_data_field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['field'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_article_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser-more';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['text'] = '[field_emergency_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_summary']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'archive-post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_headline']['hide_empty'] = TRUE;
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title-more';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['hide_empty'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image_caption']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_caption']['element_class'] = 'new-rot-title-more';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Article Teaser */
  $handler->display->display_options['fields']['field_article_teaser']['id'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['table'] = 'field_data_field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['field'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_article_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser-more';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['text'] = '[field_emergency_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['path'] = 'more_news';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'archive-post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_headline']['hide_empty'] = TRUE;
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title-more';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['hide_empty'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image_caption']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_caption']['element_class'] = 'new-rot-title-more';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['element_default_classes'] = FALSE;
  /* Field: Content: Article Teaser */
  $handler->display->display_options['fields']['field_article_teaser']['id'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['table'] = 'field_data_field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['field'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_article_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser-more';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['text'] = '[field_emergency_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_summary']['hide_empty'] = TRUE;

  /* Display: Article Node */
  $handler = $view->new_display('page', 'Article Node', 'page_1');
  $handler->display->display_options['display_description'] = 'News Article Public View';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'archive-post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'news-rot-image-more';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Portrait */
  $handler->display->display_options['fields']['field_portrait']['id'] = 'field_portrait';
  $handler->display->display_options['fields']['field_portrait']['table'] = 'field_data_field_portrait';
  $handler->display->display_options['fields']['field_portrait']['field'] = 'field_portrait';
  $handler->display->display_options['fields']['field_portrait']['label'] = '';
  $handler->display->display_options['fields']['field_portrait']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portrait']['element_class'] = 'news-rot-image-more';
  $handler->display->display_options['fields']['field_portrait']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portrait']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portrait']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portrait']['settings'] = array(
    'image_style' => 'portrait',
    'image_link' => '',
  );
  /* Field: Content: Wide Image */
  $handler->display->display_options['fields']['field_wide_image']['id'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['table'] = 'field_data_field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['field'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['label'] = '';
  $handler->display->display_options['fields']['field_wide_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_wide_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_wide_image']['element_class'] = 'news-rot-image-more';
  $handler->display->display_options['fields']['field_wide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_wide_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-article-summary';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['text'] = '[field_emergency_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_summary']['hide_empty'] = TRUE;
  /* Field: Content: Article Body */
  $handler->display->display_options['fields']['field_article_body']['id'] = 'field_article_body';
  $handler->display->display_options['fields']['field_article_body']['table'] = 'field_data_field_article_body';
  $handler->display->display_options['fields']['field_article_body']['field'] = 'field_article_body';
  $handler->display->display_options['fields']['field_article_body']['label'] = '';
  $handler->display->display_options['fields']['field_article_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_body']['element_class'] = 'news-article-node-body';
  $handler->display->display_options['fields']['field_article_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_body']['hide_empty'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_mta_image_1']['id'] = 'field_mta_image_1';
  $handler->display->display_options['fields']['field_mta_image_1']['table'] = 'field_data_field_mta_image';
  $handler->display->display_options['fields']['field_mta_image_1']['field'] = 'field_mta_image';
  $handler->display->display_options['fields']['field_mta_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_mta_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mta_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mta_image_1']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_mta_image_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mta_image_1']['separator'] = '&nbsp;&nbsp;';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );
  $handler->display->display_options['path'] = 'article';
  $export['mta_news'] = $view;

  $view = new view();
  $view->name = 'news_article_archives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'news_article_archives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News Archive';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'read more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
    'field_article_summary' => 'field_article_summary',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'archive-post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title-archive';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_emergency_headline']['element_class'] = 'new-rot-title-archive';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_headline']['hide_empty'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_caption']['element_class'] = 'new-rot-title-archive';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['hide_empty'] = TRUE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser-archive';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_summary']['hide_empty'] = TRUE;
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'archive-post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title-archive';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_emergency_headline']['element_class'] = 'new-rot-title-archive';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_headline']['hide_empty'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_caption']['element_class'] = 'new-rot-title-archive';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['hide_empty'] = TRUE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser-archive';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_summary']['hide_empty'] = TRUE;
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_text']['empty'] = '...read more';
  $handler->display->display_options['fields']['field_more_text']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['path'] = 'news_archives';
  $export['news_article_archives'] = $view;

  $view = new view();
  $view->name = 'news_article_more';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'news_article_more';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'archive-post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Head Title */
  $handler->display->display_options['fields']['field_head_title']['id'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['table'] = 'field_data_field_head_title';
  $handler->display->display_options['fields']['field_head_title']['field'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['label'] = '';
  $handler->display->display_options['fields']['field_head_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_head_title']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['hide_empty'] = TRUE;
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_mta_image']['id'] = 'field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['table'] = 'field_data_field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['field'] = 'field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['label'] = '';
  $handler->display->display_options['fields']['field_mta_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mta_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_mta_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_mta_image']['element_class'] = 'news-rot-image';
  $handler->display->display_options['fields']['field_mta_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mta_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mta_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mta_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mta_image']['settings'] = array(
    'image_style' => 'small_rotator',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_mta_image']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'news-rot-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_rotator',
    'image_link' => '',
  );
  /* Field: Content: Wide Image */
  $handler->display->display_options['fields']['field_wide_image']['id'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['table'] = 'field_data_field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['field'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['label'] = '';
  $handler->display->display_options['fields']['field_wide_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_wide_image']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_wide_image']['element_class'] = 'news-rot-image-large';
  $handler->display->display_options['fields']['field_wide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_wide_image']['settings'] = array(
    'image_style' => 'wide_rotator',
    'image_link' => '',
  );
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['text'] = '<div class= "news-rot-image-caption"><div class= "news-rot-image-caption-text">[field_image_caption]</div></div>';
  $handler->display->display_options['fields']['field_image_caption']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['hide_empty'] = TRUE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['text'] = '[field_emergency_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'more_news';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['news_article_more'] = $view;

  $view = new view();
  $view->name = 'news_rotator';
  $view->description = 'Block for Home Page News Rotator';
  $view->tag = 'News Rotator';
  $view->base_table = 'node';
  $view->human_name = 'News Rotator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '60';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'nid' => 0,
    'field_page_link' => 0,
    'field_head_title' => 0,
    'field_more_text' => 0,
    'field_image' => 0,
    'field_wide_image' => 0,
    'field_headline' => 0,
    'field_article_summary' => 0,
    'field_image_caption' => 0,
    'field_emergency_headline' => 0,
    'field_emergency_summary' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'nid' => 0,
    'field_page_link' => 0,
    'field_head_title' => 0,
    'field_more_text' => 0,
    'field_image' => 0,
    'field_wide_image' => 0,
    'field_headline' => 0,
    'field_article_summary' => 0,
    'field_image_caption' => 0,
    'field_emergency_headline' => 0,
    'field_emergency_summary' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_skin'] = 'black_icons';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'news_rotator' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_page_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_page_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Head Title */
  $handler->display->display_options['fields']['field_head_title']['id'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['table'] = 'field_data_field_head_title';
  $handler->display->display_options['fields']['field_head_title']['field'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['label'] = '';
  $handler->display->display_options['fields']['field_head_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_head_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_head_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_head_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_head_title']['type'] = 'text_plain';
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'news-rot-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_rotator',
    'image_link' => '',
  );
  /* Field: Content: Wide Image */
  $handler->display->display_options['fields']['field_wide_image']['id'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['table'] = 'field_data_field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['field'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['label'] = '';
  $handler->display->display_options['fields']['field_wide_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_wide_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_wide_image']['element_class'] = 'news-rot-image-large';
  $handler->display->display_options['fields']['field_wide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_wide_image']['settings'] = array(
    'image_style' => 'wide_rotator',
    'image_link' => '',
  );
  /* Field: Content: Portrait */
  $handler->display->display_options['fields']['field_portrait']['id'] = 'field_portrait';
  $handler->display->display_options['fields']['field_portrait']['table'] = 'field_data_field_portrait';
  $handler->display->display_options['fields']['field_portrait']['field'] = 'field_portrait';
  $handler->display->display_options['fields']['field_portrait']['label'] = '';
  $handler->display->display_options['fields']['field_portrait']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_portrait']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_portrait']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portrait']['element_class'] = 'news-rot-portrait';
  $handler->display->display_options['fields']['field_portrait']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portrait']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portrait']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_portrait']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portrait']['settings'] = array(
    'image_style' => 'portrait',
    'image_link' => '',
  );
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['hide_empty'] = TRUE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['text'] = '<div class= "news-rot-image-caption"><div class= "news-rot-image-caption-text">[field_image_caption]</div></div>';
  $handler->display->display_options['fields']['field_image_caption']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['hide_empty'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['path'] = '#slider';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_emergency_headline']['alter']['link_class'] = 'emergency-rot-title';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_emergency_headline']['element_wrapper_class'] = 'emergency-rot-title';
  $handler->display->display_options['fields']['field_emergency_headline']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['text'] = '[field_emergency_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'news_article' => 'news_article',
  );
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['operator'] = '>=';
  $handler->display->display_options['filters']['position']['value']['value'] = '0';
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'news_rotator';

  /* Display: MTA News Rotator */
  $handler = $view->new_display('block', 'MTA News Rotator', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: LIRR News Rotator */
  $handler = $view->new_display('block', 'LIRR News Rotator', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'news_article' => 'news_article',
  );
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['operator'] = '>=';
  $handler->display->display_options['filters']['position']['value']['value'] = '0';
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'lirr_news_rotator';

  /* Display: B & T News Rotator */
  $handler = $view->new_display('block', 'B & T News Rotator', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'news_article' => 'news_article',
  );
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['operator'] = '>=';
  $handler->display->display_options['filters']['position']['value']['value'] = '0';
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'b_t_news_rotator';

  /* Display: MNR News Rotator */
  $handler = $view->new_display('block', 'MNR News Rotator', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'news_article' => 'news_article',
  );
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['operator'] = '>=';
  $handler->display->display_options['filters']['position']['value']['value'] = '0';
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'mnr_news_article';

  /* Display: NYCT News Rotator */
  $handler = $view->new_display('block', 'NYCT News Rotator', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'news_article' => 'news_article',
  );
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['operator'] = '>=';
  $handler->display->display_options['filters']['position']['value']['value'] = '0';
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'nyct_news_rotator';

  /* Display: SIR News Rotator */
  $handler = $view->new_display('block', 'SIR News Rotator', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'sir_static_image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'page' => 'page',
    'news_article' => 'news_article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'sir_static';
  $export['news_rotator'] = $view;

  $view = new view();
  $view->name = 'news_rotator_preview';
  $view->description = 'Block for Home Page News Rotator';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Rotator Preview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News Rotator';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'nid' => 0,
    'field_page_link' => 0,
    'field_head_title' => 0,
    'field_more_text' => 0,
    'field_image' => 0,
    'field_wide_image' => 0,
    'field_headline' => 0,
    'field_article_summary' => 0,
    'field_image_caption' => 0,
    'field_emergency_headline' => 0,
    'field_emergency_summary' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'nid' => 0,
    'field_page_link' => 0,
    'field_head_title' => 0,
    'field_more_text' => 0,
    'field_image' => 0,
    'field_wide_image' => 0,
    'field_headline' => 0,
    'field_article_summary' => 0,
    'field_image_caption' => 0,
    'field_emergency_headline' => 0,
    'field_emergency_summary' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_skin'] = 'black_icons';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Page Link */
  $handler->display->display_options['fields']['field_page_link']['id'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['table'] = 'field_data_field_page_link';
  $handler->display->display_options['fields']['field_page_link']['field'] = 'field_page_link';
  $handler->display->display_options['fields']['field_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_page_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_page_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_link']['empty'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_page_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Head Title */
  $handler->display->display_options['fields']['field_head_title']['id'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['table'] = 'field_data_field_head_title';
  $handler->display->display_options['fields']['field_head_title']['field'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['label'] = '';
  $handler->display->display_options['fields']['field_head_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_head_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_head_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_head_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_head_title']['type'] = 'text_plain';
  /* Field: Content: More text */
  $handler->display->display_options['fields']['field_more_text']['id'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['table'] = 'field_data_field_more_text';
  $handler->display->display_options['fields']['field_more_text']['field'] = 'field_more_text';
  $handler->display->display_options['fields']['field_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_more_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_text']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_more_text']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'news-rot-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_rotator',
    'image_link' => '',
  );
  /* Field: Content: Wide Image */
  $handler->display->display_options['fields']['field_wide_image']['id'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['table'] = 'field_data_field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['field'] = 'field_wide_image';
  $handler->display->display_options['fields']['field_wide_image']['label'] = '';
  $handler->display->display_options['fields']['field_wide_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_wide_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_wide_image']['element_class'] = 'news-rot-image-large';
  $handler->display->display_options['fields']['field_wide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_wide_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_wide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_wide_image']['settings'] = array(
    'image_style' => 'wide_rotator',
    'image_link' => '',
  );
  /* Field: Content: Rotator Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['hide_empty'] = TRUE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['text'] = '<div class= "news-rot-image-caption"><div class= "news-rot-image-caption-text">[field_image_caption]</div></div>';
  $handler->display->display_options['fields']['field_image_caption']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['hide_empty'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['path'] = '#slider';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Emergency Headline */
  $handler->display->display_options['fields']['field_emergency_headline']['id'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['table'] = 'field_data_field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['field'] = 'field_emergency_headline';
  $handler->display->display_options['fields']['field_emergency_headline']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_headline']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_emergency_headline']['alter']['link_class'] = 'emergency-rot-title';
  $handler->display->display_options['fields']['field_emergency_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_emergency_headline']['element_wrapper_class'] = 'emergency-rot-title';
  $handler->display->display_options['fields']['field_emergency_headline']['hide_empty'] = TRUE;
  /* Field: Content: Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_summary']['id'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['table'] = 'field_data_field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['field'] = 'field_emergency_summary';
  $handler->display->display_options['fields']['field_emergency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency_summary']['alter']['text'] = '[field_emergency_summary] [field_more_text]';
  $handler->display->display_options['fields']['field_emergency_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Portrait */
  $handler->display->display_options['fields']['field_portrait']['id'] = 'field_portrait';
  $handler->display->display_options['fields']['field_portrait']['table'] = 'field_data_field_portrait';
  $handler->display->display_options['fields']['field_portrait']['field'] = 'field_portrait';
  $handler->display->display_options['fields']['field_portrait']['label'] = '';
  $handler->display->display_options['fields']['field_portrait']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_portrait']['alter']['path'] = '[field_page_link]';
  $handler->display->display_options['fields']['field_portrait']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portrait']['element_class'] = 'news-rot-portrait-preview';
  $handler->display->display_options['fields']['field_portrait']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portrait']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portrait']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_portrait']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portrait']['settings'] = array(
    'image_style' => 'portrait',
    'image_link' => '',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['news_rotator_preview'] = $view;

  return $export;
}
