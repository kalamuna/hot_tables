<?php
/**
 * @file
 * hot_tables.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hot_tables_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hot_table'.
  $field_bases['field_hot_table'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hot_table',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tablefield',
    'settings' => array(
      'cell_processing' => 1,
      'export' => 1,
      'lock_values' => 1,
      'restrict_rebuild' => 0,
    ),
    'translatable' => 0,
    'type' => 'tablefield',
  );

  return $field_bases;
}
