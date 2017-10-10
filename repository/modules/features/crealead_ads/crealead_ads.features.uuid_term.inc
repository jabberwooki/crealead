<?php
/**
 * @file
 * crealead_ads.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_ads_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Activité co-entrepreneur',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '61eeb89e-9d86-4f60-aca8-ffde34e7ff14',
    'vocabulary_machine_name' => 'ad_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Crealead Structure',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '81bffdc8-426e-4ac0-935a-a821a405b085',
    'vocabulary_machine_name' => 'ad_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Perso',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '88e99ddc-b047-47b9-b882-0ebe830b79c9',
    'vocabulary_machine_name' => 'ad_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Offre externe',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f3416d0e-6a45-44da-8ebf-3670e5e3a941',
    'vocabulary_machine_name' => 'ad_sources',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
