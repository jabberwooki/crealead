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
  $ds_fieldsetting->id = 'entityform|pole_coes_contact|full';
  $ds_fieldsetting->entity_type = 'entityform';
  $ds_fieldsetting->bundle = 'pole_coes_contact';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'submission_date' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:8:"sanitize";i:1;s:7:"context";s:31:"argument_entity_id:entityform_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"token";s:7:"subtype";s:18:"entityform:created";}',
        'load_terms' => 0,
        'ft' => array(
          'lb' => 'Date d\'envoi',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['entityform|pole_coes_contact|full'] = $ds_fieldsetting;

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
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '0',
        'ft' => array(),
      ),
    ),
    'field_achievement_videos' => array(
      'formatter_settings' => array(
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
      'weight' => '5',
      'label' => 'inline',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
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
        'class' => '',
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
    'allowed_articles_handling' => array(
      'weight' => '56',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'allowed_products_handling' => array(
      'weight' => '70',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'allowed_trainings_handling' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'brand_contacts' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'empty_field' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'empty_field_2' => array(
      'weight' => '32',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'empty_field_3' => array(
      'weight' => '72',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '33',
      'label' => 'hidden',
      'format' => 'default',
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
        'wrapper' => 'h4',
        'class' => '',
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
  $ds_fieldsetting->id = 'node|product|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|product|teaser'] = $ds_fieldsetting;

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
    'pole_contacts' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pole_emails' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|sector_brands|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|sector_brands|pole_header';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'sector_brands';
  $ds_fieldsetting->view_mode = 'pole_header';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|sector_brands|pole_header'] = $ds_fieldsetting;

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
  $ds_field->field = 'allowed_articles_handling';
  $ds_field->label = 'Gestion des articles partagés';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|full';
  $ds_field->properties = array(
    'block' => 'shared_content|allowed_articles_handling',
    'block_render' => '2',
  );
  $export['allowed_articles_handling'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'allowed_products_handling';
  $ds_field->label = 'Gestion des produits partagés';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|full';
  $ds_field->properties = array(
    'block' => 'shared_content|allowed_products_handling',
    'block_render' => '1',
  );
  $export['allowed_products_handling'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'allowed_trainings_handling';
  $ds_field->label = 'Gestion des formations partagées';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|full';
  $ds_field->properties = array(
    'block' => 'shared_content|allowed_trainings_handling',
    'block_render' => '2',
  );
  $export['allowed_trainings_handling'] = $ds_field;

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
  $ds_field->field = 'empty_field';
  $ds_field->label = 'Champ vide';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => '&nbsp;',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['empty_field'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'empty_field_2';
  $ds_field->label = 'Champ vide 2';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => '&nbsp;',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['empty_field_2'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'empty_field_3';
  $ds_field->label = 'Champ vide 3';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'brand|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => '&nbsp;',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['empty_field_3'] = $ds_field;

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
  $ds_field->field = 'pole_contacts';
  $ds_field->label = 'Emails au pôle';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = 'sector_brands|*';
  $ds_field->properties = array(
    'block' => 'views|pole_coes_emails-pole_contacts',
    'block_render' => '3',
  );
  $export['pole_contacts'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pole_emails';
  $ds_field->label = 'Emails de Pôles';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = 'sector_brands|full';
  $ds_field->properties = array(
    'block' => 'views|pole_coes_emails-pole_emails',
    'block_render' => '3',
  );
  $export['pole_emails'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'submission_date';
  $ds_field->label = 'Date d\'envoi';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'entityform' => 'entityform',
  );
  $ds_field->ui_limit = 'pole_coes_contact|full';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Ex. : h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['submission_date'] = $ds_field;

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
  $ds_layout->id = 'entityform|pole_coes_contact|full';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'pole_coes_contact';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_3_9';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_pole_coes_sender',
        1 => 'field_pole_coes_from',
        2 => 'submission_date',
        3 => 'field_pole_coes_emails',
        4 => 'field_others_emails',
      ),
      'right' => array(
        5 => 'field_pole_coes_subject',
        6 => 'field_pole_coes_message',
      ),
    ),
    'fields' => array(
      'field_pole_coes_sender' => 'left',
      'field_pole_coes_from' => 'left',
      'submission_date' => 'left',
      'field_pole_coes_emails' => 'left',
      'field_others_emails' => 'left',
      'field_pole_coes_subject' => 'right',
      'field_pole_coes_message' => 'right',
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
  $export['entityform|pole_coes_contact|full'] = $ds_layout;

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
        1 => 'field_achievement_videos',
      ),
      'right' => array(
        2 => 'title',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_achievement_photos' => 'left',
      'field_achievement_videos' => 'left',
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
    'layout_disable_css' => FALSE,
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
        2 => 'field_achievement_videos',
        3 => 'body',
        4 => 'field_achiev_authors',
        5 => 'achievement_brand',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_achievement_photos' => 'central',
      'field_achievement_videos' => 'central',
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
      'central' => array(
        0 => 'field_brand_coes',
        1 => 'group_brand_tabs',
        3 => 'articles_allowed_articles',
        4 => 'group_brand_products',
        5 => 'field_contact_form',
        6 => 'brand_contacts',
        7 => 'empty_field',
        9 => 'field_brand_achievements',
        10 => 'group_solutions_rows',
        11 => 'trainings_entity_view_1',
        12 => 'group_allowed_trainings_wrapper',
        13 => 'allowed_trainings_handling',
        14 => 'group_solution_col2',
        15 => 'group_solution_col1',
        16 => 'group_brand_infos_tab',
        17 => 'group_brand_contact_tab',
        18 => 'group_brans_coes_tab',
        19 => 'group_brand_trainings_tab',
        20 => 'group_brand_formations',
        21 => 'group_brand_clients_tab',
        22 => 'group_brand_achiev_tab',
        23 => 'field_brand_references',
        24 => 'group_brand_news_tab',
        25 => 'trainings_allowed_trainings',
        26 => 'group_brand_articles_tab',
        27 => 'empty_field_2',
        39 => 'news_brand_news',
        40 => 'brand_agenda_eva_brandagenda',
        41 => 'group_brand_infos_1',
        42 => 'group_brand_infos_2',
        43 => 'field_brand_tags',
        44 => 'body',
        45 => 'field_brand_solutions',
        46 => 'articles_brand_articles',
        47 => 'group_allowed_articles_wrapper',
        48 => 'allowed_articles_handling',
        52 => 'products_entity_view_1',
        53 => 'group_allowed_products_wrapper',
        54 => 'allowed_products_handling',
        55 => 'products_allowed_products',
        56 => 'empty_field_3',
      ),
      'content_header_brand' => array(
        2 => 'group_row_1',
        8 => 'field_brand_logo',
        28 => 'group_title_hook',
        29 => 'title',
        30 => 'field_brand_baseline',
        31 => 'field_business_sector',
        32 => 'field_certifications_labels',
        33 => 'group_contact',
        34 => 'field_brand_phone',
        35 => 'field_social_links',
        36 => 'field_brand_email',
        37 => 'field_brand_website',
        38 => 'field_lien_formulaire_contact',
        49 => 'group_col_1_3',
        50 => 'group_col_2_6',
        51 => 'group_col3_3',
      ),
    ),
    'fields' => array(
      'field_brand_coes' => 'central',
      'group_brand_tabs' => 'central',
      'group_row_1' => 'content_header_brand',
      'articles_allowed_articles' => 'central',
      'group_brand_products' => 'central',
      'field_contact_form' => 'central',
      'brand_contacts' => 'central',
      'empty_field' => 'central',
      'field_brand_logo' => 'content_header_brand',
      'field_brand_achievements' => 'central',
      'group_solutions_rows' => 'central',
      'trainings_entity_view_1' => 'central',
      'group_allowed_trainings_wrapper' => 'central',
      'allowed_trainings_handling' => 'central',
      'group_solution_col2' => 'central',
      'group_solution_col1' => 'central',
      'group_brand_infos_tab' => 'central',
      'group_brand_contact_tab' => 'central',
      'group_brans_coes_tab' => 'central',
      'group_brand_trainings_tab' => 'central',
      'group_brand_formations' => 'central',
      'group_brand_clients_tab' => 'central',
      'group_brand_achiev_tab' => 'central',
      'field_brand_references' => 'central',
      'group_brand_news_tab' => 'central',
      'trainings_allowed_trainings' => 'central',
      'group_brand_articles_tab' => 'central',
      'empty_field_2' => 'central',
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
      'field_lien_formulaire_contact' => 'content_header_brand',
      'news_brand_news' => 'central',
      'brand_agenda_eva_brandagenda' => 'central',
      'group_brand_infos_1' => 'central',
      'group_brand_infos_2' => 'central',
      'field_brand_tags' => 'central',
      'body' => 'central',
      'field_brand_solutions' => 'central',
      'articles_brand_articles' => 'central',
      'group_allowed_articles_wrapper' => 'central',
      'allowed_articles_handling' => 'central',
      'group_col_1_3' => 'content_header_brand',
      'group_col_2_6' => 'content_header_brand',
      'group_col3_3' => 'content_header_brand',
      'products_entity_view_1' => 'central',
      'group_allowed_products_wrapper' => 'central',
      'allowed_products_handling' => 'central',
      'products_allowed_products' => 'central',
      'empty_field_3' => 'central',
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
        0 => 'group_pole_tabs',
        1 => 'achievements_sector_brand_achievs',
        2 => 'news_sector_brand_news',
        3 => 'field_pole_contact_form',
        4 => 'brands_sector_brand_brands_form',
        5 => 'trainings_sector_brand_trainings_form',
        6 => 'pole_contacts',
        7 => 'brands_sector_brand_brands',
        8 => 'trainings_sector_brand_trainings',
        9 => 'articles_sector_brand_articles',
        10 => 'news_sector_brands_front_news',
        11 => 'field_pole_email_form',
        12 => 'pole_emails',
        13 => 'achievements_sector_brands_front_achievs',
        14 => 'group_pole_front_tab',
        15 => 'group_pole_solutions_tab',
        16 => 'group_pole_achiev_tab',
        17 => 'group_pole_coes_tab',
        18 => 'group_pole_email_tab',
        19 => 'group_pole_contact_tab',
        20 => 'group_pole_news_tab',
        21 => 'group_pole_articles_tab',
        22 => 'products_sector_brands_products_form',
        23 => 'products_sector_brands_products',
        24 => 'group_pole_solutions_products',
        25 => 'group_pole_solutions_trainings',
      ),
    ),
    'fields' => array(
      'group_pole_tabs' => 'ds_content',
      'achievements_sector_brand_achievs' => 'ds_content',
      'news_sector_brand_news' => 'ds_content',
      'field_pole_contact_form' => 'ds_content',
      'brands_sector_brand_brands_form' => 'ds_content',
      'trainings_sector_brand_trainings_form' => 'ds_content',
      'pole_contacts' => 'ds_content',
      'brands_sector_brand_brands' => 'ds_content',
      'trainings_sector_brand_trainings' => 'ds_content',
      'articles_sector_brand_articles' => 'ds_content',
      'news_sector_brands_front_news' => 'ds_content',
      'field_pole_email_form' => 'ds_content',
      'pole_emails' => 'ds_content',
      'achievements_sector_brands_front_achievs' => 'ds_content',
      'group_pole_front_tab' => 'ds_content',
      'group_pole_solutions_tab' => 'ds_content',
      'group_pole_achiev_tab' => 'ds_content',
      'group_pole_coes_tab' => 'ds_content',
      'group_pole_email_tab' => 'ds_content',
      'group_pole_contact_tab' => 'ds_content',
      'group_pole_news_tab' => 'ds_content',
      'group_pole_articles_tab' => 'ds_content',
      'products_sector_brands_products_form' => 'ds_content',
      'products_sector_brands_products' => 'ds_content',
      'group_pole_solutions_products' => 'ds_content',
      'group_pole_solutions_trainings' => 'ds_content',
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
  $ds_layout->id = 'taxonomy_term|sector_brands|pole_header';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'sector_brands';
  $ds_layout->view_mode = 'pole_header';
  $ds_layout->layout = 'bootstrap_2_8_2';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_brand_logo',
      ),
      'central' => array(
        1 => 'title',
        2 => 'description',
      ),
      'right' => array(
        3 => 'field_lien_formulaire_contact',
        4 => 'field_social_links',
      ),
    ),
    'fields' => array(
      'field_brand_logo' => 'left',
      'title' => 'central',
      'description' => 'central',
      'field_lien_formulaire_contact' => 'right',
      'field_social_links' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'central' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|sector_brands|pole_header'] = $ds_layout;

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
        0 => 'achievements_theme_realisations',
        1 => 'articles_theme_articles',
        2 => 'trainings_landing_page_trainings',
        3 => 'news_theme_news',
        4 => 'group_theme_brands_tab',
        5 => 'group_theme_blog_tab',
        6 => 'group_theme_news_tab',
        7 => 'group_theme_articles_tab',
        8 => 'group_theme_tabs',
      ),
    ),
    'fields' => array(
      'achievements_theme_realisations' => 'central',
      'articles_theme_articles' => 'central',
      'trainings_landing_page_trainings' => 'central',
      'news_theme_news' => 'central',
      'group_theme_brands_tab' => 'central',
      'group_theme_blog_tab' => 'central',
      'group_theme_news_tab' => 'central',
      'group_theme_articles_tab' => 'central',
      'group_theme_tabs' => 'central',
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
  $ds_view_mode->view_mode = 'pole_header';
  $ds_view_mode->label = 'En-tête page de pôle';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['pole_header'] = $ds_view_mode;

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
