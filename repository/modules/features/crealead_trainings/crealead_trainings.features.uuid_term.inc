<?php
/**
 * @file
 * crealead_trainings.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_trainings_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Formation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0cb25cc9-02ef-412e-9f60-0577ead8dca1',
    'vocabulary_machine_name' => 'training_type',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Animation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '84e1d27a-0544-4bc5-8a38-263d1eeca66f',
    'vocabulary_machine_name' => 'training_type',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Echange de pratiques',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a4c8fd2b-d9d4-4822-be6b-5355298b74cf',
    'vocabulary_machine_name' => 'training_type',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Atelier',
    'description' => '<p>&nbsp;</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dea45bc4-5ab1-47c9-a0fc-c95857e50d49',
    'vocabulary_machine_name' => 'training_type',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Initiation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ede01fff-04b1-4e33-923e-61fa1412402a',
    'vocabulary_machine_name' => 'training_type',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
