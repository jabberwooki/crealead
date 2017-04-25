<?php
/**
 * @file
 * crealead_trainings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_trainings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'trainings_calendar';
  $context->description = '';
  $context->tag = 'Formations';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/calendrier-formations/*' => 'espace-co-entrepreneur/calendrier-formations/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-trainings-calendar' => array(
          'module' => 'menu',
          'delta' => 'menu-trainings-calendar',
          'region' => 'content',
          'weight' => '-44',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Formations');
  $export['trainings_calendar'] = $context;

  return $export;
}
