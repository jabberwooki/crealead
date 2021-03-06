<?php
/**
 * @file
 * crealead_offers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_offers_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_contact_infos|node|offer|form';
  $field_group->group_name = 'group_offer_contact_infos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personne à contacter',
    'weight' => '10',
    'children' => array(
      0 => 'field__need_contact_name',
      1 => 'field_need_contact_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-offer-contact-infos field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_offer_contact_infos|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_contact_infos|node|offer|full';
  $field_group->group_name = 'group_offer_contact_infos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personne à contacter',
    'weight' => '1',
    'children' => array(
      0 => 'field__need_contact_name',
      1 => 'field_need_contact_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-offer-contact-infos field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_offer_contact_infos|node|offer|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Personne à contacter');

  return $field_groups;
}
