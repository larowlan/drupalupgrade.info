<?php
/**
 * @file
 * di_blocks.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function di_blocks_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'basic';
  $bean_type->label = 'Basic';
  $bean_type->options = '';
  $bean_type->description = 'Provides a basic block type';
  $export['basic'] = $bean_type;

  return $export;
}
