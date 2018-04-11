<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 10/04/18
 * Time: 16:01
 */

function crealead_trainings_add_recommendation($type='ajax') {
  if ($type == 'ajax') {
    // Currently connected user who wants to add a recommendation.
    global $user;
    // Training nid caught from the ajax requested url.
    $training_id = arg(1);

    // First, we load the training and we add user to it.
    $training_wrapper = entity_metadata_wrapper('node', $training_id);
    $training_wrapper->field_recommended_by[] = $user;
    $training_wrapper->save();

    // Then, we get the freshly updated node
    // in order to replace node display by the updated node content.
    $training = node_load($training_id);
    $output = drupal_render(node_view($training));

    // Finally, we prepare the ajax response and deliver it.
    $commands = array();
    $commands[] = ajax_command_replace('#node-training-full-wrapper', $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}

function crealead_trainings_add_recommendation_from_list($type='ajax') {
  if ($type == 'ajax') {
    // Currently connected user who wants to add a recommendation.
    global $user;
    // Training nid caught from the ajax requested url.
    $training_id = arg(1);

    // First, we load the training and we add user to it.
    $training_wrapper = entity_metadata_wrapper('node', $training_id);
    $training_wrapper->field_recommended_by[] = $user;
    $training_wrapper->save();

    // Then, we get the freshly updated node
    // in order to replace node display by the updated node content.
    $training = node_load($training_id);
    $output = drupal_render(node_view($training, 'list'));

    // Finally, we prepare the ajax response and deliver it.
    $commands = array();
    $commands[] = ajax_command_replace('#node-training-item-wrapper-' . $training_id, $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}

function crealead_trainings_remove_recommendation($type='ajax') {
  if ($type == 'ajax') {
    // Currently connected user who wants to remove their recommendation.
    global $user;
    // Training nid caught from the ajax requested url.
    $training_id = arg(1);

    // First, we load the training and we remove user from it.
    $training_wrapper = entity_metadata_wrapper('node', $training_id);
    foreach ($training_wrapper->field_recommended_by->value() as $key=>$coe) {
      if ($coe->uid == $user->uid) {
        unset($training_wrapper->field_recommended_by[$key]);
        break;
      }
    }
    $training_wrapper->save();

    // Then, we get the freshly updated node
    // in order to replace node display by the updated node content.
    $training = node_load($training_id);
    $output = drupal_render(node_view($training));

    $commands = array();
    $commands[] = ajax_command_replace('#node-training-full-wrapper', $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}

function crealead_trainings_remove_recommendation_from_list($type='ajax') {
  if ($type == 'ajax') {
    // Currently connected user who wants to remove their recommendation.
    global $user;
    // Training nid caught from the ajax requested url.
    $training_id = arg(1);

    // First, we load the training and we remove user from it.
    $training_wrapper = entity_metadata_wrapper('node', $training_id);
    foreach ($training_wrapper->field_recommended_by->value() as $key=>$coe) {
      if ($coe->uid == $user->uid) {
        unset($training_wrapper->field_recommended_by[$key]);
        break;
      }
    }
    $training_wrapper->save();

    // Then, we get the freshly updated node
    // in order to replace node display by the updated node content.
    $training = node_load($training_id);
    $output = drupal_render(node_view($training, 'list'));

    $commands = array();
    $commands[] = ajax_command_replace('#node-training-item-wrapper-' . $training_id, $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}