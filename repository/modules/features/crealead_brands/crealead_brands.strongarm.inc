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
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '19',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '20',
        ),
        'redirect' => array(
          'weight' => '21',
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
        ),
        'news_brand_news' => array(
          'full' => array(
            'weight' => '42',
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
        ),
        'articles_entity_view_1' => array(
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'logo' => NULL,
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
        ),
        'brand_contact_submissions_entity_view_1' => array(
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'logo' => NULL,
        ),
        'brand_contact_submissions_eva_contacts_list' => array(
          'full' => array(
            'weight' => '21',
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
        ),
        'trainings_entity_view_1' => array(
          'full' => array(
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
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'brands_entity_view_1' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '3',
            'visible' => FALSE,
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
        ),
        'news_theme_news' => array(
          'full' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'articles_theme_articles' => array(
          'full' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
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
      'icon' => 'icon-gplus',
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
  );
  $export['socialfield_services'] = $strongarm;

  return $export;
}
