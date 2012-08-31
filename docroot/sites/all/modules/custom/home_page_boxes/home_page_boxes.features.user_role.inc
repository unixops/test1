<?php
/**
 * @file
 * home_page_boxes.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function home_page_boxes_user_default_roles() {
  $roles = array();

  // Exported role: content provider.
  $roles['content provider'] = array(
    'name' => 'content provider',
    'weight' => '5',
  );

  // Exported role: master content provider.
  $roles['master content provider'] = array(
    'name' => 'master content provider',
    'weight' => '3',
  );

  return $roles;
}
