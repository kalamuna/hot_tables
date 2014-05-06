<?php
/**
 * @file
 * hot_tables.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hot_tables_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-hot_table-field_hot_table'
  $field_instances['fieldable_panels_pane-hot_table-field_hot_table'] = array(
    'bundle' => 'hot_table',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'accessibility' => array(
            'caption' => '',
            'summary' => '',
          ),
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
        'format' => 'panopoly_html_text',
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
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Table');

  return $field_instances;
}
