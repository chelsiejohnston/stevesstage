<?php
/**
 * @file
 * ss_content_type_lesson.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ss_content_type_lesson_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lesson|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lesson';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'purchased_lessons_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|lesson|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lesson|featured';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lesson';
  $ds_fieldsetting->view_mode = 'featured';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Go to lesson',
        'link class' => '',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|lesson|featured'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lesson|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lesson';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '7',
      'label' => 'inline',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '8',
      'label' => 'inline',
      'format' => 'ds_post_date_medium',
    ),
  );
  $export['node|lesson|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lesson|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lesson';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Go to lesson',
        'link class' => '',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|lesson|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ss_content_type_lesson_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'all_lessons_link';
  $ds_field->label = 'All Lessons Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/lessons/all">View all lessons</a>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['all_lessons_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'purchased_lessons_link';
  $ds_field->label = 'Purchased Lessons Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/lessons/purchased">View all your purchased lessons</a>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['purchased_lessons_link'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ss_content_type_lesson_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lesson|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lesson';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'product:commerce_price',
        2 => 'field_lesson_category',
        3 => 'field_introduction',
        4 => 'field_lesson_preview',
        5 => 'field_product',
        6 => 'product:commerce_file',
        7 => 'purchased_lessons_link',
        8 => 'author',
        9 => 'post_date',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_lesson_category' => 'ds_content',
      'field_introduction' => 'ds_content',
      'field_lesson_preview' => 'ds_content',
      'field_product' => 'ds_content',
      'product:commerce_file' => 'ds_content',
      'purchased_lessons_link' => 'ds_content',
      'author' => 'ds_content',
      'post_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lesson|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lesson|featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lesson';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_youtube',
        2 => 'field_introduction',
        3 => 'field_lesson_category',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_youtube' => 'ds_content',
      'field_introduction' => 'ds_content',
      'field_lesson_category' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lesson|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lesson|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lesson';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'comments',
        2 => 'product:commerce_price',
        3 => 'field_lesson_categories',
        4 => 'field_introduction',
        5 => 'field_youtube',
        6 => 'field_product',
        7 => 'author',
        8 => 'post_date',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'comments' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_lesson_categories' => 'ds_content',
      'field_introduction' => 'ds_content',
      'field_youtube' => 'ds_content',
      'field_product' => 'ds_content',
      'author' => 'ds_content',
      'post_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lesson|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lesson|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lesson';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_youtube',
        1 => 'title_field',
        2 => 'field_introduction',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_youtube' => 'ds_content',
      'title_field' => 'ds_content',
      'field_introduction' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lesson|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ss_content_type_lesson_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured';
  $ds_view_mode->label = 'Featured';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $export['featured'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'lesson_thumbnail';
  $ds_view_mode->label = 'Lesson Thumbnail';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['lesson_thumbnail'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'purchased';
  $ds_view_mode->label = 'Purchased';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $export['purchased'] = $ds_view_mode;

  return $export;
}
