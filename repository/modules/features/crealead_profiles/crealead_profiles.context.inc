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
          'weight' => '6',
        ),
        'views-217dc04f828bd7d2e638498f9c4a9ff1' => array(
          'module' => 'views',
          'delta' => '217dc04f828bd7d2e638498f9c4a9ff1',
          'region' => 'content',
          'weight' => '7',
        ),
        'views-808ab15e484c599f0def5ebeb376ed07' => array(
          'module' => 'views',
          'delta' => '808ab15e484c599f0def5ebeb376ed07',
          'region' => 'content',
          'weight' => '8',
        ),
        'views-entrepreneurs-block_coe_reco' => array(
          'module' => 'views',
          'delta' => 'entrepreneurs-block_coe_reco',
          'region' => 'content',
          'weight' => '10',
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
          'weight' => '-8',
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
        'views-873c744ab1d84d2923335dffaa67c44f' => array(
          'module' => 'views',
          'delta' => '873c744ab1d84d2923335dffaa67c44f',
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
          'weight' => '-7',
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
        'views-entrepreneurs-block_client_coes' => array(
          'module' => 'views',
          'delta' => 'entrepreneurs-block_client_coes',
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
