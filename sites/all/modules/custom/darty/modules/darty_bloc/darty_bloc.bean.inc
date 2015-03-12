<?php
/**
 * @file
 * darty_bloc.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function darty_bloc_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_bio_express';
  $bean_type->label = 'Bloc bio express';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_bio_express'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_edito';
  $bean_type->label = 'Bloc edito';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_edito'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_forum';
  $bean_type->label = 'Bloc forum';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_forum'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_lien_rubrique';
  $bean_type->label = 'Bloc lien rubrique';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_lien_rubrique'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_plus_moins';
  $bean_type->label = 'Bloc plus/moins';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_plus_moins'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_remonte_produit';
  $bean_type->label = 'Bloc remonté produit';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_remonte_produit'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_services_darty';
  $bean_type->label = 'Bloc services Darty';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_services_darty'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_sondage';
  $bean_type->label = 'Bloc sondage';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_sondage'] = $bean_type;

  return $export;
}
