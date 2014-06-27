<?php
/**
 * @file
 * di_project.features.inc
 */

/**
 * Implements hook_node_info().
 */
function di_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Provides a project content-type for tracking the upgrade status of a module or theme'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
  );
  return $items;
}
