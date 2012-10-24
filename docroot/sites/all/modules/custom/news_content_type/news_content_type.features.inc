<?php
/**
 * @file
 * news_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function news_content_type_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('Create News Article Copy'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('When submitted, your News Article will be reviewed. If there are no problems, it will be published.'),
    ),
  );
  return $items;
}
