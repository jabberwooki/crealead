<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 10/10/17
 * Time: 18:16
 */
?>

<?php if (!empty($title)): ?>
  <?php
    switch ($title) {
      case 'Session de formation':
        $title = 'Formations';
        break;
      case 'Evénement':
        $title = 'Evénements';
        break;
    }
  ?>
  <h5><?php print $title; ?></h5>
<?php endif; ?>

<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
