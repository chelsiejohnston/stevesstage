<?php

// Plugin definition
$plugin = array(
  'title' => t('SS Two column asdfasdfstacked'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_stacked.png',
  'theme' => 'ss-two_colstacked',
  'css' => 'twocol_stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
