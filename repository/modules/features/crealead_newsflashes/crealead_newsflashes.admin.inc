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
  $form['crealead_newsflashes_emails']['newsflashes_sending_days'] = array(
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
    '#default_value' => variable_get('newsflashes_sending_days', array()),
  );

  return system_settings_form($form);
}

// TAB 2 - Manual sending functions.
function crealead_newsflashes_manual_sending_form($form, &$form_state) {
  drupal_add_css(drupal_get_path('module','crealead_newsflashes') . '/css/crealead_newsflashes.css');
  drupal_add_js(drupal_get_path('module','crealead_newsflashes') . '/js/crealead_newsflashes.js');

  $newsflashes = crealead_newsflashes_get_latest(TRUE);
  $nf_not_yet_sent_options = array();
  $nf_already_sent_options = array();
  foreach ($newsflashes as $newsflash) {
    if ($newsflash['sent_by_email'] == 'non') {
      $nf_not_yet_sent_options[$newsflash['nid']] = $newsflash['title'];
    }
    else {
      $nf_already_sent_options[$newsflash['nid']] = $newsflash['title'];
    }
  }

  $form = array();
  $form['intro'] = array(
    '#markup' => '<p class="newsflashes-manual-sending-intro">'. 'Vous pouvez envoyer manuellement '
      . 'les dernières brèves à tous les utilisateurs.<br/>'
      . 'Ces brèves seront définitivement envoyées et ne seront pas prises en compte lors du prochain envoi automatique.<br/>'
      . '</p>',
  );

  $newsflashes_number = sizeof($newsflashes);
  if (!$newsflashes_number) {
    $form['intro'] = array(
      '#markup' => '<p class="newsflashes-manual-nothing-to-send">'.
        'Il n\'y a actuellement aucune brève à envoyer.'
        . '</p>',
    );
  }
  else {
//    $plural = 's';
//    if ($newsflashes_number == 1) {
//      $plural = '';
//    }

    $form['email-subject'] = array(
      '#type' => 'container',
      '#attributes' => array('class' => array('email-title-container')),
    );
    $form['email-subject']['subject'] = array(
      '#type' => 'textfield',
      '#title' => 'Objet',
      '#size' => 100,
      '#field_prefix' => '[Crealead]',
      '#default_value' => 'Informations du ' . lcfirst(format_date(time(), 'custom', 'l d F Y')),
    );


    $form['not-yet-sent'] = array(
      '#type' => 'container',
      '#attributes' => array('class' => array('nf-not-yet-sent-container')),
    );
    $form['not-yet-sent']['newsflashes-not-yet-sent-list'] = array(
      '#type' => 'checkboxes',
      '#title' => 'Brèves non encore envoyées',
      '#theme_options' => array(
        'description at top' => '<p>Cochez la ou les brèves que vous souhaitez envoyer.<br/>'
          . 'Vous devez cocher au moins une brève pour avoir accès au bouton Envoyer.'
          . '</p>',
      ),
      '#options' => $nf_not_yet_sent_options,
    );

    if (!empty($nf_already_sent_options)) {
      $form['already-sent'] = array(
        '#type' => 'container',
        '#attributes' => array('class' => array('nf-already-sent-container')),
      );
      $form['already-sent']['newsflashes-already-sent-list'] = array(
        '#type' => 'checkboxes',
        '#title' => 'Brèves déjà envoyées',
        '#theme_options' => array(
          'description at top' => '<p>Vous pouvez aussi renvoyer des brèves déjà envoyées.<br/>'
            . 'Ces brèves sont toujours visibles parce qu\'elles n\'ont pas encore atteint leur date limite de parution.'
            . '</p>',
        ),
        '#options' => $nf_already_sent_options,
      );
    }

    $form['include-full-body'] = array(
      '#type' => 'container',
    );
    $options = array('0' => 'non', '1' => 'oui');
    $form['include-full-body']['full-body-yes-no'] = array(
      '#type' => 'radios',
      '#title' => 'Envoyer aussi le corps de la brève ?',
      '#options' => $options,
      '#default_value' => 0,
      '#description' => 'Ceci est possible lorsque vous ne sélectionnez qu\'une seule brève.',
    );
  }
  $form['submit-container'] = array(
    '#type' => 'container',
  );
  $form['submit-container']['submit'] = array (
    '#type' => 'submit',
    '#value' => t('Envoyer'),
  );

  return $form;
}

function crealead_newsflashes_manual_sending_form_submit($form, &$form_state) {
  $newsflashes_list = array();
  if (isset($form_state['values']['newsflashes-not-yet-sent-list'])) {
    foreach ($form_state['values']['newsflashes-not-yet-sent-list'] as $key=>$value) {
      if ($value != 0) {
        $newsflashes_list[$key] = $value;
      }
    }
  }
  if (isset($form_state['values']['newsflashes-already-sent-list'])) {
    foreach ($form_state['values']['newsflashes-already-sent-list'] as $key=>$value) {
      if ($value != 0) {
        $newsflashes_list[$key] = $value;
      }
    }
  }

  crealead_send_latest_newsflashes(TRUE,FALSE, $newsflashes_list, $form_state['values']);
}

// TAB 3 - Test sending functions.
function crealead_newsflashes_test_sending_form($form, &$form_state) {
  $newsflashes_number = crealead_newsflashes_get_latest();

  $form = array();
  if (!$newsflashes_number) {
    $disabled = TRUE;
    $newsflashes_text = '<p class="newsflashes-test-sending-intro">' . 'Il n\'y a actuellement aucune brève à tester. Vous devez créer au moins une brève pour pouvoir faire un test.' . '</p>';
  }
  else {
    $disabled = FALSE;

    $form['intro'] = array(
      '#markup' => '<p>'. 'Ce formulaire permet de tester l\'envoi des brèves par email.<br/> '
        . 'Les brèves envoyées dans un test ne sont pas marquées comme envoyées. '
        . 'Elles sont donc renvoyées à chaque test tant qu\un envoi manuel ou automatique n\a pas eu lieu.'
        . '</p>',
    );
    $form['emails'] = array(
      '#type' => 'textfield',
      '#title' => 'Adresses email',
      '#description' => 'Entrez une ou plusieurs adresses email valides, séparées par une <em><b>virgule</b></em> ou un <em><b>point virgule</b></em>.',
    );

    $plural = 's';
    if ($newsflashes_number == 1) {
      $plural = '';
    }
    $newsflashes_text = 'Il y a <span class="newsflashes-number">' . $newsflashes_number . '</span> brève' . $plural . ' à tester.';
  }

  $form['submit'] = array (
    '#type' => 'submit',
    '#value' => t('Envoyer le test'),
    '#disabled' => $disabled,
    '#prefix' => '<div class="newsflashes-test-sending-text">' . $newsflashes_text . '</div>',
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
}

function crealead_newsflashes_get_emails_adresses($adresses_field) {
  return preg_split('/[\s,;]+/', $adresses_field, -1, PREG_SPLIT_NO_EMPTY);
}


