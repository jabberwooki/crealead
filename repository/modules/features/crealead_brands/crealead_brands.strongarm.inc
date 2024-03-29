<?php

/**
 * @file
 * crealead_brands.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_brands_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__pole_coes_contact';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'email' => array(
        'custom_settings' => FALSE,
      ),
      'confirmation' => array(
        'custom_settings' => FALSE,
      ),
      'download' => array(
        'custom_settings' => FALSE,
      ),
      'table' => array(
        'custom_settings' => FALSE,
      ),
      'review' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__pole_coes_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__brand';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'logo' => array(
        'custom_settings' => TRUE,
      ),
      'brand_articles' => array(
        'custom_settings' => FALSE,
      ),
      'news_2_3' => array(
        'custom_settings' => FALSE,
      ),
      'news_brand' => array(
        'custom_settings' => FALSE,
      ),
      'zoom_news' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_block' => array(
        'custom_settings' => TRUE,
      ),
      'sector_brand_block' => array(
        'custom_settings' => TRUE,
      ),
      'certifications_labels_block' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'sessions' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '21',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '22',
        ),
        'redirect' => array(
          'weight' => '23',
        ),
      ),
      'display' => array(
        'news_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'logo' => NULL,
          'landing_page_block' => NULL,
          'sector_brand_block' => NULL,
          'certifications_labels_block' => NULL,
        ),
        'news_brand_news' => array(
          'full' => array(
            'weight' => '44',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'landing_page_block' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'sector_brand_block' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'certifications_labels_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'articles_entity_view_1' => array(
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'logo' => NULL,
          'landing_page_block' => NULL,
          'sector_brand_block' => NULL,
          'certifications_labels_block' => NULL,
        ),
        'articles_brand_articles' => array(
          'full' => array(
            'weight' => '53',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'landing_page_block' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'sector_brand_block' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'certifications_labels_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'brand_contact_submissions_entity_view_1' => array(
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'logo' => NULL,
          'landing_page_block' => NULL,
          'sector_brand_block' => NULL,
          'certifications_labels_block' => NULL,
        ),
        'brand_contact_submissions_eva_contacts_list' => array(
          'full' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'block' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'landing_page_block' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'sector_brand_block' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'certifications_labels_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'trainings_entity_view_1' => array(
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'landing_page_block' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'sector_brand_block' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'certifications_labels_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'events_calendar_entity_view_1' => array(
          'full' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
        ),
        'events_calendar_entity_view_2' => array(
          'full' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
        ),
        'brand_agenda_entity_view_1' => array(
          'full' => array(
            'weight' => '46',
            'visible' => TRUE,
          ),
        ),
        'events_calendar_entity_view_3' => array(
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'events_calendar_eva_agenda' => array(
          'full' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'sector_brand_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'brands_calendar_entity_view_1' => array(
          'full' => array(
            'weight' => '45',
            'visible' => TRUE,
          ),
        ),
        'brands_calendar_eva_agenda' => array(
          'full' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
        ),
        'brands_calendar_2_eva_agenda' => array(
          'full' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'agendas_eva_brand_agenda' => array(
          'full' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
        ),
        'brandagenda_entity_view_1' => array(
          'full' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
        ),
        'brand_agenda_eva_brandagenda' => array(
          'full' => array(
            'weight' => '45',
            'visible' => TRUE,
          ),
          'sector_brand_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'articles_allowed_articles' => array(
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'sector_brand_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'products_entity_view_1' => array(
          'full' => array(
            'weight' => '67',
            'visible' => TRUE,
          ),
          'sector_brand_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'trainings_allowed_trainings' => array(
          'full' => array(
            'weight' => '31',
            'visible' => TRUE,
          ),
          'sector_brand_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'products_entity_view_2' => array(
          'full' => array(
            'weight' => '69',
            'visible' => TRUE,
          ),
        ),
        'products_allowed_products' => array(
          'full' => array(
            'weight' => '71',
            'visible' => TRUE,
          ),
          'sector_brand_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__certifications_labels';
  $strongarm->value = array(
    'view_modes' => array(
      'logo' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_block' => array(
        'custom_settings' => FALSE,
      ),
      'block' => array(
        'custom_settings' => FALSE,
      ),
      'certifications_labels_block' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'certifications_labels_block' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'brands_cl_brands' => array(
          'certifications_labels_block' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'logo' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'articles_entity_view_1' => array(
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'certifications_labels_block' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'logo' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'news_entity_view_1' => array(
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'certifications_labels_block' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'logo' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'achievements_entity_view_1' => array(
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'trainings_entity_view_2' => array(
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__certifications_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__sector_brands';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block' => array(
        'custom_settings' => FALSE,
      ),
      'pole_header' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'certifications_labels_block' => array(
        'custom_settings' => FALSE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_block' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'block' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'news_entity_view_1' => array(
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'block' => NULL,
          'pole_header' => NULL,
        ),
        'news_sector_brand_news' => array(
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'articles_sector_brand_articles' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'achievements_sector_brand_achievs' => array(
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'brands_sector_brand_brands' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'brands_sector_brand_brands_form' => array(
          'full' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'trainings_sector_brand_trainings' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
        'news_sector_brands_front_news' => array(
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'achievements_sector_brands_front_achievs' => array(
          'full' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'products_sector_brands_products' => array(
          'full' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'products_sector_brands_products_form' => array(
          'full' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'trainings_sector_brand_trainings_form' => array(
          'full' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'pole_header' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__sector_brands'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__themes';
  $strongarm->value = array(
    'view_modes' => array(
      'block' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_block' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'landing_page_block' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'brands_entity_view_1' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'block' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'landing_page_block' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'news_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'landing_page_block' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'news_theme_news' => array(
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'landing_page_block' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'articles_theme_articles' => array(
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'landing_page_block' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'trainings_landing_page_trainings' => array(
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'landing_page_block' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'achievements_theme_realisations' => array(
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'landing_page_block' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_brand';
  $strongarm->value = '0';
  $export['language_content_type_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_brand';
  $strongarm->value = array();
  $export['menu_options_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_brand';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_brand';
  $strongarm->value = array();
  $export['node_options_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_brand';
  $strongarm->value = '1';
  $export['node_preview_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_brand';
  $strongarm->value = 0;
  $export['node_submitted_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_achievement_pattern';
  $strongarm->value = 'realisations/[node:title]';
  $export['pathauto_node_achievement_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_brand_pattern';
  $strongarm->value = 'annuaire-entrepreneurs/[node:title]';
  $export['pathauto_node_brand_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_client_pattern';
  $strongarm->value = 'references/[node:title]';
  $export['pathauto_node_client_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_achievement_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_achievement_types_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_brand_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_brand_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_business_sectors_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_business_sectors_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_cl_categories_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_cl_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sector_brands_pattern';
  $strongarm->value = 'poles-activites/[term:name]';
  $export['pathauto_taxonomy_term_sector_brands_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialfield_services';
  $strongarm->value = array(
    'facebook' => array(
      'name' => 'Facebook',
      'icon' => 'icon-facebook',
      'validation_pattern' => '*facebook.com/*',
    ),
    'twitter' => array(
      'name' => 'Twitter',
      'icon' => 'icon-twitter',
      'validation_pattern' => '*twitter.com/*',
    ),
    'googleplus' => array(
      'name' => 'Google+',
      'icon' => 'icon-googleplus',
      'validation_pattern' => '*plus.google.com/*',
    ),
    'linkedin' => array(
      'name' => 'LinkedIn',
      'icon' => 'icon-linkedin',
      'validation_pattern' => '*linkedin.com/*',
    ),
    'youtube' => array(
      'name' => 'YouTube',
      'icon' => 'icon-youtube',
      'validation_pattern' => '*youtube.com/*',
    ),
    'vimeo' => array(
      'name' => 'Vimeo',
      'icon' => 'icon-vimeo',
      'validation_pattern' => '*vimeo.com/*',
    ),
    'delicious' => array(
      'name' => 'Delicious',
      'icon' => 'icon-delicious',
      'validation_pattern' => '*delicious.com/*',
    ),
    'digg' => array(
      'name' => 'Digg',
      'icon' => 'icon-digg',
      'validation_pattern' => '*digg.com/*',
    ),
    'flickr' => array(
      'name' => 'Flickr',
      'icon' => 'icon-flickr',
      'validation_pattern' => '*flickr.com/*',
    ),
    'yahoo' => array(
      'name' => 'Yahoo!',
      'icon' => 'icon-yahoo',
      'validation_pattern' => '*yahoo.com/*',
    ),
    'myspace' => array(
      'name' => 'Myspace',
      'icon' => 'icon-myspace',
      'validation_pattern' => '*myspace.com/*',
    ),
    'pinterest' => array(
      'name' => 'Pinterest',
      'icon' => 'icon-pinterest',
      'validation_pattern' => '*pinterest.com/*',
    ),
    'reddit' => array(
      'name' => 'Reddit',
      'icon' => 'icon-reddit',
      'validation_pattern' => '*reddit.com/*',
    ),
    'slideshare' => array(
      'name' => 'Slideshare',
      'icon' => 'icon-slideshare',
      'validation_pattern' => '*slideshare.net/*',
    ),
    'stumbleupon' => array(
      'name' => 'Stumbleupon',
      'icon' => 'icon-stumbleupon',
      'validation_pattern' => '*stumbleupon.com/*',
    ),
    'viadeo' => array(
      'name' => 'Viadeo',
      'icon' => 'icon-viadeo',
      'validation_pattern' => '*viadeo.com/*',
    ),
    'instagram' => array(
      'name' => 'Instagram',
      'icon' => 'icon-instagram',
      'validation_pattern' => '*instagram.com/*',
    ),
  );
  $export['socialfield_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_sector_brands';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_sector_brands'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_sector_brands';
  $strongarm->value = 1;
  $export['taxonomy_menu_hide_empty_terms_sector_brands'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_sector_brands';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_sector_brands'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_sector_brands';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_sector_brands'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_sector_brands';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_sector_brands'] = $strongarm;

  return $export;
}
