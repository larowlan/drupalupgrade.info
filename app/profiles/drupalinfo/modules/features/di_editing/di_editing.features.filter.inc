<?php
/**
 * @file
 * di_editing.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function di_editing_filter_default_formats() {
  $formats = array();

  // Exported format: Rich text.
  $formats['rich_text'] = array(
    'format' => 'rich_text',
    'name' => 'Rich text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
