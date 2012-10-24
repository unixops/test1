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
      1 => 'field_head_title',
      2 => 'field_headline',
      3 => 'field_image',
      4 => 'field_image_caption',
      5 => 'field_page_link',
      6 => 'field_wide_image',
      7 => 'field_emergency_headline',
      8 => 'field_emergency_summary',
      9 => 'field_news_rotator_style',
      10 => 'field_more_text',
      11 => 'field_portrait',
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

  return $export;
}
