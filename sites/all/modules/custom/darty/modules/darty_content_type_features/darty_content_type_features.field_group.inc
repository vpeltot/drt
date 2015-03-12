<?php
/**
 * @file
 * darty_content_type_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function darty_content_type_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bloc_bas_page|node|article_sans_sommaire|form';
  $field_group->group_name = 'group_bloc_bas_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article_sans_sommaire';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bloc bas de page',
    'weight' => '5',
    'children' => array(
      0 => 'field_contenu_blocs_bas',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bloc-bas-page field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bloc_bas_page|node|article_sans_sommaire|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bloc_droite|node|article_sans_sommaire|form';
  $field_group->group_name = 'group_bloc_droite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article_sans_sommaire';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bloc de droite',
    'weight' => '6',
    'children' => array(
      0 => 'field_contenu_blocs_droite',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bloc-droite field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bloc_droite|node|article_sans_sommaire|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_configuration|node|article_sans_sommaire|form';
  $field_group->group_name = 'group_configuration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article_sans_sommaire';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Configuration',
    'weight' => '7',
    'children' => array(
      0 => 'field_contenu_date_crea',
      1 => 'field_contenu_date_modif',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-configuration field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_configuration|node|article_sans_sommaire|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contenu|node|article_sans_sommaire|form';
  $field_group->group_name = 'group_contenu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article_sans_sommaire';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '4',
    'children' => array(
      0 => 'field_contenu_titre',
      1 => 'field_contenu_accroche',
      2 => 'field_contenu_contenu',
      3 => 'field_contenu_visuel',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contenu field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contenu|node|article_sans_sommaire|form'] = $field_group;

  return $export;
}
