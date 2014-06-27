<?php

// Plugin definition
$plugin = array(
  'title' => t('Sparrow Two column'),
  'category' => t('Columns: 2'),
  'icon' => 'sparrow-twocol.png',
  'theme' => 'sparrow_twocol',
  'css' => 'sparrow-twocol.css',
  'admin' => 'sparrow-twocol.admin.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);
