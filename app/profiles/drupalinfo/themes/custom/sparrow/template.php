<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 */

/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function sparrow_preprocess_node(&$vars, $hook) {
  $node = $vars['node'];

  // Redefine template inheritance with the following order:
  // 1. node--{view-mode}.tpl.php
  // 2. node--{type}.tpl.php
  // 3. node--{type}--{view-mode}.tpl.php
  if ($vars['view_mode']) {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['view_mode'];
  }

  if ($vars['view_mode']) {
    $vars['theme_hook_suggestions'][] = 'node__' . $node->type . '__' . $vars['view_mode'];
  }

  // Node-type-specific preprocess functions.
  $function = __FUNCTION__ . '_' . $node->type;
  if (function_exists($function)) {
    $function($vars, $hook);
  }
}

/**
 * Preprocess node hook for sprint.
 */
function sparrow_preprocess_node_sprint(&$vars, $hook) {
  $node = $vars['node'];
  $vars['field_sprint_date_month'] = $vars['field_sprint_date_day'] = FALSE;
  if ($date_items = field_get_items('node', $node, 'field_sprint_date')) {
    if ($date_item = reset($date_items)) {
      $vars['field_sprint_date_month'] = format_date($date_item['value'], 'custom', 'M');
      $vars['field_sprint_date_day'] = format_date($date_item['value'], 'custom', 'j');
    }
  }
}

/**
 * Implements theme_breadcrumb().
 */
function sparrow_breadcrumb($vars) {
  $breadcrumb = $vars['breadcrumb'];
  if (!empty($breadcrumb)) {
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $crumbs = '<div class="breadcrumb">';
    $array_size = count($breadcrumb);
    $i = 0;
    while ($i < $array_size) {
      $crumbs .= '<span class="breadcrumb-' . $i;
      if ($i == 0) {
        $crumbs .= ' first';
      }
      $crumbs .= '">' . $breadcrumb[$i] . '</span> &raquo; ';
      $i++;
    }
    $crumbs .= '<span class="active">' . drupal_get_title() . '</span></div>';

    return $crumbs;
  }
}
