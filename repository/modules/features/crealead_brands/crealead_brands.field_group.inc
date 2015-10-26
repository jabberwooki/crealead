<?php
/**
 * @file
 * crealead_brands.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_brands_field_group_info() {
  $export = array();

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
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-achiev-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_brand_achiev_tab|node|brand|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_articles_tab|node|brand|full';
  $field_group->group_name = 'group_brand_articles_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_brand_tabs';
  $field_group->data = array(
    'label' => 'Articles',
    'weight' => '29',
    'children' => array(
      0 => 'articles_brand_articles',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-articles-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_brand_articles_tab|node|brand|full'] = $field_group;

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
      0 => 'news_brand_news',
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
  $export['group_brand_blog_tab|node|brand|full'] = $field_group;

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
  $export['group_brand_clients_tab|node|brand|full'] = $field_group;

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
      0 => 'field_brand_phone',
      1 => 'field_brand_email',
      2 => 'field_brand_website',
      3 => 'field_social_links',
      4 => 'field_contact_form',
      5 => 'brand_contacts',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-brand-contact-tab field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_brand_contact_tab|node|brand|full'] = $field_group;

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
      0 => 'body',
      1 => 'field_business_sector',
      2 => 'field_business_groups',
      3 => 'field_brand_solutions',
      4 => 'field_brand_tags',
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
  $export['group_brand_infos_tab|node|brand|full'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'group_brand_infos_tab',
      1 => 'group_brans_coes_tab',
      2 => 'group_brand_clients_tab',
      3 => 'group_brand_blog_tab',
      4 => 'group_brand_contact_tab',
      5 => 'group_brand_achiev_tab',
      6 => 'group_brand_articles_tab',
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
  $export['group_brand_tabs|node|brand|full'] = $field_group;

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
  $export['group_brans_coes_tab|node|brand|full'] = $field_group;

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
    'weight' => '20',
    'children' => array(
      0 => 'field_brand_search',
      1 => 'field_contact_form',
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
  $export['group_crealead_fields|node|brand|form'] = $field_group;

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
  $export['group_theme_articles_tab|taxonomy_term|themes|full'] = $field_group;

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
  $export['group_theme_brands_tab|taxonomy_term|themes|default'] = $field_group;

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
  $export['group_theme_brands_tab|taxonomy_term|themes|full'] = $field_group;

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
  $export['group_theme_news_tab|taxonomy_term|themes|default'] = $field_group;

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
  $export['group_theme_news_tab|taxonomy_term|themes|full'] = $field_group;

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
      1 => 'group_theme_news_tab',
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
  $export['group_theme_tabs|taxonomy_term|themes|default'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'group_theme_brands_tab',
      1 => 'group_theme_news_tab',
      2 => 'group_theme_articles_tab',
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
  $export['group_theme_tabs|taxonomy_term|themes|full'] = $field_group;

  return $export;
}
