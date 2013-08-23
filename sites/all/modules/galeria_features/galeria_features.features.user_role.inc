<?php
/**
 * @file
 * galeria_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function galeria_features_user_default_roles() {
  $roles = array();

  // Exported role: autor galeria.
  $roles['autor galeria'] = array(
    'name' => 'autor galeria',
    'weight' => 3,
  );

  return $roles;
}
