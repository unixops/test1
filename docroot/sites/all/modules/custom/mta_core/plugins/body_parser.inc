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
  'category' => 'MTA',
);

function mta_core_body_parser_form($importer, $element_key, $settings) {
  $form = array();
  $form['html'] = array(
      '#markup' => t("We look for file links and upload their contents to the server and re-write the link to its new home"),
  );
  return $form;
}

function mta_core_body_parser_callback($result, $item_key, $element_key, &$field, $settings) {
  if($field) {
    // enter parse code here
    ///sites/default/files/mtaimgs/landing_imgs.jpg
    dsm($field);

  } else {

  }

}
