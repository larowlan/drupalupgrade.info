<?php
/**
 * @file
 * di_maintainer.features.inc
 */

/**
 * Implements hook_node_info().
 */
function di_maintainer_node_info() {
  $items = array(
    'maintainer' => array(
      'name' => t('Maintainer'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a maintainer profile'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
