<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 20/11/18
 * Time: 14:38
 */

function crealead_needs_settings_form() {

  $form['crealead_needs'] = array(
    '#type' => 'fieldset',
    '#title' => t('Texte de description du système d\'échanges'),
  );

  $description_text = variable_get('exchanges_description_text', null);
  if ($description_text) {
    $description_text_default_value = $description_text['value'];
  }
  else {
    $description_text_default_value = 'Le descriptif du système d\'échanges est à rédiger.';
  }
  $form['crealead_needs']['exchanges_description_text'] = array(
    '#type' => 'text_format',
    '#title' => t('Texte'),
    '#description' => 'Texte d\'introduction affiché dans la rubrique Echanges.',
    '#default_value' => $description_text_default_value,
  );

  return system_settings_form($form);
}