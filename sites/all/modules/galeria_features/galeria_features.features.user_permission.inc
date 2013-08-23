<?php
/**
 * @file
 * galeria_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function galeria_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'create galeria content'.
  $permissions['create galeria content'] = array(
    'name' => 'create galeria content',
    'roles' => array(
      'autor galeria' => 'autor galeria',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any galeria content'.
  $permissions['delete any galeria content'] = array(
    'name' => 'delete any galeria content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own galeria content'.
  $permissions['delete own galeria content'] = array(
    'name' => 'delete own galeria content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any galeria content'.
  $permissions['edit any galeria content'] = array(
    'name' => 'edit any galeria content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own galeria content'.
  $permissions['edit own galeria content'] = array(
    'name' => 'edit own galeria content',
    'roles' => array(
      'autor galeria' => 'autor galeria',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag galeria_favorita'.
  $permissions['flag galeria_favorita'] = array(
    'name' => 'flag galeria_favorita',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag galeria_favorita'.
  $permissions['unflag galeria_favorita'] = array(
    'name' => 'unflag galeria_favorita',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
