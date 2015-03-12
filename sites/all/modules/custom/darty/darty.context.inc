<?php
/**
 * @file
 * darty.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function darty_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'darty_http_headers';
  $context->description = '';
  $context->tag = 'Darty';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*' => 'node/*',
        '~node/*/*' => '~node/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'http_header' => array(
      'http_header' => array(
        'extra_headers' => 'Cache-Control:public,max-age=900',
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Darty');
  $export['darty_http_headers'] = $context;

  return $export;
}
