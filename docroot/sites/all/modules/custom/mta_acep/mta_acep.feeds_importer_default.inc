<?php
/**
 * @file
 * mta_acep.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mta_acep_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mta_acep';
  $feeds_importer->config = array(
    'name' => 'MTA ACEP',
    'description' => 'Content type for MTA\'s ACEP program',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'xls xlsx',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExcelParser',
      'config' => array(
        'no_headers' => 1,
        'all_worksheets' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'mta_acep',
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => '1',
            'target' => 'field_plan_amendment',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '2',
            'target' => 'field_impact_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '3',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => '4',
            'target' => 'field_project_link:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => '5',
            'target' => 'field_phase',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => '6',
            'target' => 'field_plan_first_year_alloc',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => '7',
            'target' => 'field_plan_second_year_alloc',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => '8',
            'target' => 'field_plan_third_year_alloc',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => '9',
            'target' => 'field_plan_fourth_year_alloc',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => '10',
            'target' => 'field_plan_fifth_year_alloc',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => '11',
            'target' => 'field_out_year_alloc',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => '12',
            'target' => 'field_total_alloc',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => '13',
            'target' => 'body',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => '14',
            'target' => 'field_pmd_start_month',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => '15',
            'target' => 'field_pmd_start_year',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => '16',
            'target' => 'field_pmd_complete_month',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => '17',
            'target' => 'field_pmd_complete_year',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => '18',
            'target' => 'field_pmc_start_month',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => '19',
            'target' => 'field_pmc_start_year',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => '20',
            'target' => 'field_pmc_complete_month',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => '21',
            'target' => 'field_pmc_complete_year',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => '22',
            'target' => 'field_pm_closeout_month',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => '23',
            'target' => 'field_pm_closeout_year',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => '24',
            'target' => 'field_pm_percent_complete',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => '25',
            'target' => 'field_incremental_scope_change',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => '26',
            'target' => 'field_change_narrative',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => '27',
            'target' => 'field_current_start_month',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => '28',
            'target' => 'field_current_start_year',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => '29',
            'target' => 'field_current_completion_month',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => '30',
            'target' => 'field_current_completion_year',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => '31',
            'target' => 'field_scope',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['mta_acep'] = $feeds_importer;

  return $export;
}
