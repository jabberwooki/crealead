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
      'weight' => '1',
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
  );
  $export['node|brand|block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
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
 * Implements hook_ds_layout_settings_info().
 */
function crealead_brands_ds_layout_settings_info() {
  $export = array();

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
        1 => 'field_brand_phone',
        2 => 'field_brand_logo',
        3 => 'field_brand_references',
        4 => 'field_brand_email',
        5 => 'field_brand_website',
        6 => 'title',
        7 => 'field_brand_baseline',
        8 => 'group_brand_tabs',
        9 => 'field_business_sector',
        10 => 'field_business_groups',
        11 => 'field_social_links',
        12 => 'body',
        13 => 'field_brand_solutions',
        14 => 'news_brand_news',
        15 => 'field_brand_tags',
        16 => 'field_brand_achievements',
        17 => 'group_brand_infos_tab',
        18 => 'group_brans_coes_tab',
        19 => 'group_brand_clients_tab',
        20 => 'group_brand_achiev_tab',
        21 => 'group_brand_blog_tab',
        22 => 'group_brand_contact_tab',
      ),
    ),
    'fields' => array(
      'field_brand_coes' => 'central',
      'field_brand_phone' => 'central',
      'field_brand_logo' => 'central',
      'field_brand_references' => 'central',
      'field_brand_email' => 'central',
      'field_brand_website' => 'central',
      'title' => 'central',
      'field_brand_baseline' => 'central',
      'group_brand_tabs' => 'central',
      'field_business_sector' => 'central',
      'field_business_groups' => 'central',
      'field_social_links' => 'central',
      'body' => 'central',
      'field_brand_solutions' => 'central',
      'news_brand_news' => 'central',
      'field_brand_tags' => 'central',
      'field_brand_achievements' => 'central',
      'group_brand_infos_tab' => 'central',
      'group_brans_coes_tab' => 'central',
      'group_brand_clients_tab' => 'central',
      'group_brand_achiev_tab' => 'central',
      'group_brand_blog_tab' => 'central',
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

  return $export;
}
