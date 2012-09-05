<?php

/**
 * @file
 * Parse a date for published date.
 */

$plugin = array(
  'form' => 'mta_core_date_parse_form',
  'callback' => 'mta_core_date_parse_callback',
  'validate' => 'mta_core_date_parse_validate',
  'name' => 'Date Parse',
  'multi' => 'skip',
  'category' => 'Text',
);

function mta_core_date_parse_form($importer, $element_key, $settings) {
  $form = array();
  $form['date_format'] = array(
      '#type' => 'textfield',
      '#title' => t('Date Format'),
      '#default_value' => isset($settings['date_format']) ? $settings['date_format'] : '',
      '#description' => t("The formating of the incoming date string, i.e. mdy, as per " . l('Php.net', 'http://us.php.net/manual/en/function.date.php') . ".
          It's especially useful if the incoming date isn't in an English date format."),
  );
  return $form;
}

function mta_core_date_parse_validate(&$settings) {
  if (empty($settings['date_format'])) {
    form_set_error('settings][date_format', t('Date format must not be empty.'));
  }
}

function mta_core_date_parse_callback($result, $item_key, $element_key, &$field, $settings) {
  if($field) {
    $date = DateTime::createFromFormat('ymd', $field);
  } else {
    $date = DateTime::createFromFormat('ymd', '100201');
  }
  $field = $date->format('Y-m-d');
}
