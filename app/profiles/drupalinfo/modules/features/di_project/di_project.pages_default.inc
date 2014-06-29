<?php
/**
 * @file
 * di_project.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function di_project_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'status_homepage';
  $page->task = 'page';
  $page->admin_title = 'Status (homepage)';
  $page->admin_description = 'Provides the overall status dashboard';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_status_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'status_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'section-extensions',
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
  $display->title = 'Upgrade status';
  $display->uuid = '17db433e-612e-4395-8fe0-b429f2ed5ae7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c10d290e-713f-4fb5-9b87-d0e3159b5e33';
    $pane->panel = 'left';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'extension-intro',
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
    $pane->uuid = 'c10d290e-713f-4fb5-9b87-d0e3159b5e33';
    $display->content['new-c10d290e-713f-4fb5-9b87-d0e3159b5e33'] = $pane;
    $display->panels['left'][0] = 'new-c10d290e-713f-4fb5-9b87-d0e3159b5e33';
    $pane = new stdClass();
    $pane->pid = 'new-c611ca22-f602-4d33-8d47-a3f9749ef9fe';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_status_overview-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Upgrade progress',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c611ca22-f602-4d33-8d47-a3f9749ef9fe';
    $display->content['new-c611ca22-f602-4d33-8d47-a3f9749ef9fe'] = $pane;
    $display->panels['left'][1] = 'new-c611ca22-f602-4d33-8d47-a3f9749ef9fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['status_homepage'] = $page;

  return $pages;

}
