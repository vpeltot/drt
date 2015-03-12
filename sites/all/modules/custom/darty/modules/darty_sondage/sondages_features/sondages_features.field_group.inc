<?php
/**
 * @file
 * sondages_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sondages_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bloc_sondage|node|homepage|form';
  $field_group->group_name = 'group_bloc_sondage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bloc sondage',
    'weight' => '3',
    'children' => array(
      0 => 'field_home_sondage',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bloc-sondage field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bloc_sondage|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sondage_date|node|sondage|form';
  $field_group->group_name = 'group_sondage_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sondage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date du sondage',
    'weight' => '4',
    'children' => array(
      0 => 'field_sondage_datedeb',
      1 => 'field_sondage_datefin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sondage-date field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sondage_date|node|sondage|form'] = $field_group;

  return $export;
}
