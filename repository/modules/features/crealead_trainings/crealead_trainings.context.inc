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
        'menu-menu-calendar-listing-switcher' => array(
          'module' => 'menu',
          'delta' => 'menu-calendar-listing-switcher',
          'region' => 'content',
          'weight' => '-45',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Formations');
  $export['trainings_calendar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'trainings_calendar_calendar';
  $context->description = '';
  $context->tag = 'Formations';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/calendrier-formations/mois' => 'espace-co-entrepreneur/calendrier-formations/mois',
        'espace-co-entrepreneur/calendrier-formations/semaine' => 'espace-co-entrepreneur/calendrier-formations/semaine',
        'espace-co-entrepreneur/calendrier-formations/jour' => 'espace-co-entrepreneur/calendrier-formations/jour',
        'espace-co-entrepreneur/calendrier-formations/annee' => 'espace-co-entrepreneur/calendrier-formations/annee',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Formations');
  $export['trainings_calendar_calendar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'trainings_calendar_mois';
  $context->description = '';
  $context->tag = 'Formations';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/calendrier-formations/mois' => 'espace-co-entrepreneur/calendrier-formations/mois',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'crealead_trainings-crealead_calendar_legend' => array(
          'module' => 'crealead_trainings',
          'delta' => 'crealead_calendar_legend',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Formations');
  $export['trainings_calendar_mois'] = $context;

  return $export;
}
