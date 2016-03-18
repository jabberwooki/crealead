<?php
/**
 * @file
 * kcore.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kcore_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_firstname'.
  $field_instances['user-user-field_user_firstname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'brand_coe' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'referent_fullname' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_firstname',
    'label' => 'Prénom',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'button_text' => 'Rechercher',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_user_lastname'.
  $field_instances['user-user-field_user_lastname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'brand_coe' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'referent_fullname' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_lastname',
    'label' => 'Nom',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'button_text' => 'Rechercher',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_user_referent'.
  $field_instances['user-user-field_user_referent'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'brand_coe' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'referent_fullname' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_referent',
    'label' => 'Référent',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Nom');
  t('Prénom');
  t('Référent');

  return $field_instances;
}
