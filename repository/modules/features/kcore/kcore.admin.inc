<?php
/**
 * Created by PhpStorm.
 * User: chris
 * Date: 02/11/15
 * Time: 13:54
 */

function crealead_settings_form() {
  // Key data display
  $options = array('1' => 'automatique', '2' => 'manuel');
  $form['key_data_display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Affichage des chiffres clés'),
  );

  $form['key_data_display']['coes_number'] = array(
    '#type' => 'select',
    '#title' => t('Nombre d\'entrepreneurs'),
    '#description' => 'Mode d\'affichage',
    '#options' => $options,
    '#default_value' => variable_get('coes_number', '1'),
  );
  $form['key_data_display']['coes_number_value'] = array(
    '#type' => 'textfield',
    '#description' => 'Valeur à afficher (si manuel)',
    '#size' => 3,
    '#default_value' => variable_get('coes_number_value', '100'),
  );

  $form['key_data_display']['refs_number'] = array(
    '#type' => 'select',
    '#title' => t('Nombre de référents'),
    '#description' => 'Mode d\'affichage',
    '#options' => $options,
    '#default_value' => variable_get('refs_number', '1'),
  );
  $form['key_data_display']['refs_number_value'] = array(
    '#type' => 'textfield',
    '#description' => 'Valeur à afficher (si manuel)',
    '#size' => 3,
    '#default_value' => variable_get('refs_number_value', '10'),
  );

  $form['key_data_display']['brands_number'] = array(
    '#type' => 'select',
    '#title' => t('Nombre de marques'),
    '#description' => 'Mode d\'affichage',
    '#options' => $options,
    '#default_value' => variable_get('brands_number', '1'),
  );
  $form['key_data_display']['brands_number_value'] = array(
    '#type' => 'textfield',
    '#description' => 'Valeur à afficher (si manuel)',
    '#size' => 3,
    '#default_value' => variable_get('brands_number_value', '5'),
  );

  return system_settings_form($form);
}