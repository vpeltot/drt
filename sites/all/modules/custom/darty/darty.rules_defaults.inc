<?php
/**
 * @file
 * darty.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function darty_default_rules_configuration() {
  $items = array();
  $items['rules_darty_newsletter_redirect'] = entity_import('rules_config', '{ "rules_darty_newsletter_redirect" : {
      "LABEL" : "Darty Newsletter Redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Darty" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--newsletter" : { "bundle" : "newsletter" } },
      "DO" : [ { "redirect" : { "url" : "admin\\/content" } } ]
    }
  }');
  return $items;
}
