<?php
/**
 * @file
 * crealead_profiles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_profiles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_page';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'entrepreneurs/profil/*' => 'entrepreneurs/profil/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-clients-block_coe_clients' => array(
          'module' => 'views',
          'delta' => 'clients-block_coe_clients',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-achievements-block_achievements' => array(
          'module' => 'views',
          'delta' => 'achievements-block_achievements',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-entrepreneurs-block_coe_contact' => array(
          'module' => 'views',
          'delta' => 'entrepreneurs-block_coe_contact',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-entrepreneurs-block_coe_reco' => array(
          'module' => 'views',
          'delta' => 'entrepreneurs-block_coe_reco',
          'region' => 'content',
          'weight' => '4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneur_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneurs_clients';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'entrepreneurs' => 'entrepreneurs',
        'entrepreneurs/clients' => 'entrepreneurs/clients',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-entrepreneurs-page_clients' => array(
          'module' => 'views',
          'delta' => '-exp-entrepreneurs-page_clients',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneurs_clients'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneurs_competencies_brand';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'entrepreneurs' => 'entrepreneurs',
        'entrepreneurs/competences-marques' => 'entrepreneurs/competences-marques',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-entrepreneurs-comp_brands' => array(
          'module' => 'views',
          'delta' => '-exp-entrepreneurs-comp_brands',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneurs_competencies_brand'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneurs_home';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
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
        'boxes-crealead_links_coe' => array(
          'module' => 'boxes',
          'delta' => 'crealead_links_coe',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneurs_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneurs_search';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'entrepreneurs' => 'entrepreneurs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-business-sectors' => array(
          'module' => 'menu',
          'delta' => 'menu-business-sectors',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-crealead_link_coe_list' => array(
          'module' => 'boxes',
          'delta' => 'crealead_link_coe_list',
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
  $export['entrepreneurs_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneurs_themes';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'entrepreneurs' => 'entrepreneurs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-themes' => array(
          'module' => 'menu',
          'delta' => 'menu-themes',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneurs_themes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reference_page';
  $context->description = '';
  $context->tag = 'Références';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'client' => 'client',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-brands-client_brands' => array(
          'module' => 'views',
          'delta' => 'brands-client_brands',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Références');
  $export['reference_page'] = $context;

  return $export;
}
