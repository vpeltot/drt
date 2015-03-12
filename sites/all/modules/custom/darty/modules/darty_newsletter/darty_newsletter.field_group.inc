<?php
/**
 * @file
 * darty_newsletter.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function darty_newsletter_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_bottom|node|newsletter|form';
  $field_group->group_name = 'group_block_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bloc du bas',
    'weight' => '8',
    'children' => array(
      0 => 'field_title_block_bottom',
      1 => 'field_picto',
      2 => 'field_color',
      3 => 'field_title_content_block_bottom',
      4 => 'field_body_block_bottom',
      5 => 'field_image_block_bottom',
      6 => 'field_link_block_bottom',
      7 => 'group_button1',
      8 => 'group_button2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bloc du bas',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-block-bottom field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_block_bottom|node|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_top|node|newsletter|form';
  $field_group->group_name = 'group_block_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bloc du haut',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_title_block_top',
      2 => 'field_image_block_top',
      3 => 'field_link_block_top',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bloc du haut',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-block-top field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_block_top|node|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_button1|field_collection_item|field_block_newsletter_left|form';
  $field_group->group_name = 'group_button1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_block_newsletter_left';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bouton n°1',
    'weight' => '8',
    'children' => array(
      0 => 'field_link3',
      1 => 'field_width_button2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bouton n°1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-button1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_button1|field_collection_item|field_block_newsletter_left|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_button1|node|newsletter|form';
  $field_group->group_name = 'group_button1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_block_bottom';
  $field_group->data = array(
    'label' => 'Bouton n°1',
    'weight' => '21',
    'children' => array(
      0 => 'field_link',
      1 => 'field_width_button',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bouton n°1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-button1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_button1|node|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_button2|field_collection_item|field_block_newsletter_left|form';
  $field_group->group_name = 'group_button2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_block_newsletter_left';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bouton n°2',
    'weight' => '9',
    'children' => array(
      0 => 'field_link2',
      1 => 'field_width_button',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bouton n°2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-button2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_button2|field_collection_item|field_block_newsletter_left|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_button2|node|newsletter|form';
  $field_group->group_name = 'group_button2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_block_bottom';
  $field_group->data = array(
    'label' => 'Bouton n°2',
    'weight' => '22',
    'children' => array(
      0 => 'field_link2',
      1 => 'field_width_button2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bouton n°2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-button2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_button2|node|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|newsletter|form';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne de gauche',
    'weight' => '6',
    'children' => array(
      0 => 'field_block_newsletter_left',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Colonne de gauche',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-left-column field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_left_column|node|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link1|field_collection_item|field_block_newsletter_right|form';
  $field_group->group_name = 'group_link1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_block_newsletter_right';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°1',
    'weight' => '5',
    'children' => array(
      0 => 'field_link2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lien n°1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-link1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_link1|field_collection_item|field_block_newsletter_right|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link2|field_collection_item|field_block_newsletter_right|form';
  $field_group->group_name = 'group_link2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_block_newsletter_right';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°2',
    'weight' => '6',
    'children' => array(
      0 => 'field_link3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lien n°2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-link2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_link2|field_collection_item|field_block_newsletter_right|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link3|field_collection_item|field_block_newsletter_right|form';
  $field_group->group_name = 'group_link3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_block_newsletter_right';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°3',
    'weight' => '7',
    'children' => array(
      0 => 'field_link4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lien n°3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-link3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_link3|field_collection_item|field_block_newsletter_right|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link4|field_collection_item|field_block_newsletter_right|form';
  $field_group->group_name = 'group_link4';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_block_newsletter_right';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lien n°4',
    'weight' => '8',
    'children' => array(
      0 => 'field_link5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lien n°4',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-link4 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_link4|field_collection_item|field_block_newsletter_right|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|newsletter|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne de droite',
    'weight' => '7',
    'children' => array(
      0 => 'field_block_newsletter_right',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Colonne de droite',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-right-column field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_right_column|node|newsletter|form'] = $field_group;

  return $export;
}
