<?php
/**
 * @file
 * darty_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function darty_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_darty_workflow_state_approved'] = entity_import('rules_config', '{ "rules_darty_workflow_state_approved" : {
      "LABEL" : "Darty Workflow - Etat \\u0022A valider\\u0022",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "darty_workflow" ],
      "REQUIRES" : [ "rules", "state_flow" ],
      "ON" : { "state_flow_event_fired" : [] },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "panel" : "panel" } } } },
        { "state_flow_state" : { "node" : [ "node" ], "workflow_state" : "approved" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Le contenu [node:title] est en attente de validation",
            "message" : "Bonjour,\\r\\n\\r\\nLe contenu [node:title] a \\u00e9t\\u00e9 cr\\u00e9\\u00e9 et est en attente de validation. Vous pouvez le consulter \\u00e0 l\\u0027adresse [node:url] afin de la publier.\\r\\n\\r\\nCommentaire :\\r\\n[node:workflow-log]",
            "from" : "no-reply@darty.com"
          }
        }
      ]
    }
  }');
  $items['rules_darty_workflow_state_draft'] = entity_import('rules_config', '{ "rules_darty_workflow_state_draft" : {
      "LABEL" : "Darty Workflow - Etat \\u0022Brouillon\\u0022",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "darty_workflow" ],
      "REQUIRES" : [ "rules", "state_flow" ],
      "ON" : { "state_flow_event_fired" : [] },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "panel" : "panel" } } } },
        { "state_flow_state" : { "node" : [ "node" ], "workflow_state" : "draft" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "Le contenu [node:title] doit \\u00eatre corrig\\u00e9",
            "message" : "Bonjour,\\r\\n\\r\\nLe contenu [node:title] n\\u2019a pas \\u00e9t\\u00e9 valid\\u00e9 et a besoin d\\u2019\\u00eatre modifi\\u00e9. Vous pouvez le consulter \\u00e0 l\\u2019adresse [node:url] afin de le corriger.\\r\\n\\r\\nCommentaire : \\r\\n[node:workflow-log]",
            "from" : "no-reply@darty.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_darty_workflow_state_publish'] = entity_import('rules_config', '{ "rules_darty_workflow_state_publish" : {
      "LABEL" : "Darty Workflow - Etat \\u0022Publi\\u00e9\\u0022",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "darty_workflow" ],
      "REQUIRES" : [ "rules", "state_flow" ],
      "ON" : { "state_flow_event_fired" : [] },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "panel" : "panel" } } } },
        { "state_flow_state" : { "node" : [ "node" ], "workflow_state" : "published" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "Le contenu [node:title] a \\u00e9t\\u00e9 publi\\u00e9",
            "message" : "Bonjour,\\r\\n\\r\\nLe contenu [node:title] a \\u00e9t\\u00e9 publi\\u00e9. Vous pouvez le consulter \\u00e0 l\\u2019adresse suivante : [node:url].\\r\\n\\r\\nCommentaire : \\r\\n[node:workflow-log]",
            "from" : "no-reply@darty.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
