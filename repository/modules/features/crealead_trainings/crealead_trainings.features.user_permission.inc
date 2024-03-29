<?php

/**
 * @file
 * crealead_trainings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_trainings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in training_type'.
  $permissions['add terms in training_type'] = array(
    'name' => 'add terms in training_type',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer trainings'.
  $permissions['administer trainings'] = array(
    'name' => 'administer trainings',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'crealead_trainings',
  );

  // Exported permission: 'create training content'.
  $permissions['create training content'] = array(
    'name' => 'create training content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create training_session content'.
  $permissions['create training_session content'] = array(
    'name' => 'create training_session content',
    'roles' => array(
      'assistant' => 'assistant',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training content'.
  $permissions['delete any training content'] = array(
    'name' => 'delete any training content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training_session content'.
  $permissions['delete any training_session content'] = array(
    'name' => 'delete any training_session content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own training content'.
  $permissions['delete own training content'] = array(
    'name' => 'delete own training content',
    'roles' => array(
      'assistant' => 'assistant',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own training_session content'.
  $permissions['delete own training_session content'] = array(
    'name' => 'delete own training_session content',
    'roles' => array(
      'assistant' => 'assistant',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in training_type'.
  $permissions['delete terms in training_type'] = array(
    'name' => 'delete terms in training_type',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any training content'.
  $permissions['edit any training content'] = array(
    'name' => 'edit any training content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any training_session content'.
  $permissions['edit any training_session content'] = array(
    'name' => 'edit any training_session content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own training content'.
  $permissions['edit own training content'] = array(
    'name' => 'edit own training content',
    'roles' => array(
      'assistant' => 'assistant',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own training_session content'.
  $permissions['edit own training_session content'] = array(
    'name' => 'edit own training_session content',
    'roles' => array(
      'assistant' => 'assistant',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in training_type'.
  $permissions['edit terms in training_type'] = array(
    'name' => 'edit terms in training_type',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any unpublished training content'.
  $permissions['view any unpublished training content'] = array(
    'name' => 'view any unpublished training content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished training_session content'.
  $permissions['view any unpublished training_session content'] = array(
    'name' => 'view any unpublished training_session content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
