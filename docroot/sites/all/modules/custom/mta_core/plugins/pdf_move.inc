<?php

/**
 * @file
 * Parse files from the body field.
 */

$plugin = array(
  'form' => 'mta_core_pdf_move_form',
  'callback' => 'mta_core_pdf_move_callback',
  //'validate' => 'mta_core_pdf_move_validate',
  'name' => 'PDF mover',
  'multi' => 'skip',
  'category' => 'MTA',
);

function mta_core_pdf_move_form($importer, $element_key, $settings) {
  $form = array();
  $form['html'] = array(
      '#markup' => t("We look for file links and upload their contents to the server and re-write the link to its new home"),
  );
  return $form;
}

function mta_core_pdf_move_callback($result, $item_key, $element_key, &$field, $settings) {
  $src_start = strpos($field, 'href="');
  if($src_start){
    $local_path = '/' . variable_get('file_public_path', conf_path());
    if(strpos($_SERVER["HTTP_HOST"], 'mta.info')){//the files part of the path has to be added for dev thru prod
      $local_path .= '/files';
    }
    $local_path .= '/archive/pdfs/';
    $droot = DRUPAL_ROOT;
    $dir = file_default_scheme() . '://' . 'archive/pdfs';
    if(!file_prepare_directory($dir, FILE_CREATE_DIRECTORY)){
      $dir = file_default_scheme() . '://';
      $test_dir = file_prepare_directory($dir, FILE_CREATE_DIRECTORY);
      $dir = file_default_scheme() . '://' . 'archive';
      $test_dir = file_prepare_directory($dir, FILE_CREATE_DIRECTORY);
      $dir = file_default_scheme() . '://' . 'archive/pdfs';
      $test_dir = file_prepare_directory($dir, FILE_CREATE_DIRECTORY);
    }
    while($src_start){
      $src_start += 6;
      $src_end = strpos($field, '"', $src_start);
      $src = substr($field, $src_start, $src_end - $src_start);
      $src_pdf_file = pathinfo($src);
      $src_enc = str_replace(' ', '%20', $src);
      if($src_pdf_file['extension'] == 'pdf'){
        $src_pdf_url = parse_url($src);
        if(!$src_pdf_url['host']){ $src = 'http://mta.info' . $src_enc ;}
        $pdf_file = fopen($droot . $local_path . str_replace(' ', '_', $src_pdf_file['basename']),'w');
        $options = array(
            CURLOPT_FILE => $pdf_file,
            CURLOPT_FOLLOWLOCATION => true,
            CURLOPT_URL => $src_enc,
        );
        $ch = curl_init();
        curl_setopt_array($ch, $options);
        $cresult = curl_exec($ch);
        curl_close($ch);
        fclose($pdf_file);
        $dest = $local_path . str_replace(' ', '_', $src_pdf_file['basename']);
        $field = str_replace($src, $dest, $field);
      }
    $src_start = strpos($field, 'href="', $src_end);
    }
  }
}
