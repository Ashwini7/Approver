<?php
/**
 * @file
 * approver.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function approver_user_default_roles() {
  $roles = array();

  // Exported role: Approver 1.
  $roles['Approver 1'] = array(
    'name' => 'Approver 1',
    'weight' => 4,
  );

  // Exported role: Approver 2.
  $roles['Approver 2'] = array(
    'name' => 'Approver 2',
    'weight' => 5,
  );

  // Exported role: anonymous user.
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
  );

  // Exported role: authenticated user.
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 6,
  );

  return $roles;
}
