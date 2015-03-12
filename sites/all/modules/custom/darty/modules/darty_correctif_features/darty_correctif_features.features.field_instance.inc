<?php
/**
 * @file
 * darty_correctif_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function darty_correctif_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-bloc_lien_rubrique-field_bloc_choix_rub_image'
  $field_instances['bean-bloc_lien_rubrique-field_bloc_choix_rub_image'] = array(
    'bundle' => 'bloc_lien_rubrique',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image de 300px de large et 250px de haut',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_bloc_choix_rub_image',
    'label' => 'Image de la catégorie',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-bloc_services_darty-field_bloc_lien'
  $field_instances['bean-bloc_services_darty-field_bloc_lien'] = array(
    'bundle' => 'bloc_services_darty',
    'default_value' => array(
      0 => array(
        'title' => 'Tous les services Darty',
        'url' => 'http://www.darty.com/achat/services/index.html',
        'attributes' => array(
          'target' => 0,
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_bloc_lien',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-item_diapo-field_item_diapo_lien'
  $field_instances['bean-item_diapo-field_item_diapo_lien'] = array(
    'bundle' => 'item_diapo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_item_diapo_lien',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_contenu_push_categories-field_categorie_lien'
  $field_instances['field_collection_item-field_contenu_push_categories-field_categorie_lien'] = array(
    'bundle' => 'field_contenu_push_categories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_categorie_lien',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_contenu_push_categories-field_categorie_titre'
  $field_instances['field_collection_item-field_contenu_push_categories-field_categorie_titre'] = array(
    'bundle' => 'field_contenu_push_categories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_categorie_titre',
    'label' => 'Titre de la catégorie',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_contenu_push_categories-field_categorie_url'
  $field_instances['field_collection_item-field_contenu_push_categories-field_categorie_url'] = array(
    'bundle' => 'field_contenu_push_categories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_categorie_url',
    'label' => 'Url de Darty.com',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-diaporama-field_contenu_push_categories'
  $field_instances['node-diaporama-field_contenu_push_categories'] = array(
    'bundle' => 'diaporama',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contenu_push_categories',
    'label' => 'Choix des catégories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choix des catégories');
  t('Image de 300px de large et 250px de haut');
  t('Image de la catégorie');
  t('Lien');
  t('Titre de la catégorie');
  t('Url de Darty.com');

  return $field_instances;
}
