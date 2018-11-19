<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 19/11/18
 * Time: 08:11
 */

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php
/**
 * C.Espiau
 * Affichage des profils de l'équipe Structure sous forme d'onglets à l'aide de jQuery UI.
 * Partie 2 - Contenu de chaque onglet.
 *
 * Pour la partie 1 (Onglets), voir les fichiers suivants :
 * - 1.1 Liste des onglets : views-view-unformatted--structure-team--profile-tabs.tpl.php
 * - 1.2 Nom d'un onglet : views-view-fields--structure-team-profile-tabs.tpl.php
 *
 * Ce template est dérivé de views-view-unformatted.tpl.php qui sert à afficher tous les champs d'une ligne de la vue.
 * On le réécrit pour :
 * - supprimer le titre H3 dû au regroupement sur le champ Profil: Type,
 * - ajouter une enveloppe <div> avec un identifiant égal au nom machine du type de profil.
 */
?>
<div id="tab-<?php print key($rows); ?>">
  <?php foreach ($rows as $id => $row): ?>
    <div <?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</div>