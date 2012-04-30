<?php

function mta_form_system_theme_settings_alter(&$form, $form_state)  {
  $form['extra'] = array(
    '#type' => 'fieldset',
    '#title' => t('Colour scheme'),
    '#weight' => -1,
  );
  $options = array(
    'blue' => t('Blue'),
  );
  $form['extra']['colour'] = array(
    '#type' => 'select',
    '#title' => t('Colour scheme'),
    '#options' => $options,
    '#default_value' => theme_get_setting('colour'),
  );
}
