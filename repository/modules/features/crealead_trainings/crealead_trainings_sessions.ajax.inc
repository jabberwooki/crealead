<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 13/10/17
 * Time: 10:14
 */

// Ajax callback functions

function crealead_trainings_session_remove_user($type='ajax') {
  if ($type == 'ajax') {
    global $user;
    $session_nid = arg(1);
    //watchdog('crealead_trainings', '[REMOVE] Session id = ' . $session_nid);

    // First we seek the field collection item having the current user as field_user_name.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'field_collection_item')
      ->propertyCondition('field_name','field_interested_users')
      ->fieldCondition('field_user_name', 'target_id', $user->uid);
    $result = $query->execute();
    $fci_id = key($result['field_collection_item']);

    // Then, we delete the field collection item.
    field_collection_item_delete($fci_id);

    $switch_link = crealead_trainings_get_interest_widget(false, $session_nid, $user);

    // Finally, we prepare the ajax response and deliver it.
    $commands = array();
    $commands[] = ajax_command_replace('#session-switch-wrapper', $switch_link);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Attention ! Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}
