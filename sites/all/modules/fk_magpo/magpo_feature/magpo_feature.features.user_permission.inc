<?php
/**
 * @file
 * magpo_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function magpo_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create poem content
  $permissions['create poem content'] = array(
    'name' => 'create poem content',
    'roles' => array(
      0 => 'Poem Author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any poem content
  $permissions['delete any poem content'] = array(
    'name' => 'delete any poem content',
    'roles' => array(
      0 => 'Poem Author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own poem content
  $permissions['delete own poem content'] = array(
    'name' => 'delete own poem content',
    'roles' => array(
      0 => 'Poem Author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any poem content
  $permissions['edit any poem content'] = array(
    'name' => 'edit any poem content',
    'roles' => array(
      0 => 'Poem Author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own poem content
  $permissions['edit own poem content'] = array(
    'name' => 'edit own poem content',
    'roles' => array(
      0 => 'Poem Author',
    ),
    'module' => 'node',
  );

  return $permissions;
}
