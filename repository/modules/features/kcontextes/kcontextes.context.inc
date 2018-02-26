<?php
/**
 * @file
 * kcontextes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kcontextes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'All pages';
  $context->tag = 'Core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-social_headband' => array(
          'module' => 'boxes',
          'delta' => 'social_headband',
          'region' => 'social',
          'weight' => '-10',
        ),
        'custom_search_blocks-1' => array(
          'module' => 'custom_search_blocks',
          'delta' => '1',
          'region' => 'social',
          'weight' => '-9',
        ),
        'menu-menu-top' => array(
          'module' => 'menu',
          'delta' => 'menu-top',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'kcore-crealead_sponsors' => array(
          'module' => 'kcore',
          'delta' => 'crealead_sponsors',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  t('Core');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page only';
  $context->tag = 'Core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kcore-crealead_coes_number' => array(
          'module' => 'kcore',
          'delta' => 'crealead_coes_number',
          'region' => 'content_header',
          'weight' => '-10',
        ),
        'kcore-crealead_refs_number' => array(
          'module' => 'kcore',
          'delta' => 'crealead_refs_number',
          'region' => 'content_header',
          'weight' => '-9',
        ),
        'kcore-crealead_speakers_number' => array(
          'module' => 'kcore',
          'delta' => 'crealead_speakers_number',
          'region' => 'content_header',
          'weight' => '-8',
        ),
        'kcore-crealead_meetings_number' => array(
          'module' => 'kcore',
          'delta' => 'crealead_meetings_number',
          'region' => 'content_header',
          'weight' => '-7',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'footer',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Front page only');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front';
  $context->description = 'All pages but front';
  $context->tag = 'Core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages but front');
  t('Core');
  $export['not-front'] = $context;

  return $export;
}
