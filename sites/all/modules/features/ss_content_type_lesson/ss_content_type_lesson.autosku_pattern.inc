<?php
/**
 * @file
 * ss_content_type_lesson.autosku_pattern.inc
 */

/**
 * Implements hook_default_commerce_autosku_patterns().
 */
function ss_content_type_lesson_default_commerce_autosku_patterns() {
  $export = array();

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'lesson';
  $commerce_autosku_patterns->pattern = '';
  $commerce_autosku_patterns->advanced = array(
    'update_existing' => 1,
    'hide_sku' => 1,
    'case' => 'original',
  );
  $export['lesson'] = $commerce_autosku_patterns;

  return $export;
}
