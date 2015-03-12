<?php
/**
 * Permet de placer la configuration de la page d'édition de tous les sondages dans les urls d'admin
 */
function darty_sondage_admin_paths() {
  $paths = array(
    'sondages/edit' => TRUE,
  );
  return $paths;
}

/*
 * Formulaire d'administration de la page de configuration "Tous les sondages"
 */
function tous_les_sondages_admin() {
  $form = array();

  $form['sondages_tls_titre'] = array(
    '#type' => 'textfield',
    '#title' => t('Titre de la page'),
    '#default_value' => variable_get('sondages_tls_titre', 'Tous les sondages'),
    '#size' => 50,
    '#maxlength' => 100,
    '#required' => TRUE,
  );
  $form['sondages_tls_titre_seo'] = array(
    '#type' => 'textfield',
    '#title' => t('Titre de la page (pour le moteur de recherche)'),
    '#default_value' => variable_get('sondages_tls_titre_seo', 'Tous les sondages seo'),
    '#size' => 50,
    '#maxlength' => 100,
    '#required' => TRUE,
  );
  $form['sondages_tls_accroche'] = array(
    '#type' => 'textarea',
    '#title' => t('Accroche de la page'),
    '#default_value' => variable_get('sondages_tls_accroche', ''),
    '#size' => 100,
    '#maxlength' => 255,
  );
  $form['sondages_tls_encours'] = array(
    '#type' => 'textfield',
    '#title' => t('Titre de la zone "en cours"'),
    '#default_value' => variable_get('sondages_tls_encours', 'Sondages en cours'),
    '#size' => 50,
    '#maxlength' => 100,
    '#required' => TRUE,
  );
  $form['sondages_tls_termines'] = array(
    '#type' => 'textfield',
    '#title' => t('Titre de la zone "terminés"'),
    '#default_value' => variable_get('sondages_tls_termines', 'Sondages terminés'),
    '#size' => 50,
    '#maxlength' => 100,
    '#required' => TRUE,
  );
  $form['sondages_tls_metadesc'] = array(
    '#type' => 'textarea',
    '#title' => t('Meta-description de la page'),
    '#default_value' => variable_get('sondages_tls_metadesc', ''),
    '#size' => 100,
    '#maxlength' => 255,
  );
  $form['sondages_tls_sondage_encours_par_page'] = array(
    '#type' => 'textfield',
    '#title' => t('Nombre de sondage "En cours" par page'),
    '#default_value' => variable_get('sondages_tls_sondage_encours_par_page', 6),
    '#size' => 10,
    '#maxlength' => 3,
  );
  $form['sondages_tls_sondage_termine_par_page'] = array(
    '#type' => 'textfield',
    '#title' => t('Nombre de sondage termines par page'),
    '#default_value' => variable_get('sondages_tls_sondage_termine_par_page', 9),
    '#size' => 10,
    '#maxlength' => 3,
  );
  return system_settings_form($form);
}

//function tous_les_sondages_admin_validate($form, &$form_state) {
//  $maxdisp = $form_state['values']['onthisdate_maxdisp'];
//  if (!is_numeric($maxdisp)) {
//    form_set_error('onthisdate_maxdisp', t('You must enter an integer for the maximum number of links.'));
//  }
//  elseif ($maxdisp <= 0) {
//    form_set_error('onthisdate_maxdisp', t('Maximum number of links must be positive.'));
//  }
//}