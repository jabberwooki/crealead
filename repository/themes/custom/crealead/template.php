<?php

/**
 * @file
 * template.php
 */
/*
 * Remove width and height attributes to images tags
 * */
function crealead_preprocess_image(&$variables) {
  foreach (array('width', 'height') as $key) {
    unset($variables[$key]);
    unset($variables[$key]);
  }
}