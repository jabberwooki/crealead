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
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '0',
        'ft' => array(),
      ),
    ),
  );
  $export['node|achievement|block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|achievement|certifications_labels_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'achievement';
  $ds_fieldsetting->view_mode = 'certifications_labels_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|achievement|certifications_labels_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|achievement|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'achievement';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'achievement_brand' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_achievement_photos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|achievement|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|achievement|sector_brand_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'achievement';
  $ds_fieldsetting->view_mode = 'sector_brand_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => 'mask',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'info',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
        'field_formatter_class' => '',
      ),
    ),
    'field_achievement_photos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|achievement|sector_brand_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'block';
  $ds_fieldsetting->settings = array(
    'title_brand' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'mask',
        'exclude node title settings' => '0',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'info',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_brand_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|brand|block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|certifications_labels_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'certifications_labels_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|brand|certifications_labels_block'] = $ds_fieldsetting;

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
      'weight' => '33',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Description ',
        ),
      ),
    ),
    'field_brand_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Courriel ',
        ),
      ),
    ),
    'field_brand_phone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Téléphone ',
        ),
      ),
    ),
    'field_brand_solutions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Solutions ',
        ),
      ),
    ),
    'field_brand_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Mots clés ',
        ),
      ),
    ),
    'field_brand_website' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Site web ',
        ),
      ),
    ),
    'field_business_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Secteur d\'activité ',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|brand|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|landing_page_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'landing_page_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'field_brand_logo' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|brand|landing_page_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|brand|sector_brand_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'brand';
  $ds_fieldsetting->view_mode = 'sector_brand_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'mask',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'info',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
        'field_formatter_class' => '',
      ),
    ),
    'field_brand_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|brand|sector_brand_block'] = $ds_fieldsetting;

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
      'weight' => '0',
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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|certifications_labels|certifications_labels_block';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'certifications_labels';
  $ds_fieldsetting->view_mode = 'certifications_labels_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|certifications_labels|certifications_labels_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|sector_brands|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'sector_brands';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'achievements_anchor' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
        'field_formatter_class' => '',
      ),
    ),
    'brands_products_anchor' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
        'field_formatter_class' => '',
      ),
    ),
    'news_articles_anchor' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['taxonomy_term|sector_brands|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|themes|landing_page_block';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'themes';
  $ds_fieldsetting->view_mode = 'landing_page_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|themes|landing_page_block'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function crealead_brands_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'achievement_brand';
  $ds_field->label = 'Marque';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'achievement|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'nom de la marque',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['achievement_brand'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'achievements_anchor';
  $ds_field->label = 'Ancre Réalisations';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a id="achievements" name="achievements"></a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['achievements_anchor'] = $ds_field;

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

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'brands_products_anchor';
  $ds_field->label = 'Ancre Marques et Produits';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a id="brands-products" name="brands-products"></a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['brands_products_anchor'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'news_articles_anchor';
  $ds_field->label = 'Ancre Actus et Articles';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a id="news-articles" name="news-articles"></a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['news_articles_anchor'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'title_brand';
  $ds_field->label = 'Title brand';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|block';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h3 class="list-brand"><a href="[node:url:relative]">[node:title]</a></h3>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['title_brand'] = $ds_field;

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
  $ds_layout->layout = 'bootstrap_7_5';
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
  $ds_layout->id = 'node|achievement|certifications_labels_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'achievement';
  $ds_layout->view_mode = 'certifications_labels_block';
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
    'limit' => array(
      'field_achievement_photos' => '1',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|achievement|certifications_labels_block'] = $ds_layout;

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
        3 => 'field_achiev_authors',
        4 => 'achievement_brand',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_achievement_photos' => 'central',
      'body' => 'central',
      'field_achiev_authors' => 'central',
      'achievement_brand' => 'central',
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
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|achievement|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|achievement|sector_brand_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'achievement';
  $ds_layout->view_mode = 'sector_brand_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_css_effect_3',
        1 => 'title',
        2 => 'field_achievement_photos',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'group_css_effect_3' => 'ds_content',
      'title' => 'ds_content',
      'field_achievement_photos' => 'ds_content',
      'body' => 'ds_content',
    ),
    'limit' => array(
      'field_achievement_photos' => '1',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|achievement|sector_brand_block'] = $ds_layout;

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
        0 => 'group_css_effect_3',
        1 => 'field_brand_logo',
        2 => 'title_brand',
        3 => 'field_brand_baseline',
        4 => 'title',
      ),
    ),
    'fields' => array(
      'group_css_effect_3' => 'central',
      'field_brand_logo' => 'central',
      'title_brand' => 'central',
      'field_brand_baseline' => 'central',
      'title' => 'central',
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
  $ds_layout->id = 'node|brand|certifications_labels_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'certifications_labels_block';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'field_brand_baseline',
      ),
      'left' => array(
        2 => 'field_brand_logo',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_brand_baseline' => 'right',
      'field_brand_logo' => 'left',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|brand|certifications_labels_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'content_header_brand' => array(
        0 => 'group_row_1',
        3 => 'group_col_1_3',
        4 => 'group_col_2_6',
        5 => 'group_col3_3',
        9 => 'field_brand_logo',
        20 => 'group_title_hook',
        21 => 'title',
        22 => 'field_brand_baseline',
        23 => 'field_business_sector',
        24 => 'field_certifications_labels',
        25 => 'group_contact',
        26 => 'field_brand_phone',
        27 => 'field_social_links',
        28 => 'field_brand_email',
        29 => 'field_brand_website',
      ),
      'central' => array(
        1 => 'field_brand_references',
        2 => 'field_brand_coes',
        6 => 'field_contact_form',
        7 => 'group_brand_tabs',
        8 => 'brand_contacts',
        10 => 'trainings_entity_view_1',
        11 => 'field_brand_achievements',
        12 => 'group_brand_infos_tab',
        13 => 'group_brans_coes_tab',
        14 => 'group_brand_clients_tab',
        15 => 'group_brand_achiev_tab',
        16 => 'group_brand_news_tab',
        17 => 'group_brand_articles_tab',
        18 => 'group_brand_trainings_tab',
        19 => 'group_brand_contact_tab',
        30 => 'news_brand_news',
        31 => 'events_calendar_entity_view_1',
        32 => 'group_brand_infos_1',
        33 => 'group_brand_infos_2',
        34 => 'field_brand_tags',
        35 => 'body',
        36 => 'field_brand_solutions',
        37 => 'articles_brand_articles',
      ),
    ),
    'fields' => array(
      'group_row_1' => 'content_header_brand',
      'field_brand_references' => 'central',
      'field_brand_coes' => 'central',
      'group_col_1_3' => 'content_header_brand',
      'group_col_2_6' => 'content_header_brand',
      'group_col3_3' => 'content_header_brand',
      'field_contact_form' => 'central',
      'group_brand_tabs' => 'central',
      'brand_contacts' => 'central',
      'field_brand_logo' => 'content_header_brand',
      'trainings_entity_view_1' => 'central',
      'field_brand_achievements' => 'central',
      'group_brand_infos_tab' => 'central',
      'group_brans_coes_tab' => 'central',
      'group_brand_clients_tab' => 'central',
      'group_brand_achiev_tab' => 'central',
      'group_brand_news_tab' => 'central',
      'group_brand_articles_tab' => 'central',
      'group_brand_trainings_tab' => 'central',
      'group_brand_contact_tab' => 'central',
      'group_title_hook' => 'content_header_brand',
      'title' => 'content_header_brand',
      'field_brand_baseline' => 'content_header_brand',
      'field_business_sector' => 'content_header_brand',
      'field_certifications_labels' => 'content_header_brand',
      'group_contact' => 'content_header_brand',
      'field_brand_phone' => 'content_header_brand',
      'field_social_links' => 'content_header_brand',
      'field_brand_email' => 'content_header_brand',
      'field_brand_website' => 'content_header_brand',
      'news_brand_news' => 'central',
      'events_calendar_entity_view_1' => 'central',
      'group_brand_infos_1' => 'central',
      'group_brand_infos_2' => 'central',
      'field_brand_tags' => 'central',
      'body' => 'central',
      'field_brand_solutions' => 'central',
      'articles_brand_articles' => 'central',
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
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|brand|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|landing_page_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'landing_page_block';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_brand_logo',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_brand_baseline',
      ),
    ),
    'fields' => array(
      'field_brand_logo' => 'left',
      'title' => 'right',
      'field_brand_baseline' => 'right',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|brand|landing_page_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|logo';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'logo';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_brand_logo',
      ),
    ),
    'fields' => array(
      'field_brand_logo' => 'central',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|brand|logo'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|sector_brand_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'sector_brand_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_css_effect_3',
        1 => 'title',
        2 => 'field_brand_logo',
        3 => 'field_brand_baseline',
      ),
    ),
    'fields' => array(
      'group_css_effect_3' => 'ds_content',
      'title' => 'ds_content',
      'field_brand_logo' => 'ds_content',
      'field_brand_baseline' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|brand|sector_brand_block'] = $ds_layout;

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
      ),
    ),
    'fields' => array(
      'field_client_logo' => 'ds_content',
      'title' => 'ds_content',
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
  $ds_layout->layout = 'bootstrap_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_client_logo',
        3 => 'field_client_location',
        4 => 'field_client_type',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'field_client_logo' => 'right',
      'field_client_location' => 'right',
      'field_client_type' => 'right',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|client|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|certifications_labels|certifications_labels_block';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'certifications_labels';
  $ds_layout->view_mode = 'certifications_labels_block';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_cl_logo',
        2 => 'description',
      ),
      'right' => array(
        3 => 'brands_cl_brands',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_cl_logo' => 'left',
      'description' => 'left',
      'brands_cl_brands' => 'right',
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
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|certifications_labels|certifications_labels_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|certifications_labels|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'certifications_labels';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'description',
        1 => 'field_cl_logo',
      ),
    ),
    'fields' => array(
      'description' => 'central',
      'field_cl_logo' => 'central',
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
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|certifications_labels|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|certifications_labels|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'certifications_labels';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'news_entity_view_1',
        1 => 'articles_entity_view_1',
      ),
      'right' => array(
        2 => 'achievements_entity_view_1',
        3 => 'trainings_entity_view_2',
      ),
    ),
    'fields' => array(
      'news_entity_view_1' => 'left',
      'articles_entity_view_1' => 'left',
      'achievements_entity_view_1' => 'right',
      'trainings_entity_view_2' => 'right',
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
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['taxonomy_term|certifications_labels|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|sector_brands|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'sector_brands';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'news_articles_anchor',
        1 => 'group_sectorbrands_news_articles',
        2 => 'brands_products_anchor',
        3 => 'group_sectorbrands_brands_prods',
        4 => 'group_sectorbrands_brands',
        5 => 'achievements_sector_brand_achievs',
        6 => 'group_sectorbrands_products',
        7 => 'achievements_anchor',
        8 => 'group_sectorbrands_news',
        9 => 'news_sector_brand_news',
        10 => 'group_sectorbrands_achievments',
        11 => 'group_sectorbrands_articles',
        12 => 'brands_sector_brand_brands_form',
        13 => 'articles_sector_brand_articles',
        14 => 'brands_sector_brand_brands',
        15 => 'trainings_sector_brand_trainings',
      ),
    ),
    'fields' => array(
      'news_articles_anchor' => 'ds_content',
      'group_sectorbrands_news_articles' => 'ds_content',
      'brands_products_anchor' => 'ds_content',
      'group_sectorbrands_brands_prods' => 'ds_content',
      'group_sectorbrands_brands' => 'ds_content',
      'achievements_sector_brand_achievs' => 'ds_content',
      'group_sectorbrands_products' => 'ds_content',
      'achievements_anchor' => 'ds_content',
      'group_sectorbrands_news' => 'ds_content',
      'news_sector_brand_news' => 'ds_content',
      'group_sectorbrands_achievments' => 'ds_content',
      'group_sectorbrands_articles' => 'ds_content',
      'brands_sector_brand_brands_form' => 'ds_content',
      'articles_sector_brand_articles' => 'ds_content',
      'brands_sector_brand_brands' => 'ds_content',
      'trainings_sector_brand_trainings' => 'ds_content',
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
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['taxonomy_term|sector_brands|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|themes|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'themes';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'news_theme_news',
        1 => 'articles_theme_articles',
      ),
      'right' => array(
        2 => 'achievements_theme_realisations',
        3 => 'trainings_landing_page_trainings',
      ),
    ),
    'fields' => array(
      'news_theme_news' => 'left',
      'articles_theme_articles' => 'left',
      'achievements_theme_realisations' => 'right',
      'trainings_landing_page_trainings' => 'right',
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
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['taxonomy_term|themes|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|themes|landing_page_block';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'themes';
  $ds_layout->view_mode = 'landing_page_block';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_term_summary',
        2 => 'description',
      ),
      'right' => array(
        3 => 'brands_entity_view_1',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_term_summary' => 'left',
      'description' => 'left',
      'brands_entity_view_1' => 'right',
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
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|themes|landing_page_block'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function crealead_brands_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'certifications_labels_block';
  $ds_view_mode->label = 'Bloc page certifications labels';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['certifications_labels_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'logo';
  $ds_view_mode->label = 'Logo';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['logo'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sector_brand_block';
  $ds_view_mode->label = 'Bloc page marque sectorielle';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sector_brand_block'] = $ds_view_mode;

  return $export;
}
