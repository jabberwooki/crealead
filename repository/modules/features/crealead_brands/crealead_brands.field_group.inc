<?php
/**
 * @file
 * crealead_brands.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_brands_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_achiev_tab|node|brand|full';
  $field_group->group_name = 'group_brand_achiev_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Réalisations',
    'weight' => '27',
    'children' => array(
      0 => 'field_brand_achievements',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Réalisations',
      'instance_settings' => array(
        'classes' => 'group-brand-achiev-tab field-group-bootstrap_fieldgroup_nav_item',
      ),
    ),
  );
  $field_groups['group_brand_achiev_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_articles_tab|node|brand|full';
  $field_group->group_name = 'group_brand_articles_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Articles',
    'weight' => '29',
    'children' => array(),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-articles-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brand_articles_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_articles|node|brand|full';
  $field_group->group_name = 'group_brand_articles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_blog_tab';
  $field_group->data = array(
    'label' => 'Articles',
    'weight' => '42',
    'children' => array(
      0 => 'articles_brand_articles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Articles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-brand-articles field-group-div col-md-4',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_brand_articles|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_blog_tab|node|brand|full';
  $field_group->group_name = 'group_brand_blog_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Blog',
    'weight' => '28',
    'children' => array(
      0 => 'group_brand_articles',
      1 => 'group_brand_news',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-blog-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brand_blog_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_clients_tab|node|brand|full';
  $field_group->group_name = 'group_brand_clients_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Références client',
    'weight' => '26',
    'children' => array(
      0 => 'field_brand_references',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Références client',
      'instance_settings' => array(
        'classes' => 'group-brand-clients-tab field-group-bootstrap_fieldgroup_nav_item',
      ),
    ),
  );
  $field_groups['group_brand_clients_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_contact_tab|node|brand|full';
  $field_group->group_name = 'group_brand_contact_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '30',
    'children' => array(
      0 => 'field_contact_form',
      1 => 'brand_contacts',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'group-brand-contact-tab field-group-bootstrap_fieldgroup_nav_item',
      ),
    ),
  );
  $field_groups['group_brand_contact_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_infos_1|node|brand|full';
  $field_group->group_name = 'group_brand_infos_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_infos_tab';
  $field_group->data = array(
    'label' => 'Infos 1',
    'weight' => '45',
    'children' => array(
      0 => 'body',
      1 => 'field_brand_solutions',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infos 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-brand-infos-1 field-group-div col-md-9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_brand_infos_1|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_infos_2|node|brand|full';
  $field_group->group_name = 'group_brand_infos_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_infos_tab';
  $field_group->data = array(
    'label' => 'Infos 2',
    'weight' => '46',
    'children' => array(
      0 => 'field_brand_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infos 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-brand-infos-2 field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_brand_infos_2|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_infos_tab|node|brand|full';
  $field_group->group_name = 'group_brand_infos_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Informations générales',
    'weight' => '24',
    'children' => array(
      0 => 'group_brand_infos_1',
      1 => 'group_brand_infos_2',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-infos-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brand_infos_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_news|node|brand|full';
  $field_group->group_name = 'group_brand_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_blog_tab';
  $field_group->data = array(
    'label' => 'Actualités',
    'weight' => '41',
    'children' => array(
      0 => 'news_brand_news',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Actualités',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-brand-news field-group-div col-md-8',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_brand_news|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_tabs|node|brand|full';
  $field_group->group_name = 'group_brand_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Onglets',
    'weight' => '4',
    'children' => array(
      0 => 'group_brand_achiev_tab',
      1 => 'group_brand_blog_tab',
      2 => 'group_brand_clients_tab',
      3 => 'group_brand_contact_tab',
      4 => 'group_brand_infos_tab',
      5 => 'group_brans_coes_tab',
      6 => 'group_brand_trainings_tab',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-tabs field-group-bootstrap_fieldgroup_nav',
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => 0,
        'bootstrap_orientation' => 0,
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brand_tabs|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_trainings_tab|node|brand|full';
  $field_group->group_name = 'group_brand_trainings_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Formations et produits',
    'weight' => '29',
    'children' => array(
      0 => 'trainings_entity_view_1',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-trainings-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brand_trainings_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brans_coes_tab|node|brand|full';
  $field_group->group_name = 'group_brans_coes_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Entrepreneurs',
    'weight' => '25',
    'children' => array(
      0 => 'field_brand_coes',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brans-coes-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brans_coes_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col3_3|node|brand|full';
  $field_group->group_name = 'group_col3_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'group col3-3',
    'weight' => '3',
    'children' => array(
      0 => 'field_social_links',
      1 => 'group_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group col3-3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col3-3 field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col3_3|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_1_3|node|brand|full';
  $field_group->group_name = 'group_col_1_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'group col1-3',
    'weight' => '1',
    'children' => array(
      0 => 'field_brand_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group col1-3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-1-3 field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_1_3|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_2_6|node|brand|full';
  $field_group->group_name = 'group_col_2_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'group col2-6',
    'weight' => '2',
    'children' => array(
      0 => 'field_business_sector',
      1 => 'group_title_hook',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group col2-6',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-2-6 field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_2_6|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|brand|full';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col3_3';
  $field_group->data = array(
    'label' => 'group coordonnées',
    'weight' => '35',
    'children' => array(
      0 => 'field_brand_email',
      1 => 'field_brand_phone',
      2 => 'field_brand_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group coordonnées',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact field-group-div top-brand-col-2-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crealead_fields|node|brand|form';
  $field_group->group_name = 'group_crealead_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Champs Crealead',
    'weight' => '23',
    'children' => array(
      0 => 'field_brand_search',
      1 => 'field_contact_form',
      2 => 'field_brand_validated',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-crealead-fields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_crealead_fields|node|brand|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_css_effect_3|node|achievement|sector_brand_block';
  $field_group->group_name = 'group_css_effect_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'achievement';
  $field_group->mode = 'sector_brand_block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group css effect 3',
    'weight' => '0',
    'children' => array(
      0 => 'field_achievement_photos',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group css effect 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-css-effect-3 field-group-div view-css-effect third-effect',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_css_effect_3|node|achievement|sector_brand_block'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_css_effect_3|node|brand|block';
  $field_group->group_name = 'group_css_effect_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group css effect 3',
    'weight' => '0',
    'children' => array(
      0 => 'field_brand_logo',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group css effect 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-css-effect-3 field-group-div view-css-effect third-effect',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_css_effect_3|node|brand|block'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_css_effect_3|node|brand|sector_brand_block';
  $field_group->group_name = 'group_css_effect_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'sector_brand_block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group css effect 3',
    'weight' => '0',
    'children' => array(
      0 => 'field_brand_logo',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group css effect 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-css-effect-3 field-group-div view-css-effect third-effect',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_css_effect_3|node|brand|sector_brand_block'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|brand|full';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group row 1',
    'weight' => '0',
    'children' => array(
      0 => 'group_col3_3',
      1 => 'group_col_1_3',
      2 => 'group_col_2_6',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-1 field-group-div row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_1|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sectorbrands_achievments|taxonomy_term|sector_brands|full';
  $field_group->group_name = 'group_sectorbrands_achievments';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector_brands';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Réalisations',
    'weight' => '3',
    'children' => array(
      0 => 'achievements_sector_brand_achievs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Réalisations',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sectorbrands-achievments field-group-div clearfix',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sectorbrands_achievments|taxonomy_term|sector_brands|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sectorbrands_articles|taxonomy_term|sector_brands|full';
  $field_group->group_name = 'group_sectorbrands_articles';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector_brands';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sectorbrands_news_articles';
  $field_group->data = array(
    'label' => 'Articles de fond',
    'weight' => '6',
    'children' => array(
      0 => 'articles_sector_brand_articles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Articles de fond',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sectorbrands-articles field-group-div col-md-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sectorbrands_articles|taxonomy_term|sector_brands|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sectorbrands_brands_prods|taxonomy_term|sector_brands|full';
  $field_group->group_name = 'group_sectorbrands_brands_prods';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector_brands';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Marques et produits',
    'weight' => '1',
    'children' => array(
      0 => 'group_sectorbrands_brands',
      1 => 'group_sectorbrands_products',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Marques et produits',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sectorbrands-brands-prods field-group-div clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sectorbrands_brands_prods|taxonomy_term|sector_brands|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sectorbrands_brands|taxonomy_term|sector_brands|full';
  $field_group->group_name = 'group_sectorbrands_brands';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector_brands';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sectorbrands_brands_prods';
  $field_group->data = array(
    'label' => 'Marques',
    'weight' => '3',
    'children' => array(
      0 => 'brands_sector_brand_brands',
      1 => 'brands_sector_brand_brands_form',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Marques',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sectorbrands-brands field-group-div col-md-9',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sectorbrands_brands|taxonomy_term|sector_brands|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sectorbrands_news_articles|taxonomy_term|sector_brands|full';
  $field_group->group_name = 'group_sectorbrands_news_articles';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector_brands';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Actualités et articles',
    'weight' => '5',
    'children' => array(
      0 => 'group_sectorbrands_news',
      1 => 'group_sectorbrands_articles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Actualités et articles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sectorbrands-news-articles field-group-div clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sectorbrands_news_articles|taxonomy_term|sector_brands|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sectorbrands_news|taxonomy_term|sector_brands|full';
  $field_group->group_name = 'group_sectorbrands_news';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector_brands';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sectorbrands_news_articles';
  $field_group->data = array(
    'label' => 'Actualités',
    'weight' => '4',
    'children' => array(
      0 => 'news_sector_brand_news',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Actualités',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sectorbrands-news field-group-div col-md-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sectorbrands_news|taxonomy_term|sector_brands|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sectorbrands_products|taxonomy_term|sector_brands|full';
  $field_group->group_name = 'group_sectorbrands_products';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector_brands';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sectorbrands_brands_prods';
  $field_group->data = array(
    'label' => 'Produits et formations',
    'weight' => '4',
    'children' => array(
      0 => 'trainings_sector_brand_trainings',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Produits et formations',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sectorbrands-products field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sectorbrands_products|taxonomy_term|sector_brands|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_articles_tab|taxonomy_term|themes|full';
  $field_group->group_name = 'group_theme_articles_tab';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_theme_tabs';
  $field_group->data = array(
    'label' => 'Articles',
    'weight' => '7',
    'children' => array(
      0 => 'articles_theme_articles',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-theme-articles-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_articles_tab|taxonomy_term|themes|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_blog_tab|taxonomy_term|themes|full';
  $field_group->group_name = 'group_theme_blog_tab';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_theme_tabs';
  $field_group->data = array(
    'label' => 'Blog',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'bootstrap_fieldgroup_accordion_item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-theme-blog-tab field-group-bootstrap_fieldgroup_accordion_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_blog_tab|taxonomy_term|themes|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_brands_tab|taxonomy_term|themes|default';
  $field_group->group_name = 'group_theme_brands_tab';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_theme_tabs';
  $field_group->data = array(
    'label' => 'Marques associées',
    'weight' => '3',
    'children' => array(
      0 => 'brands_entity_view_1',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-theme-brands-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_brands_tab|taxonomy_term|themes|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_brands_tab|taxonomy_term|themes|full';
  $field_group->group_name = 'group_theme_brands_tab';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_theme_tabs';
  $field_group->data = array(
    'label' => 'Marques associées',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-theme-brands-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_brands_tab|taxonomy_term|themes|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_news_tab|taxonomy_term|themes|default';
  $field_group->group_name = 'group_theme_news_tab';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_theme_tabs';
  $field_group->data = array(
    'label' => 'Actualités',
    'weight' => '4',
    'children' => array(
      0 => 'news_theme_news',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-theme-news-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_news_tab|taxonomy_term|themes|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_news_tab|taxonomy_term|themes|full';
  $field_group->group_name = 'group_theme_news_tab';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_theme_tabs';
  $field_group->data = array(
    'label' => 'Actualités',
    'weight' => '6',
    'children' => array(
      0 => 'news_theme_news',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-theme-news-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_news_tab|taxonomy_term|themes|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_tabs|taxonomy_term|themes|default';
  $field_group->group_name = 'group_theme_tabs';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Onglets',
    'weight' => '2',
    'children' => array(
      0 => 'group_theme_brands_tab',
      1 => 'group_theme_blog_tab',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-theme-tabs field-group-bootstrap_fieldgroup_nav',
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => 0,
        'bootstrap_orientation' => 0,
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_tabs|taxonomy_term|themes|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_tabs|taxonomy_term|themes|full';
  $field_group->group_name = 'group_theme_tabs';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'themes';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Onglets',
    'weight' => '8',
    'children' => array(
      0 => 'group_theme_blog_tab',
      1 => 'group_theme_brands_tab',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-theme-tabs field-group-bootstrap_fieldgroup_nav',
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => 0,
        'bootstrap_orientation' => 0,
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_theme_tabs|taxonomy_term|themes|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_hook|node|brand|full';
  $field_group->group_name = 'group_title_hook';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_2_6';
  $field_group->data = array(
    'label' => 'group titre et accroche',
    'weight' => '32',
    'children' => array(
      0 => 'field_brand_baseline',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group titre et accroche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-hook field-group-div top-brand-col-2-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_hook|node|brand|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');
  t('Actualités et articles');
  t('Articles');
  t('Articles de fond');
  t('Blog');
  t('Champs Crealead');
  t('Contact');
  t('Entrepreneurs');
  t('Formations et produits');
  t('Informations générales');
  t('Infos 1');
  t('Infos 2');
  t('Marques');
  t('Marques associées');
  t('Marques et produits');
  t('Onglets');
  t('Produits et formations');
  t('Réalisations');
  t('Références client');
  t('group col1-3');
  t('group col2-6');
  t('group col3-3');
  t('group coordonnées');
  t('group css effect 3');
  t('group row 1');
  t('group titre et accroche');

  return $field_groups;
}
