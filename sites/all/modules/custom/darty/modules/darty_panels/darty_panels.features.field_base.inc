<?php
/**
 * @file
 * darty_panels.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function darty_panels_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_background_color'
  $field_bases['field_background_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background_color',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 6,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_background_image'
  $field_bases['field_background_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background_image',
    'foreign keys' => array(),
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  // Exported field_base: 'field_gradient'
  $field_bases['field_gradient'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gradient',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'gradient_grey' => 'Gris',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'meta_description'
  $field_bases['meta_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_description',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'description',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  // Exported field_base: 'meta_robots'
  $field_bases['meta_robots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_robots',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'robots',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  return $field_bases;
}
