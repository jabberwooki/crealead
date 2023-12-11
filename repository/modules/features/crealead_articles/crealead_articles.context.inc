<?php

/**
 * @file
 * crealead_articles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_articles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testimonials_home';
  $context->description = '';
  $context->tag = 'Articles';
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
        'views-articles-testimonials_front' => array(
          'module' => 'views',
          'delta' => 'articles-testimonials_front',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  $export['testimonials_home'] = $context;

  return $export;
}
