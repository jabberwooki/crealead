<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 07/06/17
 * Time: 15:49
 */

// TAB 1 - Automatic sending settings functions.
function crealead_newsflashes_settings_form() {
  // Email automatic sending settings
  $form['crealead_newsflashes_emails'] = array(
    '#type' => 'fieldset',
    '#title' => t('Jours d\'envoi'),
  );
  $form['crealead_newsflashes_emails']['sending_days'] = array(
    '#type' => 'checkboxes',
    '#description' => 'Cocher le ou les jours ou vous souhaitez envoyer un email des dernières brèves à tous les utilisateurs.',
    '#options' => array(
      1 => 'lundi',
      2 => 'mardi',
      3 => 'mercredi',
      4 => 'jeudi',
      5 => 'vendredi',
      6 => 'samedi',
      7 => 'dimanche',
    ),
  );

  return system_settings_form($form);
}

// TAB 2 - Manual sending functions.
function crealead_newsflashes_manual_sending_form($form, &$form_state) {
  $newsflashes_number = crealead_newsflashes_get_latest();

  if (!$newsflashes_number) {
    $disabled = TRUE;
    $newsflashes_text = '<p>' . 'Il n\'y a actuellement aucune brève à envoyer. Toutes les brèves publiées ont déjà été envoyées.' . '</p>';
  }
  else {
    $disabled = FALSE;
    $plural = 's';
    if ($newsflashes_number == 1) {
      $plural = '';
    }
    $newsflashes_text = 'Il y a <span class="newsflashes-number">' . $newsflashes_number . '</span> brève' . $plural . ' à envoyer.';
  }

  $form = array(
    'intro' => array(
      '#markup' => '<p class="newsflashes-manual-sending-intro">'. 'En utilisant le bouton ci-dessous, vous pouvez envoyer manuellement '
        . 'les dernières brèves à tous les utilisateurs.<br/>'
        . 'Ces brèves seront définitivement envoyées et ne seront pas prises en compte lors du prochain envoi automatique.<br/>'
        . '</p>',
    ),
    'submit' => array (
      '#type' => 'submit',
      '#value' => t('Envoyer les dernières brèves'),
      '#disabled' => $disabled,
      '#suffix' => '<div class="newsflashes-manual-sending-text">' . $newsflashes_text . '</div>',
    ),
  );

  return $form;
}

function crealead_newsflashes_manual_sending_form_submit($form, &$form_state) {
  crealead_send_latest_newsflashes(TRUE);
  dpm('Sent!');
}

// TAB 3 - Test sending functions.
function crealead_newsflashes_test_sending_form($form, &$form_state) {
  $newsflashes_number = crealead_newsflashes_get_latest();

  if (!$newsflashes_number) {
    $disabled = TRUE;
    $newsflashes_text = '<p class="newsflashes-test-sending-intro">' . 'Il n\'y a actuellement aucune brève à tester. Vous devez créer au moins une brève pour pouvoir faire un test.' . '</p>';
  }
  else {
    $disabled = FALSE;
    $plural = 's';
    if ($newsflashes_number == 1) {
      $plural = '';
    }
    $newsflashes_text = 'Il y a <span class="newsflashes-number">' . $newsflashes_number . '</span> brève' . $plural . ' à tester.';
  }

  $form = array(
    'intro' => array(
      '#markup' => '<p>'. 'Ce formulaire permet de tester l\'envoi des brèves par email.<br/> '
        . 'Les brèves envoyées dans un test ne sont pas marquées comme envoyées. '
        . 'Elles sont donc renvoyées à chaque test tant qu\un envoi manuel ou automatique n\a pas eu lieu.'
        . '</p>',
    ),
    'emails' => array(
      '#type' => 'textfield',
      '#title' => 'Adresses email',
      '#description' => 'Entrez une ou plusieurs adresses email valides, séparées par un point virgule',
    ),
    'submit' => array (
     '#type' => 'submit',
     '#value' => t('Envoyer le test'),
      '#disabled' => $disabled,
      '#suffix' => '<div class="newsflashes-test-sending-text">' . $newsflashes_text . '</div>',
    ),
  );

  return $form;
}

function crealead_newsflashes_test_sending_form_validate($form, &$form_state){
  $addresses = crealead_newsflashes_get_emails_adresses($form_state['values']['emails']);
  if (empty($addresses)) {
    form_set_error('newsflashes', 'Vous devez saisir au moins une adresse email.');
  }
  else {
    $wrong_adresses = array();
    foreach ($addresses as $address) {
      if (!valid_email_address($address)) {
        $wrong_adresses[] = $address;
      }
    }
    if (!empty($wrong_adresses)) {
      form_set_error('newsflashes', t('Une ou plusieurs adresses sont invalides : @addresses.', array('@addresses' => implode(' ', $wrong_adresses))));
    }
  }
}

function crealead_newsflashes_test_sending_form_submit($form, &$form_state) {

  $test_addresses = crealead_newsflashes_get_emails_adresses($form_state['values']['emails']);
  crealead_send_latest_newsflashes(FALSE, $test_addresses);

  drupal_set_message('<div class="message success">Email de test envoyé avec succès!</div>');
}

function crealead_newsflashes_get_emails_adresses($adresses_field) {
  return preg_split('/[\s,;]+/', $adresses_field, -1, PREG_SPLIT_NO_EMPTY);
}


