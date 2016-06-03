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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'brand_page';
  $context->description = '';
  $context->tag = 'Marques';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'brand' => 'brand',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-content_header_brand' => array(
          'module' => 'ds_extras',
          'delta' => 'content_header_brand',
          'region' => 'content_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marques');
  $export['brand_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'brand_search';
  $context->description = '';
  $context->tag = 'Marques';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'annuaire-entrepreneurs' => 'annuaire-entrepreneurs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-search_entrepreneur_intro' => array(
          'module' => 'boxes',
          'delta' => 'search_entrepreneur_intro',
          'region' => 'full_content_header',
          'weight' => '0',
        ),
        'views--exp-brands-brands_list' => array(
          'module' => 'views',
          'delta' => '-exp-brands-brands_list',
          'region' => 'content_header',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marques');
  $export['brand_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sector_brand_page';
  $context->description = '';
  $context->tag = 'Marques';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'sector_brands' => 'sector_brands',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'crealead_brands-crealead_sector_brand_nav' => array(
          'module' => 'crealead_brands',
          'delta' => 'crealead_sector_brand_nav',
          'region' => 'sector_brands_navigation',
          'weight' => '-8',
        ),
        'views-29915912ebf83f96383359d243203eb4' => array(
          'module' => 'views',
          'delta' => '29915912ebf83f96383359d243203eb4',
          'region' => 'sector_brands_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marques');
  $export['sector_brand_page'] = $context;

  return $export;
}
