<?php
/**
 * @file
 * ss_content_type_lesson.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ss_content_type_lesson_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_lesson';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_lesson';
  $strongarm->value = 0;
  $export['comment_anonymous_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_lesson';
  $strongarm->value = 1;
  $export['comment_default_mode_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_lesson';
  $strongarm->value = '50';
  $export['comment_default_per_page_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_lesson';
  $strongarm->value = 1;
  $export['comment_form_location_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_lesson';
  $strongarm->value = '1';
  $export['comment_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_lesson';
  $strongarm->value = '1';
  $export['comment_preview_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_lesson';
  $strongarm->value = 1;
  $export['comment_subject_field_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__lesson';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '-10',
        ),
        'status' => array(
          'weight' => '35',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_commerce_product__lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__lesson';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'purchased' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
        ),
        'product:title_field' => array(
          'default' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_license_type' => array(
          'default' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_license_duration' => array(
          'default' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '25',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_file' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'purchased' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_lesson';
  $strongarm->value = '0';
  $export['language_content_type_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_lesson';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_lesson';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_lesson';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_lesson';
  $strongarm->value = '1';
  $export['node_preview_lesson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_lesson';
  $strongarm->value = 0;
  $export['node_submitted_lesson'] = $strongarm;

  return $export;
}
