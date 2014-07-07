<?php
/**
 * @file
 * di_update.features.inc
 */

/**
 * Implements hook_views_api().
 */
function di_update_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function di_update_node_info() {
  $items = array(
    'update' => array(
      'name' => t('Update'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a short update on progress towards porting of a module or theme.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
