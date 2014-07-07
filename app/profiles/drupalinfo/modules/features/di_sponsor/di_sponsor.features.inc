<?php
/**
 * @file
 * di_sponsor.features.inc
 */

/**
 * Implements hook_views_api().
 */
function di_sponsor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function di_sponsor_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Use this content type to give credit to a sponsor'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
