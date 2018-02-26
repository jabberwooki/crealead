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

  return system_settings_form($form);
}