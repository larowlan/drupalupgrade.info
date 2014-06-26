# Default Drupal development site.

node default {

  # Basic includes.
  include drupal

  # Advanced includes.
  drupal::site { 'drupalinfo':
    mysql_host => '%',
  }

}

