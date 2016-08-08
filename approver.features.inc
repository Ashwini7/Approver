<?php
/**
 * @file
 * approver.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function approver_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'editorial_workflow'
  $workflows['editorial_workflow'] = entity_import('Workflow', '{
    "name" : "editorial_workflow",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-20","sysid":"0","state":"In-review","status":"1","name":"in_review"},
      "3" : {"sid":"3","wid":"1","weight":"-19","sysid":"0","state":"Proof Reading","status":"1","name":"proof_reading"},
      "4" : {"sid":"4","wid":"1","weight":"-18","sysid":"0","state":"Publish","status":"1","name":"publish"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1},"wid":"1","name":"5_6","label":"","rdf_mapping":[]},
      "2" : {"tid":"2","sid":"1","target_sid":"3","roles":[],"wid":"1","name":"5_7","label":"","rdf_mapping":[]},
      "3" : {"tid":"3","sid":"1","target_sid":"4","roles":[],"wid":"1","name":"5_8","label":"","rdf_mapping":[]},
      "4" : {"tid":"4","sid":"2","target_sid":"2","roles":{"-1":-1,"1":"1","2":"2","3":"3"},"wid":"1","name":"6_6","label":"","rdf_mapping":[]},
      "5" : {"tid":"5","sid":"2","target_sid":"3","roles":[],"wid":"1","name":"6_7","label":"","rdf_mapping":[]},
      "6" : {"tid":"6","sid":"3","target_sid":"2","roles":[],"wid":"1","name":"7_6","label":"","rdf_mapping":[]},
      "7" : {"tid":"7","sid":"3","target_sid":"3","roles":{"-1":-1,"1":"1","2":"2","3":"3"},"wid":"1","name":"7_7","label":"","rdf_mapping":[]},
      "8" : {"tid":"8","sid":"3","target_sid":"4","roles":[],"wid":"1","name":"7_8","label":"","rdf_mapping":[]},
      "9" : {"tid":"9","sid":"4","target_sid":"2","roles":[],"wid":"1","name":"8_6","label":"","rdf_mapping":[]},
      "10" : {"tid":"10","sid":"4","target_sid":"3","roles":[],"wid":"1","name":"8_7","label":"","rdf_mapping":[]},
      "11" : {"tid":"11","sid":"4","target_sid":"4","roles":{"-1":-1,"1":"1","2":"2","3":"3"},"wid":"1","name":"8_8","label":"","rdf_mapping":[]}
    },
    "label" : "Editorial Workflow",
    "typeMap" : [],
    "rdf_mapping" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "3" : "administrator",
      "4" : "Approver 1",
      "5" : "Approver 2",
      "6" : "webmaster"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function approver_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function approver_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function approver_node_info() {
  $items = array(
    'articles' => array(
      'name' => t('Articles'),
      'base' => 'node_content',
      'description' => t('This content type contains Articles information architecture.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('This content type contains Events information architecture.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('This content type contains News information architecture.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function approver_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'content-listing',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'approver',
    ),
    'string' => '"drupal:path = content-listing >>> seven"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'articles',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'approver',
    ),
    'string' => '"node:type = articles >>> seven"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'events',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'approver',
    ),
    'string' => '"node:type = events >>> seven"',
    'childs' => array(),
  ),
  3 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'news',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'approver',
    ),
    'string' => '"node:type = news >>> seven"',
    'childs' => array(),
  ),
);

return $rules;
}
