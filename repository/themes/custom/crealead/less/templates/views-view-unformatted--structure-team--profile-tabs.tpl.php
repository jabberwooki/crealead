<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 19/11/18
 * Time: 08:49
 */

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php
// Ce template est dérivé de views-view-unformatted.tpl.php qui sert à afficher tous les champs d'une ligne de la vue.
// On aurait pu aussi prendre views-view-list.tpl.php
// On le réécrit pour :
// - supprimer le titre H3 dû au regroupement sur le champ Profil: Type,
// - traiter les doublons (ça ne marche pas dans la vue).
?>
<?php
/**
 * C.Espiau
 * Affichage des profils de l'équipe Structure sous forme d'onglets à l'aide de jQuery UI.
 * Partie 1.1 - Liste des onglets.
 *
 * Pour la partie 1.2 (nom d'un onglet), voir le fichier :
 * - views-view-fields--structure-team-profile-tabs.tpl.php
 * Pour la partie 2 (contenu d'un onglet), voir le fichier :
 * - views-view-unformatted--structure-team--structure-profiles.tpl.php
 *
 * Ce template custom est dérivé de views-view-unformatted.tpl.php qui sert à afficher tous les champs d'une ligne de la vue.
 * On le réécrit pour :
 * - supprimer le titre H3 dû au regroupement sur le champ Profil: Type,
 * - ajouter une enveloppe <div> avec un identifiant égal au nom machine du type de profil.
 */
?>
<ul>
  <?php $displayed_types = array(); ?>
  <?php foreach ($rows as $id => $row): ?>
    <?php if (!in_array($row, $displayed_types)): ?>
    <li id="tab-<?php print $id?>" class="profile-tab">
      <a><?php print $row; ?></a>
    </li>
    <?php endif; ?>
    <?php $displayed_types[$row] = $row; ?>
  <?php endforeach; ?>
</ul>
