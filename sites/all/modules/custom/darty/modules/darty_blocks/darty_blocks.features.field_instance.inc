<?php
/**
 * @file
 * darty_blocks.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function darty_blocks_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-darty_block_gigya-field_message_mail'
  $field_instances['bean-darty_block_gigya-field_message_mail'] = array(
    'bundle' => 'darty_block_gigya',
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
    'entity_type' => 'bean',
    'field_name' => 'field_message_mail',
    'label' => 'Message texte (mail)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'bean-darty_block_gigya-field_message_share'
  $field_instances['bean-darty_block_gigya-field_message_share'] = array(
    'bundle' => 'darty_block_gigya',
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
    'entity_type' => 'bean',
    'field_name' => 'field_message_share',
    'label' => 'Message texte (réseaux sociaux)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'bean-darty_block_image-field_image'
  $field_instances['bean-darty_block_image-field_image'] = array(
    'bundle' => 'darty_block_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'bean-darty_block_image-field_image_width'
  $field_instances['bean-darty_block_image-field_image_width'] = array(
    'bundle' => 'darty_block_image',
    'default_value' => array(
      0 => array(
        'value' => 'little',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_width',
    'label' => 'Taille de l\'image',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'bean-darty_block_image-field_link'
  $field_instances['bean-darty_block_image-field_link'] = array(
    'bundle' => 'darty_block_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'user',
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_image'
  $field_instances['bean-darty_block_menu_image-field_image'] = array(
    'bundle' => 'darty_block_menu_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_image2'
  $field_instances['bean-darty_block_menu_image-field_image2'] = array(
    'bundle' => 'darty_block_menu_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image2',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_image3'
  $field_instances['bean-darty_block_menu_image-field_image3'] = array(
    'bundle' => 'darty_block_menu_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image3',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_image4'
  $field_instances['bean-darty_block_menu_image-field_image4'] = array(
    'bundle' => 'darty_block_menu_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image4',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_link'
  $field_instances['bean-darty_block_menu_image-field_link'] = array(
    'bundle' => 'darty_block_menu_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_link2'
  $field_instances['bean-darty_block_menu_image-field_link2'] = array(
    'bundle' => 'darty_block_menu_image',
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
    'entity_type' => 'bean',
    'field_name' => 'field_link2',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_link3'
  $field_instances['bean-darty_block_menu_image-field_link3'] = array(
    'bundle' => 'darty_block_menu_image',
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
    'field_name' => 'field_link3',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image-field_link4'
  $field_instances['bean-darty_block_menu_image-field_link4'] = array(
    'bundle' => 'darty_block_menu_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link4',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image'
  $field_instances['bean-darty_block_menu_image_links-field_image'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image2'
  $field_instances['bean-darty_block_menu_image_links-field_image2'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image2',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image3'
  $field_instances['bean-darty_block_menu_image_links-field_image3'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_image3',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image4'
  $field_instances['bean-darty_block_menu_image_links-field_image4'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image4',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image_hover'
  $field_instances['bean-darty_block_menu_image_links-field_image_hover'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_hover',
    'label' => 'Image au survol',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'image' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image_hover2'
  $field_instances['bean-darty_block_menu_image_links-field_image_hover2'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_hover2',
    'label' => 'Image au survol',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'image' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image_hover3'
  $field_instances['bean-darty_block_menu_image_links-field_image_hover3'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_hover3',
    'label' => 'Image au survol',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'image' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_image_hover4'
  $field_instances['bean-darty_block_menu_image_links-field_image_hover4'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_hover4',
    'label' => 'Image au survol',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'image' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_link'
  $field_instances['bean-darty_block_menu_image_links-field_link'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link',
    'label' => 'Lien',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'user',
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_link2'
  $field_instances['bean-darty_block_menu_image_links-field_link2'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link2',
    'label' => 'Lien',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'user',
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_link3'
  $field_instances['bean-darty_block_menu_image_links-field_link3'] = array(
    'bundle' => 'darty_block_menu_image_links',
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
    'field_name' => 'field_link3',
    'label' => 'Lien',
    'required' => 1,
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
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'bean-darty_block_menu_image_links-field_link4'
  $field_instances['bean-darty_block_menu_image_links-field_link4'] = array(
    'bundle' => 'darty_block_menu_image_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link4',
    'label' => 'Lien',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'user',
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_image-field_body'
  $field_instances['bean-darty_block_text_image-field_body'] = array(
    'bundle' => 'darty_block_text_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_body',
    'label' => 'Texte du contenu',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_image-field_display'
  $field_instances['bean-darty_block_text_image-field_display'] = array(
    'bundle' => 'darty_block_text_image',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_display',
    'label' => 'Affichage',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_image-field_image'
  $field_instances['bean-darty_block_text_image-field_image'] = array(
    'bundle' => 'darty_block_text_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_image-field_link'
  $field_instances['bean-darty_block_text_image-field_link'] = array(
    'bundle' => 'darty_block_text_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link',
    'label' => 'Lien',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_link-field_block_color'
  $field_instances['bean-darty_block_text_link-field_block_color'] = array(
    'bundle' => 'darty_block_text_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Code héxadécimal de la couleur du bloc (sans le #)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_color',
    'label' => 'Couleur du bloc',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_link-field_image'
  $field_instances['bean-darty_block_text_link-field_image'] = array(
    'bundle' => 'darty_block_text_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'title',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'referencable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(),
      'type' => 'atom_reference_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_link-field_link'
  $field_instances['bean-darty_block_text_link-field_link'] = array(
    'bundle' => 'darty_block_text_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link',
    'label' => 'Lien',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
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
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'bean-darty_block_text_link-field_title_color'
  $field_instances['bean-darty_block_text_link-field_title_color'] = array(
    'bundle' => 'darty_block_text_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Code héxadécimal de la couleur du titre (sans le #)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_title_color',
    'label' => 'Couleur du titre',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Affichage');
  t('Code héxadécimal de la couleur du bloc (sans le #)');
  t('Code héxadécimal de la couleur du titre (sans le #)');
  t('Couleur du bloc');
  t('Couleur du titre');
  t('Image');
  t('Image au survol');
  t('Lien');
  t('Message texte (mail)');
  t('Message texte (réseaux sociaux)');
  t('Taille de l\'image');
  t('Texte du contenu');

  return $field_instances;
}
