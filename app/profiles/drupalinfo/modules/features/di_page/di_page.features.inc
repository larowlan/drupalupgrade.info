<?php
/**
 * @file
 * di_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function di_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use this content type for basic pages like \'about\' and \'credits\''),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
