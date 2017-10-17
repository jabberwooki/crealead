<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 17/10/17
 * Time: 15:40
 */

/**
 * Form for uploading the "Crealead funded" logo image.
 */
function crealead_trainings_settings_form() {
  // Logo
  $form['crealead_training_funded_logo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Logo "Prise en charge Crealead"'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  // If there is already an uploaded image, display the image here.
  if ($logo_fid = variable_get('crealead_training_funded_logo_fid', FALSE)) {
//    dpm($logo_fid);
    if ($image = file_load($logo_fid)) {
      $form['crealead_training_funded_logo']['image'] = array(
        '#markup' => theme('image_style',
          array(
            'style_name' => 'funded_logo',
            'path' => $image->uri,
            'alt' => 'Prise en charge partielle du financement par Crealead pour les Crealeadiens',
          )
        ),
      );
    }


  }
  $desc = t(
    'Logo que vous voulez afficher pour les formations prise en charge par Crealead.<br/>' .
    'Dimensions minimales préconisées : largeur <b>48 px</b>, hauteur <b>48 px</b>.<br/>' .
    'Format préconisé : <b>carré</b>.'
    );
  $form['crealead_training_funded_logo']['crealead_training_funded_logo_fid'] = array(
    '#title' => t('Fichier'),
    '#type' => 'managed_file',
    '#description' => $desc,
    '#default_value' => variable_get('crealead_training_funded_logo_fid', ''),
    '#upload_location' => 'public://trainings',
  );

  return system_settings_form($form);
}