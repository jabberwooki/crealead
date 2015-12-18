<?php
/**
 * @file
 * crealead_profiles.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_profiles_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Ingenierie Bureau d\'étude',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '22c4b38c-0df9-4697-8f56-1c7171ad86d6',
    'vocabulary_machine_name' => 'business_sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'RH Gestion Qualité',
    'description' => '<p>Qu\'est-ce que CreaExpert ?<br />
<br />
Les Experts sont les entrepreneurs de Crealead exerçant une activité de prestation intellectuelle au service des entreprises.</p>

<p>Consultants, Formateurs, Coachs, Prestataires avec différents modes d\'intervention, nous partageons nos meilleures pratiques pour faire progresser la qualité de nos prestations.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2a16e571-35dc-4854-8ccf-4037d23c11b5',
    'vocabulary_machine_name' => 'business_sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Particuliers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '484573af-ad55-42ad-8e22-7d84f8312a07',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Informatique Internet Télécom',
    'description' => '<p>Les métiers "T.I.C." : Techniologies de l\'Information et de la Communication,regroupent :&nbsp;"les techniques principalement de l\'informatique, de l\'audiovisuel, des multimédias, de l\'Internet et des télécommunications qui permettent aux utilisateurs de communiquer, d\'accéder aux sources d\'information, de stocker, de manipuler, de produire et de transmettre l\'information sous toutes les formes: texte, document, musique, son, image, vidéo, et interface graphique interactive". (Wikipedia)</p>
',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '4bcbd360-8cac-4b48-b156-99bc51cdeecb',
    'vocabulary_machine_name' => 'business_sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Institutionnels',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '53abc942-d1fe-4a0d-a0e0-c3d5c42d976a',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Associations',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5a977f02-0f91-4bea-9483-7340398faa59',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'TPE/PME',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '76d10360-b359-46c9-89f8-6ac9c23bf28e',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Grandes entreprises',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '774d2ffb-8140-4eec-8330-787f6eb93a04',
    'vocabulary_machine_name' => 'client_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Marketing Communication Vente',
    'description' => '<p>Dans cette section vous trouverez les créatifs qui vous permettent de mettre sur des supports (virtuels ou physiques) votre image de marque : Flyers, cartes de visite, dépliants, affiches, mais encore, sites Internet, chartes graphiques, etc.</p>
',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '968c624e-18fa-42dd-8fa0-b8c1336bfec2',
    'vocabulary_machine_name' => 'business_sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Environnement Eco-Construction Structure-Bois',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '9bd98d14-1229-4def-b367-f937ac900e73',
    'vocabulary_machine_name' => 'business_sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Aménagement Décoration',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => 'b8a926d4-c201-4e69-8648-ab19de4886f6',
    'vocabulary_machine_name' => 'business_sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Rénovation Entretien',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => 'ff0742c7-b826-4473-b08e-69b6d6e785f4',
    'vocabulary_machine_name' => 'business_sectors',
    'metatags' => array(),
  );
  return $terms;
}
