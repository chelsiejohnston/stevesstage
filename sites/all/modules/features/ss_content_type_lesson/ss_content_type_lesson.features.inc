<?php
/**
 * @file
 * ss_content_type_lesson.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ss_content_type_lesson_commerce_product_default_types() {
  $items = array(
    'lesson' => array(
      'type' => 'lesson',
      'name' => 'Lessons',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ss_content_type_lesson_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ss_content_type_lesson_node_info() {
  $items = array(
    'lesson' => array(
      'name' => t('Lesson'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
