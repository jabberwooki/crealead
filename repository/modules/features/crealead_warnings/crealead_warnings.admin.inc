<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 10/07/17
 * Time: 15:28
 */

/**
 * Implements hook_field_settings_form().
 */
function crealead_warnings_settings_form() {
  $types = node_type_get_types();
  unset($types['warning']);

  $options = array();
  foreach ($types as $type=>$obj) {
    $options[$type] = $obj->name;
  }
  asort($options);

  $form['crealead_warnings']['warning_content_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Types de contenu'),
    '#options' => $options,
    '#theme_options' => array(
      'description at top' => '<p>Sélectionnez le ou les types de contenu pour lesquels les utilisateurs pourront créer des alertes.</p>',
    ),
    '#default_value' => variable_get('warning_content_types', array('need'=>'need')),
  );

  return system_settings_form($form);
}
