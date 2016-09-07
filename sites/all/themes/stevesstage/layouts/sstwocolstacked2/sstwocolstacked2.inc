<?php

// Plugin definition
$plugin = array(
  'title' => t('SS Two column stacked'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_stacked.png',
  'theme' => 'sstwocolstacked2',
  'css' => 'twocol_stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'center' => t('Center'),
     'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
