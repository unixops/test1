<?php

/**
 * @file
 * Parse files from the body field.
 */

$plugin = array(
  'form' => 'mta_core_body_parser_form',
  'callback' => 'mta_core_body_parser_callback',
  'validate' => 'mta_core_body_parser_validate',
  'name' => 'Body Parser',
  'multi' => 'skip',
  'category' => 'Text',
);

function mta_core_body_parser_form($importer, $element_key, $settings) {
  $form = array();
  $form['body_parts'] = array(
      '#type' => 'textfield',
      '#title' => t('Body Processing'),
      '#default_value' => isset($settings['body_parts']) ? $settings['body_parts'] : '',
      '#description' => t("We look for file links and upload their contents to the server and re-write the link to its new home"),
  );
  return $form;
}

function mta_core_body_parser_validate(&$settings) {
  if (empty($settings['body_parts'])) {
    form_set_error('settings][body_parts', t('Body must not be empty.'));
  }
}

function mta_core_body_parser_callback($result, $item_key, $element_key, &$field, $settings) {
  if($field) {
    // enter parse code here
    dsm($field);

  } else {

  }

}
