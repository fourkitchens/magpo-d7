<?php
/**
 * @file
 * magpo_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function magpo_feature_user_default_roles() {
  $roles = array();

  // Exported role: Poem Author
  $roles['Poem Author'] = array(
    'name' => 'Poem Author',
    'weight' => '3',
  );

  return $roles;
}
