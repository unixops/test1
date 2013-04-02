<?php
/**
 * @file
 * news_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function news_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_rotator|node|news_article|form';
  $field_group->group_name = 'group_news_rotator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Rotator',
    'weight' => '1',
    'children' => array(
      0 => 'field_article_summary',
      1 => 'field_emergency_headline',
      2 => 'field_emergency_summary',
      3 => 'field_head_title',
      4 => 'field_headline',
      5 => 'field_image',
      6 => 'field_image_caption',
      7 => 'field_more_text',
      8 => 'field_news_rotator_style',
      9 => 'field_page_link',
      10 => 'field_portrait',
      11 => 'field_wide_image',
      12 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'News Rotator',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Various news rotator styles require different input fields.  Simply select the desired style and the appropriate fields will appear.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_news_rotator|node|news_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_story|node|news_article|form';
  $field_group->group_name = 'group_news_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Story',
    'weight' => '2',
    'children' => array(
      0 => 'field_article_body',
      1 => 'field_news_page_headline',
      2 => 'field_tags',
      3 => 'field_mta_image',
      4 => 'field_news_story_style',
      5 => 'field_article_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_news_story|node|news_article|form'] = $field_group;

  return $export;
}
