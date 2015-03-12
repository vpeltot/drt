<?php
/**
 * @file
 * quizz_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function quizz_features_taxonomy_default_vocabularies() {
  return array(
    'arbo' => array(
      'name' => 'Arborescence',
      'machine_name' => 'arbo',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'format' => array(
      'name' => 'Format',
      'machine_name' => 'format',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
