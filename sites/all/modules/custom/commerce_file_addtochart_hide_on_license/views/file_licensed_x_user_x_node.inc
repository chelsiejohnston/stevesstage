<?php

$view = new view;
$view->name = 'licensed_file_x_user_x_node';
$view->description = 'Show the Licenced File for the user, for the Product in the Product Display node';
$view->tag = 'default';
$view->base_table = 'commerce_file_license';
$view->human_name = 'Licensed file to the user per node';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Prodotto licenziato per autore';
$handler->display->display_options['use_more_text'] = 'leggi tutto';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Slittamento';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Pi di pagina: Globale: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['empty'] = FALSE;
$handler->display->display_options['footer']['area']['content'] = '<br/>
<div style=\'font-size: 0.9em\'>Consulta l\'elenco completo dei <a href=\'/user/[uid]/licensed-files\' >file da te acquistati</a></div>';
$handler->display->display_options['footer']['area']['format'] = 'full_html';
$handler->display->display_options['footer']['area']['tokenize'] = 1;
/* Relazione: Licenza Commerce File: Licensed file (commerce_file_license_file:fid) */
$handler->display->display_options['relationships']['commerce_file_license_file_fid']['id'] = 'commerce_file_license_file_fid';
$handler->display->display_options['relationships']['commerce_file_license_file_fid']['table'] = 'field_data_commerce_file_license_file';
$handler->display->display_options['relationships']['commerce_file_license_file_fid']['field'] = 'commerce_file_license_file_fid';
$handler->display->display_options['relationships']['commerce_file_license_file_fid']['required'] = 0;
/* Relazione: Licenza Commerce File: Owner uid */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'commerce_file_license';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = 0;
/* Relazione: File: Prodotto di Commerce using File in vendita */
$handler->display->display_options['relationships']['reverse_field_commerce_file_commerce_product']['id'] = 'reverse_field_commerce_file_commerce_product';
$handler->display->display_options['relationships']['reverse_field_commerce_file_commerce_product']['table'] = 'file_managed';
$handler->display->display_options['relationships']['reverse_field_commerce_file_commerce_product']['field'] = 'reverse_field_commerce_file_commerce_product';
$handler->display->display_options['relationships']['reverse_field_commerce_file_commerce_product']['relationship'] = 'commerce_file_license_file_fid';
$handler->display->display_options['relationships']['reverse_field_commerce_file_commerce_product']['required'] = 0;
/* Campo: Licenza Commerce File: ID Licenza */
$handler->display->display_options['fields']['license_id']['id'] = 'license_id';
$handler->display->display_options['fields']['license_id']['table'] = 'commerce_file_license';
$handler->display->display_options['fields']['license_id']['field'] = 'license_id';
$handler->display->display_options['fields']['license_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['license_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['license_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['license_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['license_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['license_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['license_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['license_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['license_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['license_id']['hide_alter_empty'] = 1;
/* Campo: Prodotto di Commerce: ID prodotto */
$handler->display->display_options['fields']['product_id']['id'] = 'product_id';
$handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
$handler->display->display_options['fields']['product_id']['field'] = 'product_id';
$handler->display->display_options['fields']['product_id']['relationship'] = 'reverse_field_commerce_file_commerce_product';
$handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['product_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['product_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['product_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['product_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['product_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['product_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['product_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['product_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['product_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
/* Campo: Licenza Commerce File: Owner uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'commerce_file_license';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['uid']['alter']['external'] = 0;
$handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['uid']['alter']['html'] = 0;
$handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
$handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['uid']['hide_empty'] = 0;
$handler->display->display_options['fields']['uid']['empty_zero'] = 0;
$handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['uid']['link_to_user'] = 1;
/* Campo: Licenza Commerce File: Licensed file */
$handler->display->display_options['fields']['commerce_file_license_file']['id'] = 'commerce_file_license_file';
$handler->display->display_options['fields']['commerce_file_license_file']['table'] = 'field_data_commerce_file_license_file';
$handler->display->display_options['fields']['commerce_file_license_file']['field'] = 'commerce_file_license_file';
$handler->display->display_options['fields']['commerce_file_license_file']['label'] = 'File acquistato per questo prodotto (disponibile per il download)';
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['external'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['trim'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['alter']['html'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['element_type'] = 'span';
$handler->display->display_options['fields']['commerce_file_license_file']['element_label_type'] = 'span';
$handler->display->display_options['fields']['commerce_file_license_file']['element_label_colon'] = 1;
$handler->display->display_options['fields']['commerce_file_license_file']['element_default_classes'] = 1;
$handler->display->display_options['fields']['commerce_file_license_file']['hide_empty'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['empty_zero'] = 0;
$handler->display->display_options['fields']['commerce_file_license_file']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['commerce_file_license_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['commerce_file_license_file']['field_api_classes'] = 0;
/* Contextual filter: Prodotto di Commerce: ID prodotto */
$handler->display->display_options['arguments']['product_id']['id'] = 'product_id';
$handler->display->display_options['arguments']['product_id']['table'] = 'commerce_product';
$handler->display->display_options['arguments']['product_id']['field'] = 'product_id';
$handler->display->display_options['arguments']['product_id']['relationship'] = 'reverse_field_commerce_file_commerce_product';
$handler->display->display_options['arguments']['product_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['product_id']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['product_id']['default_argument_options']['code'] = 'if ( arg(0) == \'node\' && is_numeric(arg(1)) && ! arg(2) ) {
  $node = node_load(arg(1));
 
$field_commerce_rivista = field_get_items(\'node\', $node, \'field_commerce_rivista\', $node->language);

return $field_commerce_rivista[0][\'product_id\'];

}';
$handler->display->display_options['arguments']['product_id']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['product_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['product_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['product_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['product_id']['break_phrase'] = 0;
$handler->display->display_options['arguments']['product_id']['not'] = 0;
/* Contextual filter: Licenza Commerce File: Owner uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'commerce_file_license';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = 1;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'commerce_file_user';
$handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = '1';
$handler->display->display_options['arguments']['uid']['validate_options']['roles'] = array(
  3 => '3',
);
$handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['uid']['not'] = 0;

/* Display: Entity content */
$handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'rivista',
);
$handler->display->display_options['argument_mode'] = 'none';
$translatables['licensed_file_x_user_x_node'] = array(
  t('Master'),
  t('Prodotto licenziato per autore'),
  t('leggi tutto'),
  t('Applica'),
  t('Ripristina'),
  t('Ordina per'),
  t('Asc'),
  t('Disc'),
  t('Voci per pagina'),
  t('- Tutto -'),
  t('Slittamento'),
  t('<br/>
<div style=\'font-size: 0.9em\'>Consulta l\'elenco completo dei <a href=\'/user/[uid]/licensed-files\' >file da te acquistati</a></div>'),
  t('file from commerce_file_license_file'),
  t('Proprietario della Licenza'),
  t('field_commerce_file'),
  t('ID Licenza'),
  t('ID prodotto'),
  t('Owner uid'),
  t('File acquistato per questo prodotto (disponibile per il download)'),
  t('Tutti'),
  t('Entity content'),
);


/* Define this new view from code in views list */
$views[$view->name] = $view;