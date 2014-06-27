<?php
/**
 * @file
 * di_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function di_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
