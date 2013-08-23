<?php
/**
 * @file
 * galeria_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function galeria_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function galeria_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function galeria_features_flag_default_flags() {
  $flags = array();
  // Exported flag: "galeria Favorita".
  $flags['galeria_favorita'] = array(
    'entity_type' => 'node',
    'title' => 'galeria Favorita',
    'global' => 0,
    'types' => array(
      0 => 'galeria',
    ),
    'errors' => array(),
    'flag_short' => 'agregar a mis favoritos',
    'flag_long' => 'Marca esta Galeria como favorita',
    'flag_message' => 'esta Galeria ya esta en favoritos',
    'unflag_short' => 'Remover de mis favoritos',
    'unflag_long' => 'Eliminar de mis favoritos',
    'unflag_message' => 'a sido eliminado',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'galeria_features',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function galeria_features_node_info() {
  $items = array(
    'galeria' => array(
      'name' => t('Galeria'),
      'base' => 'node_content',
      'description' => t('Galería de imágenes '),
      'has_title' => '1',
      'title_label' => t('Galeria'),
      'help' => '',
    ),
  );
  return $items;
}
