<?php
/**
 * @file
 * ss_content_type_lesson.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ss_content_type_lesson_taxonomy_default_vocabularies() {
  return array(
    'lesson_category' => array(
      'name' => 'Lesson Category',
      'machine_name' => 'lesson_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
