<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 11/11/19
 * Time: 10:10
 */

function crealead_sector_brands_settings_form() {
  // Rubrique Marques Sectorielles
  $form['crealead_brands'] = array(
    '#type' => 'fieldset',
    '#title' => t('Texte de description de la page Pôles d\'activités'),
  );

  $sector_brands_description_text_default_value = variable_get('sector_brands_description_text', null);
  if ($sector_brands_description_text_default_value) {
    $sector_brands_description_text_default_value = $sector_brands_description_text_default_value['value'];
  }
  else {
    $sector_brands_description_text_default_value = 'Le descriptif de la page Pôles d\'activités est à rédiger.';
  }

  $form['crealead_brands']['sector_brands_description_text'] = array(
    '#type' => 'text_format',
    '#title' => t('Texte'),
    '#description' => 'Texte d\'introduction affiché dans la rubrique Pôles d\'activités.',
    '#default_value' => $sector_brands_description_text_default_value,
  );

  return system_settings_form($form);
}
