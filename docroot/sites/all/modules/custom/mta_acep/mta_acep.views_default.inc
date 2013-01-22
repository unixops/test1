<?php
/**
 * @file
 * mta_acep.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mta_acep_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mta_acep';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MTA ACEP';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MTA ACEP';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Plan Amendment */
  $handler->display->display_options['fields']['field_plan_amendment']['id'] = 'field_plan_amendment';
  $handler->display->display_options['fields']['field_plan_amendment']['table'] = 'field_data_field_plan_amendment';
  $handler->display->display_options['fields']['field_plan_amendment']['field'] = 'field_plan_amendment';
  $handler->display->display_options['fields']['field_plan_amendment']['element_label_colon'] = FALSE;
  /* Field: Content: IMPACT Description */
  $handler->display->display_options['fields']['field_impact_description']['id'] = 'field_impact_description';
  $handler->display->display_options['fields']['field_impact_description']['table'] = 'field_data_field_impact_description';
  $handler->display->display_options['fields']['field_impact_description']['field'] = 'field_impact_description';
  $handler->display->display_options['fields']['field_impact_description']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Project Link */
  $handler->display->display_options['fields']['field_project_link']['id'] = 'field_project_link';
  $handler->display->display_options['fields']['field_project_link']['table'] = 'field_data_field_project_link';
  $handler->display->display_options['fields']['field_project_link']['field'] = 'field_project_link';
  $handler->display->display_options['fields']['field_project_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_link']['click_sort_column'] = 'url';
  /* Field: Content: Phase */
  $handler->display->display_options['fields']['field_phase']['id'] = 'field_phase';
  $handler->display->display_options['fields']['field_phase']['table'] = 'field_data_field_phase';
  $handler->display->display_options['fields']['field_phase']['field'] = 'field_phase';
  $handler->display->display_options['fields']['field_phase']['element_label_colon'] = FALSE;
  /* Field: Content: Plan First Year Alloc */
  $handler->display->display_options['fields']['field_plan_first_year_alloc']['id'] = 'field_plan_first_year_alloc';
  $handler->display->display_options['fields']['field_plan_first_year_alloc']['table'] = 'field_data_field_plan_first_year_alloc';
  $handler->display->display_options['fields']['field_plan_first_year_alloc']['field'] = 'field_plan_first_year_alloc';
  $handler->display->display_options['fields']['field_plan_first_year_alloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_first_year_alloc']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Plan Second Year Alloc */
  $handler->display->display_options['fields']['field_plan_second_year_alloc']['id'] = 'field_plan_second_year_alloc';
  $handler->display->display_options['fields']['field_plan_second_year_alloc']['table'] = 'field_data_field_plan_second_year_alloc';
  $handler->display->display_options['fields']['field_plan_second_year_alloc']['field'] = 'field_plan_second_year_alloc';
  $handler->display->display_options['fields']['field_plan_second_year_alloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_second_year_alloc']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Plan Third Year Alloc */
  $handler->display->display_options['fields']['field_plan_third_year_alloc']['id'] = 'field_plan_third_year_alloc';
  $handler->display->display_options['fields']['field_plan_third_year_alloc']['table'] = 'field_data_field_plan_third_year_alloc';
  $handler->display->display_options['fields']['field_plan_third_year_alloc']['field'] = 'field_plan_third_year_alloc';
  $handler->display->display_options['fields']['field_plan_third_year_alloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_third_year_alloc']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Plan Fourth Year Alloc */
  $handler->display->display_options['fields']['field_plan_fourth_year_alloc']['id'] = 'field_plan_fourth_year_alloc';
  $handler->display->display_options['fields']['field_plan_fourth_year_alloc']['table'] = 'field_data_field_plan_fourth_year_alloc';
  $handler->display->display_options['fields']['field_plan_fourth_year_alloc']['field'] = 'field_plan_fourth_year_alloc';
  $handler->display->display_options['fields']['field_plan_fourth_year_alloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_fourth_year_alloc']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Plan Fifth Year Alloc */
  $handler->display->display_options['fields']['field_plan_fifth_year_alloc']['id'] = 'field_plan_fifth_year_alloc';
  $handler->display->display_options['fields']['field_plan_fifth_year_alloc']['table'] = 'field_data_field_plan_fifth_year_alloc';
  $handler->display->display_options['fields']['field_plan_fifth_year_alloc']['field'] = 'field_plan_fifth_year_alloc';
  $handler->display->display_options['fields']['field_plan_fifth_year_alloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_fifth_year_alloc']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Out Year Alloc */
  $handler->display->display_options['fields']['field_out_year_alloc']['id'] = 'field_out_year_alloc';
  $handler->display->display_options['fields']['field_out_year_alloc']['table'] = 'field_data_field_out_year_alloc';
  $handler->display->display_options['fields']['field_out_year_alloc']['field'] = 'field_out_year_alloc';
  $handler->display->display_options['fields']['field_out_year_alloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_out_year_alloc']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total Alloc */
  $handler->display->display_options['fields']['field_total_alloc']['id'] = 'field_total_alloc';
  $handler->display->display_options['fields']['field_total_alloc']['table'] = 'field_data_field_total_alloc';
  $handler->display->display_options['fields']['field_total_alloc']['field'] = 'field_total_alloc';
  $handler->display->display_options['fields']['field_total_alloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_alloc']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Scope Objective (Narrative) ';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: PMD Start Month */
  $handler->display->display_options['fields']['field_pmd_start_month']['id'] = 'field_pmd_start_month';
  $handler->display->display_options['fields']['field_pmd_start_month']['table'] = 'field_data_field_pmd_start_month';
  $handler->display->display_options['fields']['field_pmd_start_month']['field'] = 'field_pmd_start_month';
  $handler->display->display_options['fields']['field_pmd_start_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmd_start_month']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PMD Start Year */
  $handler->display->display_options['fields']['field_pmd_start_year']['id'] = 'field_pmd_start_year';
  $handler->display->display_options['fields']['field_pmd_start_year']['table'] = 'field_data_field_pmd_start_year';
  $handler->display->display_options['fields']['field_pmd_start_year']['field'] = 'field_pmd_start_year';
  $handler->display->display_options['fields']['field_pmd_start_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmd_start_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PMD Complete Month */
  $handler->display->display_options['fields']['field_pmd_complete_month']['id'] = 'field_pmd_complete_month';
  $handler->display->display_options['fields']['field_pmd_complete_month']['table'] = 'field_data_field_pmd_complete_month';
  $handler->display->display_options['fields']['field_pmd_complete_month']['field'] = 'field_pmd_complete_month';
  $handler->display->display_options['fields']['field_pmd_complete_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmd_complete_month']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PMD Complete Year */
  $handler->display->display_options['fields']['field_pmd_complete_year']['id'] = 'field_pmd_complete_year';
  $handler->display->display_options['fields']['field_pmd_complete_year']['table'] = 'field_data_field_pmd_complete_year';
  $handler->display->display_options['fields']['field_pmd_complete_year']['field'] = 'field_pmd_complete_year';
  $handler->display->display_options['fields']['field_pmd_complete_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmd_complete_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PMC Start Month */
  $handler->display->display_options['fields']['field_pmc_start_month']['id'] = 'field_pmc_start_month';
  $handler->display->display_options['fields']['field_pmc_start_month']['table'] = 'field_data_field_pmc_start_month';
  $handler->display->display_options['fields']['field_pmc_start_month']['field'] = 'field_pmc_start_month';
  $handler->display->display_options['fields']['field_pmc_start_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmc_start_month']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PMC Start Year */
  $handler->display->display_options['fields']['field_pmc_start_year']['id'] = 'field_pmc_start_year';
  $handler->display->display_options['fields']['field_pmc_start_year']['table'] = 'field_data_field_pmc_start_year';
  $handler->display->display_options['fields']['field_pmc_start_year']['field'] = 'field_pmc_start_year';
  $handler->display->display_options['fields']['field_pmc_start_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmc_start_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PMC Complete Month */
  $handler->display->display_options['fields']['field_pmc_complete_month']['id'] = 'field_pmc_complete_month';
  $handler->display->display_options['fields']['field_pmc_complete_month']['table'] = 'field_data_field_pmc_complete_month';
  $handler->display->display_options['fields']['field_pmc_complete_month']['field'] = 'field_pmc_complete_month';
  $handler->display->display_options['fields']['field_pmc_complete_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmc_complete_month']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PMC Complete Year */
  $handler->display->display_options['fields']['field_pmc_complete_year']['id'] = 'field_pmc_complete_year';
  $handler->display->display_options['fields']['field_pmc_complete_year']['table'] = 'field_data_field_pmc_complete_year';
  $handler->display->display_options['fields']['field_pmc_complete_year']['field'] = 'field_pmc_complete_year';
  $handler->display->display_options['fields']['field_pmc_complete_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pmc_complete_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PM Closeout Month */
  $handler->display->display_options['fields']['field_pm_closeout_month']['id'] = 'field_pm_closeout_month';
  $handler->display->display_options['fields']['field_pm_closeout_month']['table'] = 'field_data_field_pm_closeout_month';
  $handler->display->display_options['fields']['field_pm_closeout_month']['field'] = 'field_pm_closeout_month';
  $handler->display->display_options['fields']['field_pm_closeout_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pm_closeout_month']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PM Closeout Year */
  $handler->display->display_options['fields']['field_pm_closeout_year']['id'] = 'field_pm_closeout_year';
  $handler->display->display_options['fields']['field_pm_closeout_year']['table'] = 'field_data_field_pm_closeout_year';
  $handler->display->display_options['fields']['field_pm_closeout_year']['field'] = 'field_pm_closeout_year';
  $handler->display->display_options['fields']['field_pm_closeout_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pm_closeout_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PM Percent Complete */
  $handler->display->display_options['fields']['field_pm_percent_complete']['id'] = 'field_pm_percent_complete';
  $handler->display->display_options['fields']['field_pm_percent_complete']['table'] = 'field_data_field_pm_percent_complete';
  $handler->display->display_options['fields']['field_pm_percent_complete']['field'] = 'field_pm_percent_complete';
  $handler->display->display_options['fields']['field_pm_percent_complete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pm_percent_complete']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Incremental Scope Change */
  $handler->display->display_options['fields']['field_incremental_scope_change']['id'] = 'field_incremental_scope_change';
  $handler->display->display_options['fields']['field_incremental_scope_change']['table'] = 'field_data_field_incremental_scope_change';
  $handler->display->display_options['fields']['field_incremental_scope_change']['field'] = 'field_incremental_scope_change';
  $handler->display->display_options['fields']['field_incremental_scope_change']['label'] = 'Incremental Scope Change I=Increase D=Decrease blank=No Change ';
  $handler->display->display_options['fields']['field_incremental_scope_change']['element_label_colon'] = FALSE;
  /* Field: Content: Change Narrative */
  $handler->display->display_options['fields']['field_change_narrative']['id'] = 'field_change_narrative';
  $handler->display->display_options['fields']['field_change_narrative']['table'] = 'field_data_field_change_narrative';
  $handler->display->display_options['fields']['field_change_narrative']['field'] = 'field_change_narrative';
  $handler->display->display_options['fields']['field_change_narrative']['element_label_colon'] = FALSE;
  /* Field: Content: Current Start Month */
  $handler->display->display_options['fields']['field_current_start_month']['id'] = 'field_current_start_month';
  $handler->display->display_options['fields']['field_current_start_month']['table'] = 'field_data_field_current_start_month';
  $handler->display->display_options['fields']['field_current_start_month']['field'] = 'field_current_start_month';
  $handler->display->display_options['fields']['field_current_start_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_start_month']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Current Start Year */
  $handler->display->display_options['fields']['field_current_start_year']['id'] = 'field_current_start_year';
  $handler->display->display_options['fields']['field_current_start_year']['table'] = 'field_data_field_current_start_year';
  $handler->display->display_options['fields']['field_current_start_year']['field'] = 'field_current_start_year';
  $handler->display->display_options['fields']['field_current_start_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_start_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Current Completion Month */
  $handler->display->display_options['fields']['field_current_completion_month']['id'] = 'field_current_completion_month';
  $handler->display->display_options['fields']['field_current_completion_month']['table'] = 'field_data_field_current_completion_month';
  $handler->display->display_options['fields']['field_current_completion_month']['field'] = 'field_current_completion_month';
  $handler->display->display_options['fields']['field_current_completion_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_completion_month']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Current Completion Year */
  $handler->display->display_options['fields']['field_current_completion_year']['id'] = 'field_current_completion_year';
  $handler->display->display_options['fields']['field_current_completion_year']['table'] = 'field_data_field_current_completion_year';
  $handler->display->display_options['fields']['field_current_completion_year']['field'] = 'field_current_completion_year';
  $handler->display->display_options['fields']['field_current_completion_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_completion_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Scope */
  $handler->display->display_options['fields']['field_scope']['id'] = 'field_scope';
  $handler->display->display_options['fields']['field_scope']['table'] = 'field_data_field_scope';
  $handler->display->display_options['fields']['field_scope']['field'] = 'field_scope';
  $handler->display->display_options['fields']['field_scope']['label'] = 'Scope I=Increase D=Decrease blank=No Change ';
  $handler->display->display_options['fields']['field_scope']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mta_acep' => 'mta_acep',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'mta-acep';
  $export['mta_acep'] = $view;

  return $export;
}
