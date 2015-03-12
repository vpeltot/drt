<?php
/**
 * @file
 * testasup.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function testasup_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_contenu_blocs_droite'
  $field_bases['field_contenu_blocs_droite'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contenu_blocs_droite',
    'foreign keys' => array(
      'bean' => array(
        'columns' => array(
          'target_id' => 'bid',
        ),
        'table' => 'bean',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'bloc_forum' => 'bloc_forum',
          'bloc_lien_rubrique' => 'bloc_lien_rubrique',
          'bloc_remonte_produit' => 'bloc_remonte_produit',
          'bloc_services_darty' => 'bloc_services_darty',
        ),
      ),
      'target_type' => 'bean',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
