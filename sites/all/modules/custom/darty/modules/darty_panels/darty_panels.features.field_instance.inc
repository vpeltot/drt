<?php
/**
 * @file
 * darty_panels.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function darty_panels_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-panel-field_background_color'
  $field_instances['node-panel-field_background_color'] = array(
    'bundle' => 'panel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Code héxadécimal de la couleur de fond du panel (pas de # avant le code)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_background_color',
    'label' => 'Couleur de fond',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-panel-field_background_image'
  $field_instances['node-panel-field_background_image'] = array(
    'bundle' => 'panel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_background_image',
    'label' => 'Image de fond',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-panel-field_gradient'
  $field_instances['node-panel-field_gradient'] = array(
    'bundle' => 'panel',
    'default_value' => array(
      0 => array(
        'value' => 'gradient_grey',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_gradient',
    'label' => 'Dégradé',
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

  // Exported field_instance: 'node-panel-meta_description'
  $field_instances['node-panel-meta_description'] = array(
    'bundle' => 'panel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
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
    'field_name' => 'meta_description',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Description',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-panel-meta_robots'
  $field_instances['node-panel-meta_robots'] = array(
    'bundle' => 'panel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
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
    'field_name' => 'meta_robots',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Robots',
    'required' => FALSE,
    'settings' => array(
      'options' => 'noarchive,nofollow,noindex,noodp,nosnippet,noydir',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_checkboxes',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(Meta)Description');
  t('(Meta)Robots');
  t('Code héxadécimal de la couleur de fond du panel (pas de # avant le code)');
  t('Couleur de fond');
  t('Dégradé');
  t('Image de fond');

  return $field_instances;
}
