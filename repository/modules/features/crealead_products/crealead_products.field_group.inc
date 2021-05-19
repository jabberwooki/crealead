<?php
/**
 * @file
 * crealead_products.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_products_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crealead_fields|node|product|form';
  $field_group->group_name = 'group_crealead_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Champs Crealead',
    'weight' => '17',
    'children' => array(
      0 => 'field_product_search',
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
  $field_groups['group_crealead_fields|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_teaser|node|product|teaser';
  $field_group->group_name = 'group_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group wrapper teaser',
    'weight' => '0',
    'children' => array(
      0 => 'field_introduction',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_teaser|node|product|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Champs Crealead');
  t('group wrapper teaser');

  return $field_groups;
}
