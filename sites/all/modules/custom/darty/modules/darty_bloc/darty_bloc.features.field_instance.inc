<?php
/**
 * @file
 * darty_bloc.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function darty_bloc_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-bloc_plus_moins-field_liste_elem_moins'
  $field_instances['bean-bloc_plus_moins-field_liste_elem_moins'] = array(
    'bundle' => 'bloc_plus_moins',
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
    'field_name' => 'field_liste_elem_moins',
    'label' => 'Liste',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-bloc_plus_moins-field_liste_elem_plus'
  $field_instances['bean-bloc_plus_moins-field_liste_elem_plus'] = array(
    'bundle' => 'bloc_plus_moins',
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
    'field_name' => 'field_liste_elem_plus',
    'label' => 'Liste',
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

  // Exported field_instance: 'bean-bloc_plus_moins-field_titre_les_moins'
  $field_instances['bean-bloc_plus_moins-field_titre_les_moins'] = array(
    'bundle' => 'bloc_plus_moins',
    'default_value' => array(
      0 => array(
        'value' => 'LES MOINS',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_titre_les_moins',
    'label' => 'Titre "les moins"',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-bloc_plus_moins-field_titre_les_plus'
  $field_instances['bean-bloc_plus_moins-field_titre_les_plus'] = array(
    'bundle' => 'bloc_plus_moins',
    'default_value' => array(
      0 => array(
        'value' => 'LES PLUS',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_titre_les_plus',
    'label' => 'Titre "les plus"',
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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Liste');
  t('Titre "les moins"');
  t('Titre "les plus"');

  return $field_instances;
}
