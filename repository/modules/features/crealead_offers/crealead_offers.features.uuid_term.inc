<?php
/**
 * @file
 * crealead_offers.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_offers_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Crealeadien à titre personnel',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '35943eb4-72e5-43f9-91ad-e3509da52f7f',
    'vocabulary_machine_name' => 'offer_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Crealead Structure',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '8f7a4d71-a3a5-4619-ad14-aa4fe2cee28d',
    'vocabulary_machine_name' => 'offer_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Activité co-entrepreneur',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a4df642a-58e8-450b-9098-4503ed11313a',
    'vocabulary_machine_name' => 'offer_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Offre externe',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'd608a566-a38c-4906-a43f-b94964fddc15',
    'vocabulary_machine_name' => 'offer_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
