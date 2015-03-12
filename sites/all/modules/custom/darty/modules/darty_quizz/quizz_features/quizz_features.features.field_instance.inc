<?php
/**
 * @file
 * quizz_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function quizz_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-question_quizz-field_quizz_good_answer'
  $field_instances['bean-question_quizz-field_quizz_good_answer'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_good_answer',
    'label' => 'La bonne réponse est',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_image'
  $field_instances['bean-question_quizz-field_quizz_image'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image de 230px (largeur) * 150px (hauteur)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_image',
    'label' => 'Image du quizz',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_image_reponse1'
  $field_instances['bean-question_quizz-field_quizz_image_reponse1'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image de 190px (largeur) * 125px (hauteur)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_image_reponse1',
    'label' => 'Image de la réponse',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_image_reponse2'
  $field_instances['bean-question_quizz-field_quizz_image_reponse2'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image de 190px (largeur) * 125px (hauteur)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_image_reponse2',
    'label' => 'Image de la réponse',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_image_reponse3'
  $field_instances['bean-question_quizz-field_quizz_image_reponse3'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image de 190px (largeur) * 125px (hauteur)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_image_reponse3',
    'label' => 'Image de la réponse',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_image_reponse4'
  $field_instances['bean-question_quizz-field_quizz_image_reponse4'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image de 190px (largeur) * 125px (hauteur)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_image_reponse4',
    'label' => 'Image de la réponse',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_image_reponse5'
  $field_instances['bean-question_quizz-field_quizz_image_reponse5'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image de 190px (largeur) * 125px (hauteur)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_image_reponse5',
    'label' => 'Image de la réponse',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_question_explication'
  $field_instances['bean-question_quizz-field_quizz_question_explication'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_question_explication',
    'label' => 'Explication de la question',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_reponse1'
  $field_instances['bean-question_quizz-field_quizz_reponse1'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_reponse1',
    'label' => 'Libellé de la réponse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_reponse2'
  $field_instances['bean-question_quizz-field_quizz_reponse2'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_reponse2',
    'label' => 'Libellé de la réponse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_reponse3'
  $field_instances['bean-question_quizz-field_quizz_reponse3'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_reponse3',
    'label' => 'Libellé de la réponse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_reponse4'
  $field_instances['bean-question_quizz-field_quizz_reponse4'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_reponse4',
    'label' => 'Libellé de la réponse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_reponse5'
  $field_instances['bean-question_quizz-field_quizz_reponse5'] = array(
    'bundle' => 'question_quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_reponse5',
    'label' => 'Libellé de la réponse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'bean-question_quizz-field_quizz_type'
  $field_instances['bean-question_quizz-field_quizz_type'] = array(
    'bundle' => 'question_quizz',
    'default_value' => array(
      0 => array(
        'value' => 'texte',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quizz_type',
    'label' => 'Type de quizz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_quizz_resultats-field_quizz_resultat_borne'
  $field_instances['field_collection_item-field_quizz_resultats-field_quizz_resultat_borne'] = array(
    'bundle' => 'field_quizz_resultats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Permet de délimiter le nombre de bonne réponse maximum recevant ce texte de résultat',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_quizz_resultat_borne',
    'label' => 'Jusqu\'à',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_quizz_resultats-field_quizz_resultat_explication'
  $field_instances['field_collection_item-field_quizz_resultats-field_quizz_resultat_explication'] = array(
    'bundle' => 'field_quizz_resultats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_quizz_resultat_explication',
    'label' => 'Explication',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_quizz_resultats-field_quizz_resultat_titre'
  $field_instances['field_collection_item-field_quizz_resultats-field_quizz_resultat_titre'] = array(
    'bundle' => 'field_quizz_resultats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_quizz_resultat_titre',
    'label' => 'Titre du résultat',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_accroche'
  $field_instances['node-quizz-field_contenu_accroche'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_accroche',
    'label' => 'Accroche',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_add_view'
  $field_instances['node-quizz-field_contenu_add_view'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_add_view',
    'label' => 'Ajout de pages vues',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_archiver'
  $field_instances['node-quizz-field_contenu_archiver'] = array(
    'bundle' => 'quizz',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_archiver',
    'label' => 'Archiver',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_couleur'
  $field_instances['node-quizz-field_contenu_couleur'] = array(
    'bundle' => 'quizz',
    'default_value' => array(
      0 => array(
        'value' => 'orange',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_couleur',
    'label' => 'Couleur',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_date_crea'
  $field_instances['node-quizz-field_contenu_date_crea'] = array(
    'bundle' => 'quizz',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_date_crea',
    'label' => 'Date de publication',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_date_modif'
  $field_instances['node-quizz-field_contenu_date_modif'] = array(
    'bundle' => 'quizz',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_date_modif',
    'label' => 'Surcharge de la date de modification',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_format'
  $field_instances['node-quizz-field_contenu_format'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_format',
    'label' => 'Format',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_origin_links'
  $field_instances['node-quizz-field_contenu_origin_links'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vous pouvez lister ici l\'ensemble des urls (de Darty.com et de 36000 solutions) devant faire une redirection vers ce contenu',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_origin_links',
    'label' => 'Liens d\'origine du contenu',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_plusde_lien'
  $field_instances['node-quizz-field_contenu_plusde_lien'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Un lien sera mis en place par défaut en mode "automatique"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_plusde_lien',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_plusde_mode'
  $field_instances['node-quizz-field_contenu_plusde_mode'] = array(
    'bundle' => 'quizz',
    'default_value' => array(
      0 => array(
        'value' => 'auto',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_plusde_mode',
    'label' => 'Mode de fonctionnement',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_plusde_titre'
  $field_instances['node-quizz-field_contenu_plusde_titre'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Un libellé par défaut sera affiché en mode "automatique".
exemple : Plus de dossiers / Plus de tests / ...',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_plusde_titre',
    'label' => 'Titre de la zone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_rubrique'
  $field_instances['node-quizz-field_contenu_rubrique'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_rubrique',
    'label' => 'Rubrique principale',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 0,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_rubrique_sec'
  $field_instances['node-quizz-field_contenu_rubrique_sec'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_rubrique_sec',
    'label' => 'Rubrique secondaire',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 0,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_titre'
  $field_instances['node-quizz-field_contenu_titre'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Titre du contenu sur la page',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_titre',
    'label' => 'Titre',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenu_visuel'
  $field_instances['node-quizz-field_contenu_visuel'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_visuel',
    'label' => 'Visuel principal',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-quizz-field_contenus_plusde_attaches'
  $field_instances['node-quizz-field_contenus_plusde_attaches'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenus_plusde_attaches',
    'label' => 'Contenus attachés',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-quizz-field_label_archive'
  $field_instances['node-quizz-field_label_archive'] = array(
    'bundle' => 'quizz',
    'default_value' => array(
      0 => array(
        'value' => 'Cette page est une archive, son contenu n’est plus à jour.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_label_archive',
    'label' => 'Libellé archive',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-quizz-field_meta_description'
  $field_instances['node-quizz-field_meta_description'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meta_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-quizz-field_quizz_questions'
  $field_instances['node-quizz-field_quizz_questions'] = array(
    'bundle' => 'quizz',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quizz_questions',
    'label' => 'Questions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'delete_references' => 0,
          'label_plural' => 'questions',
          'label_singular' => 'question',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-quizz-field_quizz_resultats'
  $field_instances['node-quizz-field_quizz_resultats'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quizz_resultats',
    'label' => 'Résultats bornés',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-quizz-field_resultat_defaut_expli'
  $field_instances['node-quizz-field_resultat_defaut_expli'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resultat_defaut_expli',
    'label' => 'Explication du résultat par défaut',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-quizz-field_resultat_defaut_titre'
  $field_instances['node-quizz-field_resultat_defaut_titre'] = array(
    'bundle' => 'quizz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resultat_defaut_titre',
    'label' => 'Titre du résultat par défaut',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'taxonomy_term-arbo-field_arbo_affichage'
  $field_instances['taxonomy_term-arbo-field_arbo_affichage'] = array(
    'bundle' => 'arbo',
    'default_value' => array(
      0 => array(
        'value' => 5,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_arbo_affichage',
    'label' => 'Choix de l\'affichage',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-arbo-field_arbo_contenu_associe'
  $field_instances['taxonomy_term-arbo-field_arbo_contenu_associe'] = array(
    'bundle' => 'arbo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_arbo_contenu_associe',
    'label' => 'Contenu associé',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'taxonomy_term-arbo-field_arbo_contenu_associes'
  $field_instances['taxonomy_term-arbo-field_arbo_contenu_associes'] = array(
    'bundle' => 'arbo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_arbo_contenu_associes',
    'label' => 'Contenu associés',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'taxonomy_term-arbo-field_arbo_mode'
  $field_instances['taxonomy_term-arbo-field_arbo_mode'] = array(
    'bundle' => 'arbo',
    'default_value' => array(
      0 => array(
        'value' => 'auto',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_arbo_mode',
    'label' => 'Choix du mode',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accroche');
  t('Ajout de pages vues');
  t('Archiver');
  t('Choix de l\'affichage');
  t('Choix du mode');
  t('Contenu associé');
  t('Contenu associés');
  t('Contenus attachés');
  t('Couleur');
  t('Date de publication');
  t('Description');
  t('Explication');
  t('Explication de la question');
  t('Explication du résultat par défaut');
  t('Format');
  t('Image de 190px (largeur) * 125px (hauteur)');
  t('Image de 230px (largeur) * 150px (hauteur)');
  t('Image de la réponse');
  t('Image du quizz');
  t('Jusqu\'à');
  t('La bonne réponse est');
  t('Libellé archive');
  t('Libellé de la réponse');
  t('Lien');
  t('Liens d\'origine du contenu');
  t('Mode de fonctionnement');
  t('Permet de délimiter le nombre de bonne réponse maximum recevant ce texte de résultat');
  t('Questions');
  t('Rubrique principale');
  t('Rubrique secondaire');
  t('Résultats bornés');
  t('Surcharge de la date de modification');
  t('Titre');
  t('Titre de la zone');
  t('Titre du contenu sur la page');
  t('Titre du résultat');
  t('Titre du résultat par défaut');
  t('Type de quizz');
  t('Un libellé par défaut sera affiché en mode "automatique".
exemple : Plus de dossiers / Plus de tests / ...');
  t('Un lien sera mis en place par défaut en mode "automatique"');
  t('Visuel principal');
  t('Vous pouvez lister ici l\'ensemble des urls (de Darty.com et de 36000 solutions) devant faire une redirection vers ce contenu');

  return $field_instances;
}
