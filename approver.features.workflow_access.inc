<?php
/**
 * @file
 * approver.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function approver_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['editorial_workflow'] = array();
  $workflows['editorial_workflow']['in_review'] = array();
  $workflows['editorial_workflow']['in_review']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['in_review']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['in_review']['authenticated user'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['in_review']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['in_review']['Approver 1'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['in_review']['Approver 2'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['in_review']['webmaster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 1,
  );
  $workflows['editorial_workflow']['proof_reading'] = array();
  $workflows['editorial_workflow']['proof_reading']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['proof_reading']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['proof_reading']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['proof_reading']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['proof_reading']['Approver 1'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['proof_reading']['Approver 2'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['proof_reading']['webmaster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 1,
  );
  $workflows['editorial_workflow']['publish'] = array();
  $workflows['editorial_workflow']['publish']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['publish']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['publish']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['publish']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['publish']['Approver 1'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['publish']['Approver 2'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['editorial_workflow']['publish']['webmaster'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );

  return $workflows;
}
