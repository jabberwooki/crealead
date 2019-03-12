<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 08/03/19
 * Time: 15:46
 */

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'brand')
  ->fieldCondition('field_brand_achievements', 'target_id', 'NULL', '!=');
$result = $query->execute();

if (isset($result['node'])) {

  $cleaned_brands_nids = array();
  foreach ($result['node'] as $brand) {

    $brand_object = node_load($brand->nid);
    $achievements = $brand_object->field_brand_achievements['und'];
    $initial_nb_of_achievements = count($achievements);

    if ($initial_nb_of_achievements > 1) {
      $unique_achievements = array();
      foreach ($achievements as $key => $achievement) {
        if (!in_array($achievement['target_id'], $unique_achievements)) {
          $unique_achievements[$achievement['target_id']] = $achievement['target_id'];
        }
        else {
          unset($achievements[$key]);
        }
      }

      if (count($achievements) < $initial_nb_of_achievements) {
        $cleaned_brands_nids[] = $brand->nid;
        $brand_object->field_brand_achievements['und'] = $achievements;
        node_save($brand_object);
      }
    }
  }
  if ($cleaned_brand_number = count($cleaned_brands_nids)) {
    dpm('Les réalisations en double ont été nettoyées dans ' . $cleaned_brand_number . ' marques');
  }
  else {
    dpm("Il n'y a aucune réalisation en double dans aucune marque.");
  }
}
