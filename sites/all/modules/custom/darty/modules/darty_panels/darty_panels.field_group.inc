<?php
/**
 * @file
 * darty_panels.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function darty_panels_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_graphical_options|node|panel|form';
  $field_group->group_name = 'group_graphical_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options graphiques',
    'weight' => '6',
    'children' => array(
      0 => 'field_background_color',
      1 => 'field_background_image',
      2 => 'field_gradient',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Options graphiques',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-graphical-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_graphical_options|node|panel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|panel|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadonnées',
    'weight' => '5',
    'children' => array(
      0 => 'meta_description',
      1 => 'meta_robots',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Metadonnées',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-metadata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_metadata|node|panel|form'] = $field_group;

  return $export;
}
