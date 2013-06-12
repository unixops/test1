<?php
/**
 * @file
 * FileField Paths module integration.
 */

/**
 * Implements hook_filefield_paths_field_settings().
 */
function file_aliases_filefield_paths_field_settings() {
  return array(
    'file_alias' => array(
      'title' => 'File alias',
      'sql' => 'filealias',

      'form' => array(
        'file_alias' => array(
          '#type' => 'textfield',
          '#title' => t('File alias'),
          '#default_value' => drupal_substr(parse_url(file_create_url(file_default_scheme() . '://'), PHP_URL_PATH) . '[file:ffp-name-only-original].[file:ffp-extension-original]', 1),
          '#maxlength' => 512,
          '#size' => 128,
        ),
      ),
    ),
  );
}

/**
 * Implements hook_filefield_paths_process_file().
 */
function file_aliases_filefield_paths_process_file($type, $entity, $field, $instance, $langcode, &$items) {
  if (isset($instance['settings']['filefield_paths'])) {
    $settings = $instance['settings']['filefield_paths'];
    foreach ($items as &$file) {
      if ($file['timestamp'] == REQUEST_TIME || $settings['active_updating']) {
        $filefield_paths_alias = "filefield_paths/alias/{$file['fid']}";
        if (!empty($settings['file_alias']['value'])) {
          $token_data = array(
            'file' => (object) $file,
            $type => $entity
          );
          $alias = filefield_paths_process_string($settings['file_alias']['value'], $token_data, $settings['file_alias']['options']);
          if ($alias != drupal_get_path_alias($filefield_paths_alias)) {
            path_delete(array('source' => $filefield_paths_alias));
            $path = array('source' => $filefield_paths_alias, 'alias' => $alias, 'language' => $langcode);
            path_save($path);
          }
        } else {
          path_delete(array('source' => $filefield_paths_alias));
        }
      }
    }
   }
}
