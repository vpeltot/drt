<?php
/**
 * @file
 * quizz_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function quizz_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_archive|node|quizz|form';
  $field_group->group_name = 'group_archive';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_configuration';
  $field_group->data = array(
    'label' => 'Archive',
    'weight' => '34',
    'children' => array(
      0 => 'field_contenu_archiver',
      1 => 'field_label_archive',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-archive field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_archive|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bloc_dernieres_pub|taxonomy_term|arbo|form';
  $field_group->group_name = 'group_bloc_dernieres_pub';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'arbo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'bloc "Dernières publications"',
    'weight' => '2',
    'children' => array(
      0 => 'field_arbo_mode',
      1 => 'field_arbo_affichage',
      2 => 'field_arbo_contenu_associes',
      3 => 'field_arbo_contenu_associe',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bloc-dernieres-pub field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bloc_dernieres_pub|taxonomy_term|arbo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_configuration|node|quizz|form';
  $field_group->group_name = 'group_configuration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Configuration',
    'weight' => '4',
    'children' => array(
      0 => 'field_contenu_rubrique_sec',
      1 => 'field_contenu_date_crea',
      2 => 'field_contenu_date_modif',
      3 => 'field_contenu_add_view',
      4 => 'group_archive',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-configuration field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_configuration|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contenu|node|quizz|form';
  $field_group->group_name = 'group_contenu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '1',
    'children' => array(
      0 => 'field_contenu_accroche',
      1 => 'field_contenu_format',
      2 => 'field_contenu_rubrique',
      3 => 'field_contenu_titre',
      4 => 'field_contenu_visuel',
      5 => 'field_contenu_couleur',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contenu field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contenu|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|quizz|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '7',
    'children' => array(
      0 => 'field_meta_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plus_de|node|quizz|form';
  $field_group->group_name = 'group_plus_de';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zone "Plus de..."',
    'weight' => '6',
    'children' => array(
      0 => 'field_contenu_plusde_lien',
      1 => 'field_contenu_plusde_mode',
      2 => 'field_contenu_plusde_titre',
      3 => 'field_contenus_plusde_attaches',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-plus-de field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_plus_de|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_questions|node|quizz|form';
  $field_group->group_name = 'group_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Questions',
    'weight' => '2',
    'children' => array(
      0 => 'field_quizz_questions',
      1 => 'field_quizz_good_answer',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-questions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_questions|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_redirection|node|quizz|form';
  $field_group->group_name = 'group_redirection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Redirection',
    'weight' => '8',
    'children' => array(
      0 => 'field_contenu_origin_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-redirection field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_redirection|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reponse1|bean|question_quizz|form';
  $field_group->group_name = 'group_reponse1';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'question_quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reponses';
  $field_group->data = array(
    'label' => 'Réponse 1',
    'weight' => '7',
    'children' => array(
      0 => 'field_quizz_reponse1',
      1 => 'field_quizz_image_reponse1',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_reponse1|bean|question_quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reponse2|bean|question_quizz|form';
  $field_group->group_name = 'group_reponse2';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'question_quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reponses';
  $field_group->data = array(
    'label' => 'Réponse 2',
    'weight' => '8',
    'children' => array(
      0 => 'field_quizz_reponse2',
      1 => 'field_quizz_image_reponse2',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_reponse2|bean|question_quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reponse3|bean|question_quizz|form';
  $field_group->group_name = 'group_reponse3';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'question_quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reponses';
  $field_group->data = array(
    'label' => 'Réponse 3',
    'weight' => '9',
    'children' => array(
      0 => 'field_quizz_reponse3',
      1 => 'field_quizz_image_reponse3',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_reponse3|bean|question_quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reponse4|bean|question_quizz|form';
  $field_group->group_name = 'group_reponse4';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'question_quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reponses';
  $field_group->data = array(
    'label' => 'réponse 4',
    'weight' => '10',
    'children' => array(
      0 => 'field_quizz_reponse4',
      1 => 'field_quizz_image_reponse4',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_reponse4|bean|question_quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reponse5|bean|question_quizz|form';
  $field_group->group_name = 'group_reponse5';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'question_quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reponses';
  $field_group->data = array(
    'label' => 'Réponse 5',
    'weight' => '11',
    'children' => array(
      0 => 'field_quizz_reponse5',
      1 => 'field_quizz_image_reponse5',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_reponse5|bean|question_quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reponses|bean|question_quizz|form';
  $field_group->group_name = 'group_reponses';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'question_quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Réponses',
    'weight' => '8',
    'children' => array(
      0 => 'group_reponse1',
      1 => 'group_reponse2',
      2 => 'group_reponse3',
      3 => 'group_reponse4',
      4 => 'group_reponse5',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-reponses field-group-htabs',
      ),
    ),
  );
  $export['group_reponses|bean|question_quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resultat_defaut|node|quizz|form';
  $field_group->group_name = 'group_resultat_defaut';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resultats';
  $field_group->data = array(
    'label' => 'Défaut',
    'weight' => '40',
    'children' => array(
      0 => 'field_resultat_defaut_titre',
      1 => 'field_resultat_defaut_expli',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resultat-defaut field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resultat_defaut|node|quizz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resultats|node|quizz|form';
  $field_group->group_name = 'group_resultats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quizz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Résultats',
    'weight' => '3',
    'children' => array(
      0 => 'field_quizz_resultats',
      1 => 'group_resultat_defaut',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resultats field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resultats|node|quizz|form'] = $field_group;

  return $export;
}
