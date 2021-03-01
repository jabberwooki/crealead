<?php
/**
 * @file
 * crealead_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in news_authors'.
  $permissions['add terms in news_authors'] = array(
    'name' => 'add terms in news_authors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in news_types'.
  $permissions['add terms in news_types'] = array(
    'name' => 'add terms in news_types',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_authors'.
  $permissions['delete terms in news_authors'] = array(
    'name' => 'delete terms in news_authors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_types'.
  $permissions['delete terms in news_types'] = array(
    'name' => 'delete terms in news_types',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'responsable de pôle' => 'responsable de pôle',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_authors'.
  $permissions['edit terms in news_authors'] = array(
    'name' => 'edit terms in news_authors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_types'.
  $permissions['edit terms in news_types'] = array(
    'name' => 'edit terms in news_types',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
