<?php
/**
 * @file
 * mta_emergency.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mta_emergency_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'emergency_main_notice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emergency Main Notice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emergency Main Notice';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Main Emergency Message */
  $handler->display->display_options['fields']['field_main_emergency_message']['id'] = 'field_main_emergency_message';
  $handler->display->display_options['fields']['field_main_emergency_message']['table'] = 'field_data_field_main_emergency_message';
  $handler->display->display_options['fields']['field_main_emergency_message']['field'] = 'field_main_emergency_message';
  $handler->display->display_options['fields']['field_main_emergency_message']['label'] = '';
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_emergency_message']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_main_emergency_message']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_main_emergency_message']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_main_emergency_message']['field_api_classes'] = 0;
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
    'main_emergency_notice' => 'main_emergency_notice',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Emergency Main Notice';
  $export['emergency_main_notice'] = $view;

  $view = new view;
  $view->name = 'taxonomy_override';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Agency Summary Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agency Summary Display';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'read more';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'status/!1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 1;
  /* Field: Content: Agency Emergency Summary */
  $handler->display->display_options['fields']['field_emergency_agency_summary']['id'] = 'field_emergency_agency_summary';
  $handler->display->display_options['fields']['field_emergency_agency_summary']['table'] = 'field_data_field_emergency_agency_summary';
  $handler->display->display_options['fields']['field_emergency_agency_summary']['field'] = 'field_emergency_agency_summary';
  $handler->display->display_options['fields']['field_emergency_agency_summary']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_emergency_agency_summary']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_summary']['field_api_classes'] = 0;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'nid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'read more';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_mta_image']['id'] = 'field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['table'] = 'field_data_field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['field'] = 'field_mta_image';
  $handler->display->display_options['fields']['field_mta_image']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_mta_image']['label'] = '';
  $handler->display->display_options['fields']['field_mta_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mta_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mta_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mta_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mta_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_mta_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mta_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_mta_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_mta_image']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_mta_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mta_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_mta_image']['separator'] = '      ';
  $handler->display->display_options['fields']['field_mta_image']['field_api_classes'] = 0;
  /* Field: Content: Agency Emergency Text */
  $handler->display->display_options['fields']['field_emergency_agency_text']['id'] = 'field_emergency_agency_text';
  $handler->display->display_options['fields']['field_emergency_agency_text']['table'] = 'field_data_field_emergency_agency_text';
  $handler->display->display_options['fields']['field_emergency_agency_text']['field'] = 'field_emergency_agency_text';
  $handler->display->display_options['fields']['field_emergency_agency_text']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_emergency_agency_text']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_agency_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_emergency_agency_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_emergency_agency_text']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'status/%';
  $export['taxonomy_override'] = $view;

  return $export;
}
