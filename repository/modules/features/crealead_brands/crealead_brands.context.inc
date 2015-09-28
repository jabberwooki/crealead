<?php
/**
 * @file
 * crealead_brands.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_brands_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'achievement_page';
  $context->description = '';
  $context->tag = 'Réalisations';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'achievement' => 'achievement',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-42e009b8eb5d137e2de7048d80d51bda' => array(
          'module' => 'views',
          'delta' => '42e009b8eb5d137e2de7048d80d51bda',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Réalisations');
  $export['achievement_page'] = $context;

  return $export;
}
