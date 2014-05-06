<?php
/**
 * @file
 * hot_tables.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_tables_defaultconfig_features() {
  return array(
    'hot_tables' => array(
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hot_tables_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_table-field_hot_table'.
  $fields['fieldable_panels_pane-hot_table-field_hot_table'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_hot_table',
      'foreign keys' => array(),
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
    ),
    'field_instance' => array(
      'bundle' => 'hot_table',
      'default_value' => array(
        0 => array(
          'tablefield' => array(
            'cell_0_0' => '',
            'cell_0_1' => '',
            'cell_0_2' => '',
            'cell_0_3' => '',
            'cell_0_4' => '',
            'cell_1_0' => '',
            'cell_1_1' => '',
            'cell_1_2' => '',
            'cell_1_3' => '',
            'cell_1_4' => '',
            'cell_2_0' => '',
            'cell_2_1' => '',
            'cell_2_2' => '',
            'cell_2_3' => '',
            'cell_2_4' => '',
            'cell_3_0' => '',
            'cell_3_1' => '',
            'cell_3_2' => '',
            'cell_3_3' => '',
            'cell_3_4' => '',
            'cell_4_0' => '',
            'cell_4_1' => '',
            'cell_4_2' => '',
            'cell_4_3' => '',
            'cell_4_4' => '',
            'import' => array(
              'rebuild_field_hot_table_0' => 'Upload CSV',
              'tablefield_csv_field_hot_table_0' => '',
            ),
            'rebuild' => array(
              'count_cols' => 5,
              'count_rows' => 5,
              'rebuild' => 'Rebuild Table',
            ),
          ),
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'tablefield',
          'settings' => array(),
          'type' => 'default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_hot_table',
      'label' => 'Table',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'tablefield',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-table-field_basic_table_table'.
  $fields['fieldable_panels_pane-table-field_basic_table_table'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_basic_table_table',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'tablefield',
      'settings' => array(
        'cell_processing' => 0,
        'lock_values' => 0,
      ),
      'translatable' => 0,
      'type' => 'tablefield',
    ),
    'field_instance' => array(
      'bundle' => 'table',
      'default_value' => array(
        0 => array(
          'tablefield' => array(
            'cell_0_0' => '',
            'cell_0_1' => '',
            'cell_1_0' => '',
            'cell_1_1' => '',
            'cell_2_0' => '',
            'cell_2_1' => '',
            'import' => array(
              'rebuild_field_basic_table_table_0' => 'Upload CSV',
              'tablefield_csv_field_basic_table_table_0' => '',
            ),
            'rebuild' => array(
              'count_cols' => 2,
              'count_rows' => 3,
              'rebuild' => 'Rebuild Table',
            ),
          ),
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'tablefield',
          'settings' => array(),
          'type' => 'default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_table_table',
      'label' => 'Table',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'tablefield',
        'weight' => -4,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Table');

  return $fields;
}
