<?php
/**
 * @file
 * approver.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function approver_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create articles content'.
  $permissions['create articles content'] = array(
    'name' => 'create articles content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create events content'.
  $permissions['create events content'] = array(
    'name' => 'create events content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any articles content'.
  $permissions['delete any articles content'] = array(
    'name' => 'delete any articles content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any events content'.
  $permissions['delete any events content'] = array(
    'name' => 'delete any events content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own articles content'.
  $permissions['delete own articles content'] = array(
    'name' => 'delete own articles content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own events content'.
  $permissions['delete own events content'] = array(
    'name' => 'delete own events content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any articles content'.
  $permissions['edit any articles content'] = array(
    'name' => 'edit any articles content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any events content'.
  $permissions['edit any events content'] = array(
    'name' => 'edit any events content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own articles content'.
  $permissions['edit own articles content'] = array(
    'name' => 'edit own articles content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own events content'.
  $permissions['edit own events content'] = array(
    'name' => 'edit own events content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Approver 1' => 'Approver 1',
      'Approver 2' => 'Approver 2',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
