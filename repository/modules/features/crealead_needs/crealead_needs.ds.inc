<?php
/**
 * @file
 * crealead_needs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_needs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|need|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'need';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_budget' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Budget',
        ),
      ),
    ),
    'field_need_action' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'need-add',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_solution_found' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Solution trouvée pour répondre à ce besoin',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|need|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_needs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|need|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'need';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_other_enquirers',
        1 => 'field_solution_details',
        3 => 'field_solution_found',
      ),
      'bottom' => array(
        2 => 'field_need_action',
      ),
      'left' => array(
        4 => 'body',
      ),
      'right' => array(
        5 => 'group_need_contact_infos',
        6 => 'field_budget',
        7 => 'field_need_location',
        8 => 'field_crealead_name',
        9 => 'field_expiration_type',
        10 => 'field_display_end_date',
        11 => 'field__need_contact_name',
        12 => 'field_need_client',
        13 => 'field_need_contact_details',
      ),
    ),
    'fields' => array(
      'field_other_enquirers' => 'top',
      'field_solution_details' => 'top',
      'field_need_action' => 'bottom',
      'field_solution_found' => 'top',
      'body' => 'left',
      'group_need_contact_infos' => 'right',
      'field_budget' => 'right',
      'field_need_location' => 'right',
      'field_crealead_name' => 'right',
      'field_expiration_type' => 'right',
      'field_display_end_date' => 'right',
      'field__need_contact_name' => 'right',
      'field_need_client' => 'right',
      'field_need_contact_details' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
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
  $export['node|need|full'] = $ds_layout;

  return $export;
}
