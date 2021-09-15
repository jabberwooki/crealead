<?php

/**
 * @file
 * crealead_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__achievement';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'block' => array(
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_block' => array(
        'custom_settings' => TRUE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'sector_brand_block' => array(
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
      'certifications_labels_block' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '11',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__client';
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
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__coe_page';
  $strongarm->value = array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'page' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '11',
        ),
        'path' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(
        'users_eva_user_infos' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_profile2__coe_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
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
      'referent_fullname' => array(
        'custom_settings' => FALSE,
      ),
      'brand_coe' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '12',
        ),
        'metatags' => array(
          'weight' => '14',
        ),
        'password_policy' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '13',
        ),
        'account' => array(
          'weight' => '5',
        ),
        'timezone' => array(
          'weight' => '11',
        ),
        'locale' => array(
          'weight' => '10',
        ),
        'masquerade' => array(
          'weight' => '15',
        ),
        'picture' => array(
          'weight' => '5',
        ),
        'googleanalytics' => array(
          'weight' => '6',
        ),
        'contact' => array(
          'weight' => '9',
        ),
        'mimemail' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'referent_fullname' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'brand_coe' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'masquerade' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'referent_fullname' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'brand_coe' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'profile_main' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'referent_fullname' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'brand_coe' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'profile_entrepreneur' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'referent_fullname' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'brand_coe' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'profile_coe_page' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'brand_coe' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'mimemail' => array(
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'profile_assistant_page' => array(
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'profile_direction_page' => array(
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'profile_management_page' => array(
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'profile_provider_page' => array(
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'profile_referent_page' => array(
          'full' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'profile_ca_page' => array(
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'profile_dup_page' => array(
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'info_meetings_default_image';
  $strongarm->value = 40;
  $export['info_meetings_default_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_achievement';
  $strongarm->value = '0';
  $export['language_content_type_achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_client';
  $strongarm->value = '0';
  $export['language_content_type_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_achievement';
  $strongarm->value = array();
  $export['menu_options_achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_client';
  $strongarm->value = array();
  $export['menu_options_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_achievement';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_client';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_achievement';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_client';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_achievement';
  $strongarm->value = '1';
  $export['node_preview_achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_client';
  $strongarm->value = '1';
  $export['node_preview_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_achievement';
  $strongarm->value = 0;
  $export['node_submitted_achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_client';
  $strongarm->value = 0;
  $export['node_submitted_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_client_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_client_types_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_competencies_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_competencies_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_entrepreneur_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_entrepreneur_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'roleassign_roles';
  $strongarm->value = array(
    14479344 => '14479344',
    103860121 => '103860121',
    259028912 => '259028912',
    31497918 => '31497918',
    199363405 => 0,
    227964678 => 0,
    157083709 => 0,
    7178059 => 0,
    157297110 => 0,
    191976793 => 0,
    8998634 => 0,
    65237971 => 0,
    58920180 => 0,
    155486910 => 0,
    1936756 => 0,
    36071687 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $export['roleassign_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_business_sectors';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_themes';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_business_sectors';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_themes';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_business_sectors';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_themes';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_business_sectors';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_themes';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_business_sectors';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_themes';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_business_sectors';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_themes';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_business_sectors';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_themes';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_business_sectors';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_themes';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_business_sectors';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_themes';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_business_sectors';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_themes';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_business_sectors';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_menu_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_themes';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_menu_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_business_sectors';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_themes';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_business_sectors';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_business_sectors';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_themes';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_themes';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_business_sectors';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_business_sectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_themes';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_themes'] = $strongarm;

  return $export;
}
