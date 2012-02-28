<?php
/**
 * @file
 * magpo_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function magpo_feature_node_info() {
  $items = array(
    'poem' => array(
      'name' => t('Poem'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
