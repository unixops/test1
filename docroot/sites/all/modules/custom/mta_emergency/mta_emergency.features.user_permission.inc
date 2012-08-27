<?php
/**
 * @file
 * mta_emergency.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mta_emergency_user_default_permissions() {
  $permissions = array();

  // Exported permission: create agency_emergency_notice content
  $permissions['create agency_emergency_notice content'] = array(
    'name' => 'create agency_emergency_notice content',
    'roles' => array(
      0 => 'content provider',
      1 => 'master content provider',
      2 => 'sub-admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create main_emergency_notice content
  $permissions['create main_emergency_notice content'] = array(
    'name' => 'create main_emergency_notice content',
    'roles' => array(
      0 => 'master content provider',
      1 => 'sub-admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any agency_emergency_notice content
  $permissions['edit any agency_emergency_notice content'] = array(
    'name' => 'edit any agency_emergency_notice content',
    'roles' => array(
      0 => 'master content provider',
      1 => 'sub-admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any main_emergency_notice content
  $permissions['edit any main_emergency_notice content'] = array(
    'name' => 'edit any main_emergency_notice content',
    'roles' => array(
      0 => 'master content provider',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own agency_emergency_notice content
  $permissions['edit own agency_emergency_notice content'] = array(
    'name' => 'edit own agency_emergency_notice content',
    'roles' => array(
      0 => 'content provider',
      1 => 'master content provider',
      2 => 'sub-admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own main_emergency_notice content
  $permissions['edit own main_emergency_notice content'] = array(
    'name' => 'edit own main_emergency_notice content',
    'roles' => array(
      0 => 'master content provider',
      1 => 'sub-admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
