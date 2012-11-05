<?php
/**
 * @file
 * crf_contacts_upload.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_contacts_upload_user_default_permissions() {
  $permissions = array();

  // Exported permission: create contacts_upload content.
  $permissions['create contacts_upload content'] = array(
    'name' => 'create contacts_upload content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any contact content.
  $permissions['delete any contact content'] = array(
    'name' => 'delete any contact content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any contacts_upload content.
  $permissions['delete any contacts_upload content'] = array(
    'name' => 'delete any contacts_upload content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own contacts_upload content.
  $permissions['delete own contacts_upload content'] = array(
    'name' => 'delete own contacts_upload content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any contact content.
  $permissions['edit any contact content'] = array(
    'name' => 'edit any contact content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any contacts_upload content.
  $permissions['edit any contacts_upload content'] = array(
    'name' => 'edit any contacts_upload content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own contacts_upload content.
  $permissions['edit own contacts_upload content'] = array(
    'name' => 'edit own contacts_upload content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
