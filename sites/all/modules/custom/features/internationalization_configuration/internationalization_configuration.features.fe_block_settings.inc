<?php
/**
 * @file
 * internationalization_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function internationalization_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => 'admin*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
