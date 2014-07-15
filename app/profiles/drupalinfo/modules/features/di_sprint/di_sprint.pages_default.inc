<?php
/**
 * @file
 * di_sprint.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function di_sprint_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sprints';
  $page->task = 'page';
  $page->admin_title = 'Sprints';
  $page->admin_description = 'Provides news updates';
  $page->path = 'sprints';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sprints',
    'name' => 'main-menu',
    'weight' => '20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sprints_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sprints';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'section-sprints',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'sparrow-twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Upcoming sprints';
  $display->uuid = '5f53fa80-5d85-49f1-b247-962367e789e3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae4ef4c9-ce00-407a-b3ef-f514508e74df';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'sprints-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ae4ef4c9-ce00-407a-b3ef-f514508e74df';
    $display->content['new-ae4ef4c9-ce00-407a-b3ef-f514508e74df'] = $pane;
    $display->panels['left'][0] = 'new-ae4ef4c9-ce00-407a-b3ef-f514508e74df';
    $pane = new stdClass();
    $pane->pid = 'new-4036803d-5adb-49c9-b8c9-856cfed3d0ac';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'items_per_page' => '5',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4036803d-5adb-49c9-b8c9-856cfed3d0ac';
    $display->content['new-4036803d-5adb-49c9-b8c9-856cfed3d0ac'] = $pane;
    $display->panels['right'][0] = 'new-4036803d-5adb-49c9-b8c9-856cfed3d0ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sprints'] = $page;

  return $pages;

}
