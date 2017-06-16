<?php
/**
 * @file
 * crealead_newsflashes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_newsflashes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area_home';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/accueil' => 'espace-co-entrepreneur/accueil',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-newsflashes-coes_area_block' => array(
          'module' => 'views',
          'delta' => 'newsflashes-coes_area_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-needs-needs_list' => array(
          'module' => 'views',
          'delta' => 'needs-needs_list',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneur_area_home'] = $context;

  return $export;
}
