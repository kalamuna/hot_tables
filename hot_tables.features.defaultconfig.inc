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
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
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

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hot_tables_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__hot_table';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__hot_table'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_tables_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable hot_table'.
  $permissions['create fieldable hot_table'] = array(
    'name' => 'create fieldable hot_table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hot_table'.
  $permissions['delete fieldable hot_table'] = array(
    'name' => 'delete fieldable hot_table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hot_table'.
  $permissions['edit fieldable hot_table'] = array(
    'name' => 'edit fieldable hot_table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
