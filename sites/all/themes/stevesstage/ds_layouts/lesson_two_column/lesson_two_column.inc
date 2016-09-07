<?php

/**
 * @file
 * Display Suite Lesson Two Column configuration.
 */

function ds_lesson_two_column() {
  return array(
    'label' => t('Lesson Two Column'),
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    // Uncomment if you want to include a CSS file for this layout (lesson_two_column.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (lesson_two_column.png)
    // 'image' => TRUE,
  );
}
