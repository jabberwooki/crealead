<?php

/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 26/02/19
 * Time: 17:25
 */

/**
 * @file views-bootstrap-grid-plugin-style.tpl.php
 * Default simple view template to display Bootstrap Grids.
 *
 *
 * - $columns contains rows grouped by columns.
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 * - $column_type contains a number (default Bootstrap grid system column type).
 *
 * @ingroup views_templates
 */
?>

<?php
$text = 'Trier par popularité';
$host = $_SERVER['HTTP_HOST'];
$request = '';

if (empty($_REQUEST)) {
  $request = '?recommended=DESC';
} else {
//  dpm($_REQUEST);
  if (isset($_REQUEST['recommended'])) {
    $text = 'Annuler le tri par popularité';
    unset($_REQUEST['recommended']);
  } else {
    $_REQUEST['recommended'] = 'DESC';
  }

  // if (!empty($_REQUEST)) {
  $request = array();
  foreach ($_REQUEST as $param => $value) {
    // Chaque valeur du tableau $_REQUEST peut être soit un tableau 
    // (c'est le cas du champ Catégories d'action de formation),
    if (is_array($value)) {
      foreach ($value as $string_value) {
        $request[] = $param . "[]=" . $string_value;
      }
    }
    // soit une chaine de caractères (c'est le cas des autres champs).
    else {
      $request[] = $param . '=' . $value;
    }
  }
  $request = '?' . implode('&', $request);
  // }
}

$url = 'http://' . $host . '/formations' . $request;
?>

<div id="sort-criteria">
  <a href="<?php print $url; ?>"><?php print $text; ?></a>
</div>

<div id="views-bootstrap-grid-<?php print $id ?>" class="<?php print $classes ?>">
  <?php if ($options['alignment'] == 'horizontal') : ?>

    <?php foreach ($items as $row) : ?>
      <div class="row">
        <?php foreach ($row['content'] as $column) : ?>
          <div class="col col-lg-<?php print $column_type ?>">
            <?php print $column['content'] ?>
          </div>
        <?php endforeach ?>
      </div>
    <?php endforeach ?>

  <?php else : ?>

    <div class="row">
      <?php foreach ($items as $column) : ?>
        <div class="col col-lg-<?php print $column_type ?>">
          <?php foreach ($column['content'] as $row) : ?>
            <?php print $row['content'] ?>
          <?php endforeach ?>
        </div>
      <?php endforeach ?>
    </div>

  <?php endif ?>
</div>
