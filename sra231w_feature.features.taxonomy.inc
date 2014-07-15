<?php
/**
 * @file
 * sra231w_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sra231w_feature_taxonomy_default_vocabularies() {
  return array(
    'release_batch' => array(
      'name' => 'Release Batch',
      'machine_name' => 'release_batch',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'nodeorder',
      'weight' => 0,
    ),
  );
}
