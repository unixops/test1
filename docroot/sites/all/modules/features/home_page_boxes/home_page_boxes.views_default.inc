<?php
/**
 * @file
 * home_page_boxes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_page_boxes_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'news_rotator';
  $view->description = 'Block for Home Page News Rotator';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Rotator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News Rotator';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
    'field_head_title' => 0,
    'field_image' => 0,
    'field_headline' => 0,
    'body' => 0,
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
    'field_head_title' => 0,
    'field_image' => 0,
    'field_headline' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
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
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Head Title */
  $handler->display->display_options['fields']['field_head_title']['id'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['table'] = 'field_data_field_head_title';
  $handler->display->display_options['fields']['field_head_title']['field'] = 'field_head_title';
  $handler->display->display_options['fields']['field_head_title']['label'] = '';
  $handler->display->display_options['fields']['field_head_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_head_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_head_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_head_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_head_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_head_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_head_title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_head_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_head_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_head_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_head_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_head_title']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'news-rot-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_headline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_headline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_headline']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_headline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_headline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headline']['element_class'] = 'new-rot-title';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_headline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_headline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_headline']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_headline']['field_api_classes'] = 0;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_article_summary']['alter']['text'] = '[field_article_summary] ... <br /> <a href ="/node/[nid]"> Read Full Story</a>';
  $handler->display->display_options['fields']['field_article_summary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_summary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_summary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_article_summary']['element_class'] = 'news-rot-teaser';
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_summary']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_summary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_article_summary']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['field_article_summary']['field_api_classes'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['path'] = '#slider';
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
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
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'news_article' => 'news_article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['news_rotator'] = $view;

  return $export;
}
