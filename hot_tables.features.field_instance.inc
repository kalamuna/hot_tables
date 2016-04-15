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

  // Exported field_instance: 'fieldable_panels_pane-hot_table-field_hot_table'.
  $field_instances['fieldable_panels_pane-hot_table-field_hot_table'] = array(
    'bundle' => 'hot_table',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => '',
          'cell_0_1' => '',
          'cell_0_2' => '',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_3_0' => '',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'import' => array(
            'file' => '',
            'import' => 'Upload CSV',
          ),
          'rebuild' => array(
            'count_cols' => 3,
            'count_rows' => 4,
            'rebuild' => 'Rebuild Table',
          ),
        ),
        'format' => 'plain_text',
      ),
    ),
    'deleted' => 0,
    'description' => '<p>The purpose of tables is to present information in a grid, or matrix, and to have column or rows that show the meaning of the information in the grid, please do not use tables for <em>presentation</em>. Learn more from <a href="http://webaim.org/techniques/tables/data">WebAIM: Creating Accessible Tables</a></p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'tablefield_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
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
  t('<p>The purpose of tables is to present information in a grid, or matrix, and to have column or rows that show the meaning of the information in the grid, please do not use tables for <em>presentation</em>. Learn more from <a href="http://webaim.org/techniques/tables/data">WebAIM: Creating Accessible Tables</a></p>');
  t('Table');

  return $field_instances;
}
