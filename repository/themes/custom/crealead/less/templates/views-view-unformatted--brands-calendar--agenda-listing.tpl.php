<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 07/07/17
 * Time: 11:53
 */
?>
<?php if (!empty($title)): ?>
  <?php $title = str_replace('Session de formation','Formation', $title); ?>
  <div class="brand-calendar-content-type"><?php print $title; ?></div>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
