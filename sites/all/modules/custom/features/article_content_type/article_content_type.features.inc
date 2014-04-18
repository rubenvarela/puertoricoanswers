<?php
/**
 * @file
 * article_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function article_content_type_node_info() {
  $items = array(
    'articles' => array(
      'name' => t('Articles'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
