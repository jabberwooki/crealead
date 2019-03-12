<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 20/11/18
 * Time: 14:38
 */

function crealead_needs_settings_form() {

  // Rubrique Echanges
  $form['crealead_needs'] = array(
    '#type' => 'fieldset',
    '#title' => t('Texte de description du système d\'échanges'),
  );

  $exchanges_description_text = variable_get('exchanges_description_text', null);
  if ($exchanges_description_text) {
    $exchanges_description_text_default_value = $exchanges_description_text['value'];
  }
  else {
    $exchanges_description_text_default_value = 'Le descriptif du système d\'échanges est à rédiger.';
  }
  $form['crealead_needs']['exchanges_description_text'] = array(
    '#type' => 'text_format',
    '#title' => t('Texte'),
    '#description' => 'Texte d\'introduction affiché dans la rubrique Echanges.',
    '#default_value' => $exchanges_description_text_default_value,
  );

  // Rubrique COOPINs
  $form['crealead_coopins'] = array(
    '#type' => 'fieldset',
    '#title' => t('Texte de description de la rubrique COOPINs'),
  );

  $coopins_description_text = variable_get('coopins_description_text', null);
  if ($coopins_description_text) {
    $coopins_description_text_default_value = $coopins_description_text['value'];
  }
  else {
    $coopins_description_text_default_value = 'Le descriptif de la rubrique COOPINs est à rédiger.';
  }
  $form['crealead_coopins']['coopins_description_text'] = array(
    '#type' => 'text_format',
    '#title' => t('Texte'),
    '#description' => 'Texte d\'introduction affiché dans la rubrique COOPINs.',
    '#default_value' => $coopins_description_text_default_value,
  );

  return system_settings_form($form);
}
