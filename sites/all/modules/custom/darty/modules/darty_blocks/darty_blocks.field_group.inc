<?php
/**
 * @file
 * darty_blocks.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function darty_blocks_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link1|bean|darty_block_menu_image_links|form';
  $field_group->group_name = 'group_link1';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°1',
    'weight' => '5',
    'children' => array(
      0 => 'field_link',
      1 => 'field_image',
      2 => 'field_image_hover',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link1 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link1|bean|darty_block_menu_image_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link1|bean|darty_block_menu_image|form';
  $field_group->group_name = 'group_link1';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°1',
    'weight' => '5',
    'children' => array(
      0 => 'field_link',
      1 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link1 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link1|bean|darty_block_menu_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link2|bean|darty_block_menu_image_links|form';
  $field_group->group_name = 'group_link2';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°2',
    'weight' => '6',
    'children' => array(
      0 => 'field_link2',
      1 => 'field_image2',
      2 => 'field_image_hover2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link2|bean|darty_block_menu_image_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link2|bean|darty_block_menu_image|form';
  $field_group->group_name = 'group_link2';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°2',
    'weight' => '6',
    'children' => array(
      0 => 'field_link2',
      1 => 'field_image2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link2|bean|darty_block_menu_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link3|bean|darty_block_menu_image_links|form';
  $field_group->group_name = 'group_link3';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°3',
    'weight' => '7',
    'children' => array(
      0 => 'field_link3',
      1 => 'field_image3',
      2 => 'field_image_hover3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link3 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link3|bean|darty_block_menu_image_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link3|bean|darty_block_menu_image|form';
  $field_group->group_name = 'group_link3';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°3',
    'weight' => '7',
    'children' => array(
      0 => 'field_link3',
      1 => 'field_image3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link3 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link3|bean|darty_block_menu_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link4|bean|darty_block_menu_image_links|form';
  $field_group->group_name = 'group_link4';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°4',
    'weight' => '8',
    'children' => array(
      0 => 'field_link4',
      1 => 'field_image4',
      2 => 'field_image_hover4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link4 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link4|bean|darty_block_menu_image_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link4|bean|darty_block_menu_image|form';
  $field_group->group_name = 'group_link4';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'darty_block_menu_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°4',
    'weight' => '8',
    'children' => array(
      0 => 'field_image4',
      1 => 'field_link4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link4 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link4|bean|darty_block_menu_image|form'] = $field_group;

  return $export;
}
