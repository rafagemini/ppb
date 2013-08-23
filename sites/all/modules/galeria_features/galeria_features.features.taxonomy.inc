<?php
/**
 * @file
 * galeria_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function galeria_features_taxonomy_default_vocabularies() {
  return array(
    'galeria' => array(
      'name' => 'Galeria',
      'machine_name' => 'galeria',
      'description' => 'tipos de imagenes',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
