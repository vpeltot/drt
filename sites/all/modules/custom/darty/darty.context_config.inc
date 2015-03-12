<?php
/**
 * @file
 * darty.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function darty_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_150x142';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_150x142',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_150x142'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_165x165';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_165x165',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_165x165'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_400x250';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_400x250',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_400x250'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_590x180';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_590x180',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_590x180'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_100x100';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_100x100',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_100x100'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_200';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_200',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_200'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_206';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_206',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_206'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_245';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_245',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_245'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_370';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_370',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_370'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_590';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_590',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_590'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_80';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_80',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_80'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'darty_context_width_990';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-darty_width_990',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['darty_context_width_990'] = $context_config;

  return $export;
}
