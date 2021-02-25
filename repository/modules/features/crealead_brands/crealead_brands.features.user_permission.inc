<?php
/**
 * @file
 * crealead_brands.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_brands_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in achievement_types'.
  $permissions['add terms in achievement_types'] = array(
    'name' => 'add terms in achievement_types',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in brand_tags'.
  $permissions['add terms in brand_tags'] = array(
    'name' => 'add terms in brand_tags',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in business_sectors'.
  $permissions['add terms in business_sectors'] = array(
    'name' => 'add terms in business_sectors',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in certifications_labels'.
  $permissions['add terms in certifications_labels'] = array(
    'name' => 'add terms in certifications_labels',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in client_types'.
  $permissions['add terms in client_types'] = array(
    'name' => 'add terms in client_types',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in sector_brands'.
  $permissions['add terms in sector_brands'] = array(
    'name' => 'add terms in sector_brands',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create achievement content'.
  $permissions['create achievement content'] = array(
    'name' => 'create achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create brand content'.
  $permissions['create brand content'] = array(
    'name' => 'create brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create client content'.
  $permissions['create client content'] = array(
    'name' => 'create client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new service'.
  $permissions['create new service'] = array(
    'name' => 'create new service',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'socialfield',
  );

  // Exported permission: 'delete any achievement content'.
  $permissions['delete any achievement content'] = array(
    'name' => 'delete any achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any brand content'.
  $permissions['delete any brand content'] = array(
    'name' => 'delete any brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any client content'.
  $permissions['delete any client content'] = array(
    'name' => 'delete any client content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service'.
  $permissions['delete any service'] = array(
    'name' => 'delete any service',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'socialfield',
  );

  // Exported permission: 'delete own achievement content'.
  $permissions['delete own achievement content'] = array(
    'name' => 'delete own achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own brand content'.
  $permissions['delete own brand content'] = array(
    'name' => 'delete own brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own client content'.
  $permissions['delete own client content'] = array(
    'name' => 'delete own client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in achievement_types'.
  $permissions['delete terms in achievement_types'] = array(
    'name' => 'delete terms in achievement_types',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in brand_tags'.
  $permissions['delete terms in brand_tags'] = array(
    'name' => 'delete terms in brand_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in business_sectors'.
  $permissions['delete terms in business_sectors'] = array(
    'name' => 'delete terms in business_sectors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in certifications_labels'.
  $permissions['delete terms in certifications_labels'] = array(
    'name' => 'delete terms in certifications_labels',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in client_types'.
  $permissions['delete terms in client_types'] = array(
    'name' => 'delete terms in client_types',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sector_brands'.
  $permissions['delete terms in sector_brands'] = array(
    'name' => 'delete terms in sector_brands',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any achievement content'.
  $permissions['edit any achievement content'] = array(
    'name' => 'edit any achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any brand content'.
  $permissions['edit any brand content'] = array(
    'name' => 'edit any brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any client content'.
  $permissions['edit any client content'] = array(
    'name' => 'edit any client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service'.
  $permissions['edit any service'] = array(
    'name' => 'edit any service',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'socialfield',
  );

  // Exported permission: 'edit own achievement content'.
  $permissions['edit own achievement content'] = array(
    'name' => 'edit own achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own brand content'.
  $permissions['edit own brand content'] = array(
    'name' => 'edit own brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own client content'.
  $permissions['edit own client content'] = array(
    'name' => 'edit own client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in achievement_types'.
  $permissions['edit terms in achievement_types'] = array(
    'name' => 'edit terms in achievement_types',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in brand_tags'.
  $permissions['edit terms in brand_tags'] = array(
    'name' => 'edit terms in brand_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in business_sectors'.
  $permissions['edit terms in business_sectors'] = array(
    'name' => 'edit terms in business_sectors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in certifications_labels'.
  $permissions['edit terms in certifications_labels'] = array(
    'name' => 'edit terms in certifications_labels',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in client_types'.
  $permissions['edit terms in client_types'] = array(
    'name' => 'edit terms in client_types',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sector_brands'.
  $permissions['edit terms in sector_brands'] = array(
    'name' => 'edit terms in sector_brands',
    'roles' => array(
      'responsable de pôle' => 'responsable de pôle',
      'référent' => 'référent',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any unpublished achievement content'.
  $permissions['view any unpublished achievement content'] = array(
    'name' => 'view any unpublished achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished brand content'.
  $permissions['view any unpublished brand content'] = array(
    'name' => 'view any unpublished brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished client content'.
  $permissions['view any unpublished client content'] = array(
    'name' => 'view any unpublished client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view services'.
  $permissions['view services'] = array(
    'name' => 'view services',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'socialfield',
  );

  return $permissions;
}
