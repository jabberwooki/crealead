<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 31/01/18
 * Time: 11:50
 */

function crealead_info_meetings_settings_form() {
//    $types = node_type_get_types();
//  unset($types['warning']);
//
//  $options = array();
//  foreach ($types as $type=>$obj) {
//    $options[$type] = $obj->name;
//  }
//  asort($options);
//
//  $form['crealead_warnings']['warning_content_types'] = array(
//    '#type' => 'checkboxes',
//    '#title' => t('Types de contenu'),
//    '#options' => $options,
//    '#theme_options' => array(
//      'description at top' => '<p>Sélectionnez le ou les types de contenu pour lesquels les utilisateurs pourront créer des alertes.</p>',
//    ),
//    '#default_value' => variable_get('warning_content_types', array('need'=>'need')),
//  );


  // 1 - Texte du courriel envoyé aux inscrits à une réunion d'info.
  $form['crealead_info_meetings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Envoi de courriel aux inscrits'),
  );

  $form['crealead_info_meetings']['info_meeting_default_email_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Texte du message'),
    '#description' => 'Texte à fournir par défaut pour tout message à envoyer aux inscrits à une réunion.',
    '#default_value' => variable_get('info_meeting_default_email_body', ''),
  );

  // 2 - Texte du programme d'une réunion d'info.
  $form['crealead_info_meetings_prog'] = array(
    '#type' => 'fieldset',
    '#title' => t('Programme d\'une réunion'),
  );

  $programme_text = variable_get('programme_default_text', null);
  if ($programme_text) {
    $programme_text_default_value = $programme_text['value'];
  }
  else {
    $programme_text_default_value = 'Le texte du programme est à rédiger.';
  }
  $form['crealead_info_meetings_prog']['programme_default_text'] = array(
    '#type' => 'text_format',
    '#title' => t('Texte du programme (visible dans la page Les réunions d\'information)'),
    '#default_value' => $programme_text_default_value,
  );

  // 3 - Plans d'accès pour chaque ville.
  $form['crealead_info_meetings_maps'] = array(
    '#type' => 'fieldset',
    '#title' => t('Plans d\'accès'),
  );

  // 3.1 - Montpellier
  $mo_map = variable_get('meetings_default_map_mo', null);
  if ($mo_map) {
    $mo_map_default_value = $mo_map['value'];
  }
  else {
    $mo_map_default_value = 'Vous devez saisir ici le code IFRAME pour la carte Google de Montpellier.';
  }
  $form['crealead_info_meetings_maps']['meetings_default_map_mo'] = array(
    '#type' => 'text_format',
    '#title' => t('Montpellier'),
    '#default_value' => $mo_map_default_value,
  );

  // 3.2 - Nîmes
  $ni_map = variable_get('meetings_default_map_ni', null);
  if ($ni_map) {
    $ni_map_default_value = $ni_map['value'];
  }
  else {
    $ni_map_default_value = 'Vous devez saisir ici le code IFRAME pour la carte Google de Nîmes.';
  }
  $form['crealead_info_meetings_maps']['meetings_default_map_ni'] = array(
    '#type' => 'text_format',
    '#title' => t('Nîmes'),
    '#default_value' => $ni_map_default_value,
  );

  // 3.3 - Sète
  $se_map = variable_get('meetings_default_map_se', null);
  if ($se_map) {
    $se_map_default_value = $se_map['value'];
  }
  else {
    $se_map_default_value = 'Vous devez saisir ici le code IFRAME pour la carte Google de Sète.';
  }
  $form['crealead_info_meetings_maps']['meetings_default_map_se'] = array(
    '#type' => 'text_format',
    '#title' => t('Sète'),
    '#default_value' => $se_map_default_value,
  );

  return system_settings_form($form);
}