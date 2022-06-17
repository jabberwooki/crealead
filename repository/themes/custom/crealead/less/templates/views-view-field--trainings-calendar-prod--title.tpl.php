<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 26/11/17
 * Time: 16:53
 */
?>

<?php
  /*
   * Le titre de la formation suivi du numéro du jour (dans la session) est généré dans le hook crealead_trainings_views_pre_render().
   * Mais si on ne fait rien, ce template n'affiche que le titre de la formation, pas ne numéro du jour.
   *
   * Heureusement, toutes les données sont dans les variables transmises à la page :
   *   $row->field_field_related_training[0]['rendered']['#markup'] contient Titre + Numéro jour.
   *   $row->node_title contient le Titre seulement.
   *   $output contient le titre formaté en tant que lien vers son node dans une colorbox.
   *
   * Donc, un petit coup de str_replace pour remplacer Titre par Titre + Numéro Jour dans la chaine formatée $output
   */
  $output = str_replace($row->field_field_related_training[0]['rendered']['#label'], $row->node_title, $output);
  $funded = 0;
  $funded_logo_markup = '';

  if ($row->_field_data['nid']['entity']->field_funded_session) {
    $funded = $row->_field_data['nid']['entity']->field_funded_session['und'][0]['value'];
  }
?>
<?php if($funded): ?>
<?php print '<span class="funded-session funded-session-title">' . $output . '</span>'; ?>
<?php else: ?>
<?php print $output; ?>
<?php endif; ?>
