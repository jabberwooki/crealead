<?php
/**
 * @file
 * crealead_profiles.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_profiles_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Particuliers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '484573af-ad55-42ad-8e22-7d84f8312a07',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Institutionnels',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '53abc942-d1fe-4a0d-a0e0-c3d5c42d976a',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Associations',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5a977f02-0f91-4bea-9483-7340398faa59',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'TPE/PME',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '76d10360-b359-46c9-89f8-6ac9c23bf28e',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Grandes entreprises',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '774d2ffb-8140-4eec-8330-787f6eb93a04',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  return $terms;
}
