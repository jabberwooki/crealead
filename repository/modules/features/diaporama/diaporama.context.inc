<?php
/**
 * @file
 * diaporama.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function diaporama_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'diaporama';
  $context->description = '';
  $context->tag = 'Diaporama';
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
        'views-diaporama-block_home_slideshow' => array(
          'module' => 'views',
          'delta' => 'diaporama-block_home_slideshow',
          'region' => 'full_content_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Diaporama');
  $export['diaporama'] = $context;

  return $export;
}
