<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 15/11/19
 * Time: 11:21
 */

function crealead_business_groups_settings_form() {
  // Rubrique Collectifs
  $form['crealead_groups'] = array(
    '#type' => 'fieldset',
    '#title' => t('Texte de description de la page Collectifs'),
  );

  $business_groups_description_text_default_value = variable_get('business_groups_description_text', null);
  if ($business_groups_description_text_default_value) {
    $business_groups_description_text_default_value = $business_groups_description_text_default_value['value'];
  }
  else {
    $business_groups_description_text_default_value = 'Le descriptif de la page Collectifs est à rédiger.';
  }

  $form['crealead_groups']['business_groups_description_text'] = array(
    '#type' => 'text_format',
    '#title' => t('Texte'),
    '#description' => 'Texte d\'introduction affiché dans la rubrique Collectifs.',
    '#default_value' => $business_groups_description_text_default_value,
  );

  return system_settings_form($form);
}
