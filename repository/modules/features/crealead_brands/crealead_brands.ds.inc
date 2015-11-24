<?php
/**
 * @file
 * crealead_brands.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_brands_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|achievement|block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'achievement';
  $ds_fieldsetting->view_mode = 'block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|achievement|block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|achievement|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'achievement';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|achievement|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'field_brand_logo' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|brand|block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'brand_contacts' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|brand|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|brand|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|client|block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'client';
  $ds_fieldsetting->view_mode = 'block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => 'client-name',
      ),
    ),
  );
  $export['node|client|block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|client|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'client';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|client|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function crealead_brands_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'brand_contacts';
  $ds_field->label = 'Prises de contact';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|full';
  $ds_field->properties = array(
    'block' => 'crealead_brands|crealead_brands_contacts_list',
    'block_render' => '2',
  );
  $export['brand_contacts'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_brands_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|contact|full';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'contact';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_contact_brand_name',
        1 => 'field_contact_name',
        2 => 'field_contact_email',
        3 => 'field_contact_phone',
        4 => 'field_contact_type',
        5 => 'field_contact_subject',
        6 => 'field_contact_body',
      ),
    ),
    'fields' => array(
      'field_contact_brand_name' => 'central',
      'field_contact_name' => 'central',
      'field_contact_email' => 'central',
      'field_contact_phone' => 'central',
      'field_contact_type' => 'central',
      'field_contact_subject' => 'central',
      'field_contact_body' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['entityform|contact|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_brand_coes|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_brand_coes';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_brand_coe',
      ),
      'right' => array(
        1 => 'field_competencies',
      ),
    ),
    'fields' => array(
      'field_brand_coe' => 'left',
      'field_competencies' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_brand_coes|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|achievement|block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'achievement';
  $ds_layout->view_mode = 'block';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_achievement_photos',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_achievement_photos' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|achievement|block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|achievement|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'achievement';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_achievement_photos',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_achievement_photos' => 'central',
      'body' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|achievement|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'block';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_brand_logo',
        1 => 'title',
        2 => 'field_brand_baseline',
      ),
    ),
    'fields' => array(
      'field_brand_logo' => 'central',
      'title' => 'central',
      'field_brand_baseline' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|brand|block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_brand_coes',
        1 => 'field_brand_references',
        2 => 'field_brand_website',
        3 => 'field_brand_logo',
        4 => 'field_brand_email',
        5 => 'title',
        6 => 'field_brand_phone',
        7 => 'field_brand_baseline',
        8 => 'group_brand_tabs',
        9 => 'field_social_links',
        10 => 'field_contact_form',
        11 => 'brand_contacts',
        12 => 'field_business_sector',
        13 => 'field_business_groups',
        14 => 'body',
        15 => 'field_brand_solutions',
        16 => 'news_brand_news',
        17 => 'field_brand_tags',
        18 => 'articles_brand_articles',
        19 => 'field_brand_achievements',
        20 => 'group_brand_infos_tab',
        21 => 'group_brans_coes_tab',
        22 => 'group_brand_clients_tab',
        23 => 'group_brand_achiev_tab',
        24 => 'group_brand_blog_tab',
        25 => 'group_brand_articles_tab',
        26 => 'group_brand_contact_tab',
      ),
    ),
    'fields' => array(
      'field_brand_coes' => 'central',
      'field_brand_references' => 'central',
      'field_brand_website' => 'central',
      'field_brand_logo' => 'central',
      'field_brand_email' => 'central',
      'title' => 'central',
      'field_brand_phone' => 'central',
      'field_brand_baseline' => 'central',
      'group_brand_tabs' => 'central',
      'field_social_links' => 'central',
      'field_contact_form' => 'central',
      'brand_contacts' => 'central',
      'field_business_sector' => 'central',
      'field_business_groups' => 'central',
      'body' => 'central',
      'field_brand_solutions' => 'central',
      'news_brand_news' => 'central',
      'field_brand_tags' => 'central',
      'articles_brand_articles' => 'central',
      'field_brand_achievements' => 'central',
      'group_brand_infos_tab' => 'central',
      'group_brans_coes_tab' => 'central',
      'group_brand_clients_tab' => 'central',
      'group_brand_achiev_tab' => 'central',
      'group_brand_blog_tab' => 'central',
      'group_brand_articles_tab' => 'central',
      'group_brand_contact_tab' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|brand|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_brand_logo',
        1 => 'title',
        2 => 'field_brand_baseline',
      ),
    ),
    'fields' => array(
      'field_brand_logo' => 'central',
      'title' => 'central',
      'field_brand_baseline' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|brand|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|client|block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'client';
  $ds_layout->view_mode = 'block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_client_logo',
        1 => 'title',
        2 => 'field_client_location',
      ),
    ),
    'fields' => array(
      'field_client_logo' => 'ds_content',
      'title' => 'ds_content',
      'field_client_location' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|client|block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|client|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'client';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_client_logo',
        1 => 'title',
        2 => 'field_client_type',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_client_logo' => 'ds_content',
      'title' => 'ds_content',
      'field_client_type' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|client|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|themes|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'themes';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'description',
        1 => 'group_theme_tabs',
        2 => 'group_theme_brands_tab',
        3 => 'group_theme_blog_tab',
        4 => 'brands_entity_view_1',
        5 => 'news_theme_news',
        6 => 'articles_theme_articles',
      ),
    ),
    'fields' => array(
      'description' => 'central',
      'group_theme_tabs' => 'central',
      'group_theme_brands_tab' => 'central',
      'group_theme_blog_tab' => 'central',
      'brands_entity_view_1' => 'central',
      'news_theme_news' => 'central',
      'articles_theme_articles' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['taxonomy_term|themes|full'] = $ds_layout;

  return $export;
}
