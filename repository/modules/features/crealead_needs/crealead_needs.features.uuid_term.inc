<?php
/**
 * @file
 * crealead_needs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_needs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => '1 mois',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '5655394b-9be8-44aa-b985-d88a37bef328',
    'vocabulary_machine_name' => 'expiration_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Permanent',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '5782efb9-4a2c-4e44-9b3b-4390ef1c2dd3',
    'vocabulary_machine_name' => 'expiration_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Pas d\'urgence',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'a11a033a-3018-475b-8ffb-a95b40ea3cab',
    'vocabulary_machine_name' => 'expiration_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'interne',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a21d1e9b-b97c-47a3-8405-b2a0c874aaec',
    'vocabulary_machine_name' => 'need_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Je ne sais pas',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'a38e1b72-4bea-4b75-9b58-1f16f994562c',
    'vocabulary_machine_name' => 'expiration_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'externe',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'a597bbeb-b323-40ca-8336-35b4be98cb3b',
    'vocabulary_machine_name' => 'need_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'interne ou perso',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'afd19e4c-9ed1-4fb8-b654-0a43057fd401',
    'vocabulary_machine_name' => 'need_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Urgent (1 semaine)',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c51e0e12-f59e-48ca-8db5-2fff8b108acc',
    'vocabulary_machine_name' => 'expiration_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'perso',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'e27640d8-6ea5-402f-9c08-a608e9218a34',
    'vocabulary_machine_name' => 'need_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
