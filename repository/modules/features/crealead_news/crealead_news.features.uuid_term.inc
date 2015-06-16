<?php
/**
 * @file
 * crealead_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Partenaire',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1e4eda01-74a4-4d9c-87a0-0f07f0453fce',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Réseau',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '30c20d19-8189-4e43-b9dc-95dd05385f2f',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Vie Crealead',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '31cd85c9-ec76-4c17-9a9a-f1a774acc91b',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Co-entrepreneur',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6b434937-70f0-4c18-a7c3-d22c247b2bba',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Christophe Espiau',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '76f32463-3bc9-4e2b-9a59-4946a4cb5746',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Lucien Chombier',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '87b82a5a-bd71-48ed-948f-d4cf66c1525e',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Salon',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cd6f9310-890e-4370-97d7-9ba65827cc7f',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Activité ludique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e057387d-b88a-480e-bf4e-27f04f0e942e',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  return $terms;
}
