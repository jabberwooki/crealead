<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 28/09/17
 * Time: 11:48
 */
?>
<?php if (!empty($title)): ?>
  <div><?php print $title; ?></div>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>

