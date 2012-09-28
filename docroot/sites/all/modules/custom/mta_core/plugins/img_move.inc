<?php

/**
 * @file
 * Parse files from the body field.
 */

$plugin = array(
  'form' => 'mta_core_img_move_form',
  'callback' => 'mta_core_img_move_callback',
  'validate' => 'mta_core_img_move_validate',
  'name' => 'Image mover',
  'multi' => 'skip',
  'category' => 'MTA',
);

function mta_core_img_move_form($importer, $element_key, $settings) {
  $form = array();
  $form['html'] = array(
      '#markup' => t("We look for file links and upload their contents to the server and re-write the link to its new home"),
  );
  return $form;
}

function mta_core_img_move_callback($result, $item_key, $element_key, &$field, $settings) {
  $local_path = '/' . variable_get('file_public_path', conf_path() . '/files/archive/imgs/');
  $droot = DRUPAL_ROOT;
  $dir = file_default_scheme() . '://' . 'archive/imgs';
  file_prepare_directory($dir, FILE_CREATE_DIRECTORY);
  $src_start = strpos($field, 'src="');
  while($src_start){
    $src_start += 5;
    $src_end = strpos($field, '"', $src_start);
    $src = substr($field, $src_start, $src_end - $src_start);
    $src_img_file = pathinfo($src);
    $img_file = fopen($droot . $local_path . $src_img_file['basename'],'w');
    $options = array(
        CURLOPT_FILE => $img_file,
        CURLOPT_FOLLOWLOCATION => true,
        CURLOPT_URL => 'http://mta.info' . $src,

    );
    $ch = curl_init();
    curl_setopt_array($ch, $options);
    $cresult = curl_exec($ch);
    curl_close($ch);
    fclose($img_file);
    $dest = $local_path . $src_img_file['basename'];
    $field = str_replace($src, $dest, $field);
    $src_start = strpos($field, 'src="', $src_end);
  }

}
