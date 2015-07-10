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
    'name' => 'Autre',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '10929d59-1c6f-4861-a97b-88778bd77bd2',
    'vocabulary_machine_name' => 'business_groups',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Crealead Bâtiment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '1cc644d8-192f-4ef6-9c13-231190ed63a3',
    'vocabulary_machine_name' => 'business_groups',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bureau d\'études',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '1ffbbc11-5b13-49c0-9d91-fdac347d48cc',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => 'ff0742c7-b826-4473-b08e-69b6d6e785f4',
    ),
  );
  $terms[] = array(
    'name' => 'Commerçants et artisans',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '22c4b38c-0df9-4697-8f56-1c7171ad86d6',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'TIC',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '24ece40c-c75e-4a1f-a345-f51a72734bac',
    'vocabulary_machine_name' => 'business_groups',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'drupal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '28e2fe17-21e1-4a78-8bd2-ddce30731ab9',
    'vocabulary_machine_name' => 'entrepreneur_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Consultants formateurs',
    'description' => '<p>Qu\'est-ce que CreaExpert ?<br />
<br />
Les Experts sont les entrepreneurs de Crealead exerçant une activité de prestation intellectuelle au service des entreprises.</p>

<p>Consultants, Formateurs, Coachs, Prestataires avec différents modes d\'intervention, nous partageons nos meilleures pratiques pour faire progresser la qualité de nos prestations.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '2a16e571-35dc-4854-8ccf-4037d23c11b5',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Applications mobiles',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '2a52f48f-c5a2-4820-a9e2-e635f395b78e',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '4bcbd360-8cac-4b48-b156-99bc51cdeecb',
    ),
  );
  $terms[] = array(
    'name' => 'Gestion de projets',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '2a61fd9c-1d88-455a-82d6-6b25f057796b',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '4bcbd360-8cac-4b48-b156-99bc51cdeecb',
    ),
  );
  $terms[] = array(
    'name' => 'Décoration, aménagement',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '3291a48f-12d5-43b3-913a-f6699f2c85f0',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => 'ff0742c7-b826-4473-b08e-69b6d6e785f4',
    ),
  );
  $terms[] = array(
    'name' => 'Language',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '49df489f-d564-41dc-b8cd-68ea7d6e0883',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '968c624e-18fa-42dd-8fa0-b8c1336bfec2',
    ),
  );
  $terms[] = array(
    'name' => 'TIC',
    'description' => '<p>Les métiers "T.I.C." : Techniologies de l\'Information et de la Communication,regroupent :&nbsp;"les techniques principalement de l\'informatique, de l\'audiovisuel, des multimédias, de l\'Internet et des télécommunications qui permettent aux utilisateurs de communiquer, d\'accéder aux sources d\'information, de stocker, de manipuler, de produire et de transmettre l\'information sous toutes les formes: texte, document, musique, son, image, vidéo, et interface graphique interactive". (Wikipedia)</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4bcbd360-8cac-4b48-b156-99bc51cdeecb',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Logos et graphismes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '536f6a9c-1415-4238-a284-0008fe746010',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '968c624e-18fa-42dd-8fa0-b8c1336bfec2',
    ),
  );
  $terms[] = array(
    'name' => 'Vidéo',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '648596fc-59c1-4fe8-a837-5a65bafb4bdf',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '968c624e-18fa-42dd-8fa0-b8c1336bfec2',
    ),
  );
  $terms[] = array(
    'name' => 'Techniciens du web',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6e362952-c7ba-46ce-9e0c-5e7b5ce287b8',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '4bcbd360-8cac-4b48-b156-99bc51cdeecb',
    ),
  );
  $terms[] = array(
    'name' => 'Communication',
    'description' => '<p>Dans cette section vous trouverez les créatifs qui vous permettent de mettre sur des supports (virtuels ou physiques) votre image de marque : Flyers, cartes de visite, dépliants, affiches, mais encore, sites Internet, chartes graphiques, etc.</p>
',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '968c624e-18fa-42dd-8fa0-b8c1336bfec2',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Formation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9903165e-f705-40ac-ad93-7edfee02ab6a',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '2a16e571-35dc-4854-8ccf-4037d23c11b5',
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture et environnement',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => '9bd98d14-1229-4def-b367-f937ac900e73',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Eléctricité',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'a4de76b7-606f-45a4-b5d2-0920f8dd8d48',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => 'ff0742c7-b826-4473-b08e-69b6d6e785f4',
    ),
  );
  $terms[] = array(
    'name' => 'Creaexperts',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b10792ff-2276-43fc-ad00-26750fbdcf8c',
    'vocabulary_machine_name' => 'business_groups',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Terracoopa',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'b110f966-eedb-4e5b-a8bb-293e70270d39',
    'vocabulary_machine_name' => 'business_groups',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Service aux particuliers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'b8a926d4-c201-4e69-8648-ab19de4886f6',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Coaching',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'be3b8d4a-510d-4f59-8e26-aa13b0567eda',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '2a16e571-35dc-4854-8ccf-4037d23c11b5',
    ),
  );
  $terms[] = array(
    'name' => 'drupal cms',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf4623cc-8e1b-453b-8f3c-5c6b463dc846',
    'vocabulary_machine_name' => 'entrepreneur_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Photographie',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cfd406db-29f7-4d58-822a-709f7dfdbdca',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '968c624e-18fa-42dd-8fa0-b8c1336bfec2',
    ),
  );
  $terms[] = array(
    'name' => 'Creaticom',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'd9f8bcbd-2017-4349-a648-6102613bb103',
    'vocabulary_machine_name' => 'business_groups',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Conseil Marketing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'e9963dbf-39bc-45c3-a0b1-6b942e2f3d26',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => '2a16e571-35dc-4854-8ccf-4037d23c11b5',
    ),
  );
  $terms[] = array(
    'name' => 'Multiservices, dépannage',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ecd18783-3430-4c13-95f0-8238c30aaac8',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
    'parent' => array(
      0 => 'ff0742c7-b826-4473-b08e-69b6d6e785f4',
    ),
  );
  $terms[] = array(
    'name' => 'photovoltaïque',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef952b28-2cea-4e54-9bd3-f55938c694f3',
    'vocabulary_machine_name' => 'entrepreneur_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bâtiment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'ff0742c7-b826-4473-b08e-69b6d6e785f4',
    'vocabulary_machine_name' => 'entrepreneur_categories',
    'metatags' => array(),
  );
  return $terms;
}
