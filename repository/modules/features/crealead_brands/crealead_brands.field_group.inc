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
    'weight' => '29',
    'children' => array(
      0 => 'field_brand_phone',
      1 => 'field_brand_email',
      2 => 'field_brand_website',
      3 => 'field_social_links',
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

  return $export;
}
