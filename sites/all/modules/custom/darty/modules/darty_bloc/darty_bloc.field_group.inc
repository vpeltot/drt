<?php
/**
 * @file
 * darty_bloc.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function darty_bloc_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zone_moins|bean|bloc_plus_moins|form';
  $field_group->group_name = 'group_zone_moins';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'bloc_plus_moins';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zone moins',
    'weight' => '6',
    'children' => array(
      0 => 'field_titre_les_moins',
      1 => 'field_liste_elem_moins',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-zone-moins field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_zone_moins|bean|bloc_plus_moins|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zone_plus|bean|bloc_plus_moins|form';
  $field_group->group_name = 'group_zone_plus';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'bloc_plus_moins';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zone plus',
    'weight' => '5',
    'children' => array(
      0 => 'field_titre_les_plus',
      1 => 'field_liste_elem_plus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-zone-plus field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_zone_plus|bean|bloc_plus_moins|form'] = $field_group;

  return $export;
}
