<?php
/**
 * @file
 * eotf.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eotf_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eotf';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'eotf';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Agency (field_ref_agency) */
  $handler->display->display_options['relationships']['field_ref_agency_tid']['id'] = 'field_ref_agency_tid';
  $handler->display->display_options['relationships']['field_ref_agency_tid']['table'] = 'field_data_field_ref_agency';
  $handler->display->display_options['relationships']['field_ref_agency_tid']['field'] = 'field_ref_agency_tid';
  $handler->display->display_options['relationships']['field_ref_agency_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Contract Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Fully Funded */
  $handler->display->display_options['fields']['field_fully_funded']['id'] = 'field_fully_funded';
  $handler->display->display_options['fields']['field_fully_funded']['table'] = 'field_data_field_fully_funded';
  $handler->display->display_options['fields']['field_fully_funded']['field'] = 'field_fully_funded';
  /* Field: Content: ReferenceNumber */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_contract_duration']['id'] = 'field_contract_duration';
  $handler->display->display_options['fields']['field_contract_duration']['table'] = 'field_data_field_contract_duration';
  $handler->display->display_options['fields']['field_contract_duration']['field'] = 'field_contract_duration';
  $handler->display->display_options['fields']['field_contract_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: LineDescription */
  $handler->display->display_options['fields']['field_line_desc']['id'] = 'field_line_desc';
  $handler->display->display_options['fields']['field_line_desc']['table'] = 'field_data_field_line_desc';
  $handler->display->display_options['fields']['field_line_desc']['field'] = 'field_line_desc';
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  /* Field: Content: ProjectDescription */
  $handler->display->display_options['fields']['field_project_desc']['id'] = 'field_project_desc';
  $handler->display->display_options['fields']['field_project_desc']['table'] = 'field_data_field_project_desc';
  $handler->display->display_options['fields']['field_project_desc']['field'] = 'field_project_desc';
  /* Field: Content: TypeofContract */
  $handler->display->display_options['fields']['field_contract_type']['id'] = 'field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['table'] = 'field_data_field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['field'] = 'field_contract_type';
  /* Field: Content: SolicationMonth */
  $handler->display->display_options['fields']['field_solicationmonth']['id'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['table'] = 'field_data_field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['field'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['settings'] = array(
    'format_type' => 'mta_month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: DollarRange */
  $handler->display->display_options['fields']['field_dollar_range']['id'] = 'field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['table'] = 'field_data_field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['field'] = 'field_dollar_range';
  /* Field: Content: Tasks */
  $handler->display->display_options['fields']['field_tasks']['id'] = 'field_tasks';
  $handler->display->display_options['fields']['field_tasks']['table'] = 'field_data_field_tasks';
  $handler->display->display_options['fields']['field_tasks']['field'] = 'field_tasks';
  $handler->display->display_options['fields']['field_tasks']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tasks']['multi_type'] = 'ul';
  /* Sort criterion: Content: SolicationMonth (field_solicationmonth) */
  $handler->display->display_options['sorts']['field_solicationmonth_value']['id'] = 'field_solicationmonth_value';
  $handler->display->display_options['sorts']['field_solicationmonth_value']['table'] = 'field_data_field_solicationmonth';
  $handler->display->display_options['sorts']['field_solicationmonth_value']['field'] = 'field_solicationmonth_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'eotf' => 'eotf',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_agency_fullname',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_contract_type' => 'field_contract_type',
    'field_solicationmonth' => 'field_solicationmonth',
    'field_ref_number' => 'field_ref_number',
    'title' => 'title',
    'field_ref_agency' => 'field_ref_agency',
    'field_dollar_range' => 'field_dollar_range',
    'field_agency_fullname' => 'field_agency_fullname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_contract_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_solicationmonth' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dollar_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency_fullname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<center><img src="/sites/default/files/mtaimgs/eyeonfuture2.jpg"></center><br>

    ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div align="center"><h2 style="text-align:center; color:#7a2626;">Forecast of Contracts to be Advertised and Proposals to be Solicited</h2></<div>
<div align="left">	  
	 <p></p><ul class="arrow">
	<li><a href="eotf">Letter from the Chairman</a> </li>
	<li><a href="eotf_intro">Information About Contracts</a></li>	
    <li><strong>Forecast of Contracts and Proposals</strong></li>
    <li><strong><a href="eotf-descrip">Brief Descriptions of Work to be Advertised</a></strong>
		<ul class="arrow">
			<li><a href="eotf-allagency_new.htm#nyct">MTA New York City Transit</a> </li>
			<li><a href="eotf-allagency_new.htm#lirr">MTA Long Island Rail Road</a></li>
			<li><a href="eotf-allagency_new.htm#mnr">MTA Metro-North Railroad</a> </li>
			<li><a href="eotf-allagency_new.htm#bt">MTA Bridges &amp; Tunnels</a></li>
			<li><a href="eotf-allagency_new.htm#mtacc">MTA Capital Construction</a></li>
			<li><a href="eotf-allagency_new.htm#mtabus">MTA Bus Company</a></li>
		</ul>
	</li>    
	</ul><p></p></div>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Agency (field_ref_agency) */
  $handler->display->display_options['relationships']['field_ref_agency_tid']['id'] = 'field_ref_agency_tid';
  $handler->display->display_options['relationships']['field_ref_agency_tid']['table'] = 'field_data_field_ref_agency';
  $handler->display->display_options['relationships']['field_ref_agency_tid']['field'] = 'field_ref_agency_tid';
  $handler->display->display_options['relationships']['field_ref_agency_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: TypeofContract */
  $handler->display->display_options['fields']['field_contract_type']['id'] = 'field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['table'] = 'field_data_field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['field'] = 'field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['label'] = 'Type of Contract';
  $handler->display->display_options['fields']['field_contract_type']['element_label_colon'] = FALSE;
  /* Field: Content: SolicationMonth */
  $handler->display->display_options['fields']['field_solicationmonth']['id'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['table'] = 'field_data_field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['field'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['label'] = 'Solication Month';
  $handler->display->display_options['fields']['field_solicationmonth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_solicationmonth']['settings'] = array(
    'format_type' => 'mta_submission',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: SolicationMonth */
  $handler->display->display_options['fields']['field_solicationmonth_1']['id'] = 'field_solicationmonth_1';
  $handler->display->display_options['fields']['field_solicationmonth_1']['table'] = 'field_data_field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth_1']['field'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth_1']['label'] = '';
  $handler->display->display_options['fields']['field_solicationmonth_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_solicationmonth_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_solicationmonth_1']['settings'] = array(
    'format_type' => 'mta_month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: ReferenceNumber */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['label'] = 'Reference Number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['path'] = 'mta/capital/eotf-descrip#[field_ref_number][field_solicationmonth_1]';
  $handler->display->display_options['fields']['field_ref_number']['element_class'] = 'ref_number';
  $handler->display->display_options['fields']['field_ref_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_number']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Contract Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'contract_description';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Agency */
  $handler->display->display_options['fields']['field_ref_agency']['id'] = 'field_ref_agency';
  $handler->display->display_options['fields']['field_ref_agency']['table'] = 'field_data_field_ref_agency';
  $handler->display->display_options['fields']['field_ref_agency']['field'] = 'field_ref_agency';
  $handler->display->display_options['fields']['field_ref_agency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_agency']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: DollarRange */
  $handler->display->display_options['fields']['field_dollar_range']['id'] = 'field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['table'] = 'field_data_field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['field'] = 'field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['label'] = 'Range';
  $handler->display->display_options['fields']['field_dollar_range']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: FullName */
  $handler->display->display_options['fields']['field_agency_fullname']['id'] = 'field_agency_fullname';
  $handler->display->display_options['fields']['field_agency_fullname']['table'] = 'field_data_field_agency_fullname';
  $handler->display->display_options['fields']['field_agency_fullname']['field'] = 'field_agency_fullname';
  $handler->display->display_options['fields']['field_agency_fullname']['relationship'] = 'field_ref_agency_tid';
  $handler->display->display_options['fields']['field_agency_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_agency_fullname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agency_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'mta/capital/eotf-allagency_new';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_agency_fullname',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_solicationmonth',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<center><img src="/sites/default/files/mtaimgs/eyeonfuture2.jpg"></center><br>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div align="center">
  <h2 style="text-align:center; color:#7a2626; font-size: 123.1%;">Brief Descriptions of Work to be Advertised</h2></div>
<div align="left">
	<ul class="arrow">
	<li><a href="eotf">Letter from the Chairman</a> </li>
	<li><a href="eotf_intro">Information About Contracts</a></li>	
    <li><a href="eotf-allagency_new">Forecast of Contracts and Proposals</a></li>
    <li><strong>Brief Descriptions of Work to be Advertised</strong>
		<ul class="arrow">
			<li><a href="eotf-descrip.htm#nyct">MTA New York City Transit</a> </li>
			<li><a href="eotf-descrip.htm#lirr">MTA Long Island Rail Road</a></li>
			<li><a href="eotf-descrip.htm#mnr">MTA Metro-North Railroad</a> </li>
			<li><a href="eotf-descrip.htm#bt">MTA Bridges &amp; Tunnels</a></li>
			<li><a href="eotf-descrip.htm#mtacc">MTA Capital Construction</a></li>
			<li><a href="eotf-descrip.htm#mtabus">MTA Bus Company</a></li>
		</ul>
	</li>    
	</ul>	  </div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Agency */
  $handler->display->display_options['fields']['field_ref_agency']['id'] = 'field_ref_agency';
  $handler->display->display_options['fields']['field_ref_agency']['table'] = 'field_data_field_ref_agency';
  $handler->display->display_options['fields']['field_ref_agency']['field'] = 'field_ref_agency';
  $handler->display->display_options['fields']['field_ref_agency']['label'] = '';
  $handler->display->display_options['fields']['field_ref_agency']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_agency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_agency']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: SolicationMonth */
  $handler->display->display_options['fields']['field_solicationmonth']['id'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['table'] = 'field_data_field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['field'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth']['label'] = '';
  $handler->display->display_options['fields']['field_solicationmonth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_solicationmonth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_solicationmonth']['settings'] = array(
    'format_type' => 'mta_submission',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: SolicationMonth */
  $handler->display->display_options['fields']['field_solicationmonth_1']['id'] = 'field_solicationmonth_1';
  $handler->display->display_options['fields']['field_solicationmonth_1']['table'] = 'field_data_field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth_1']['field'] = 'field_solicationmonth';
  $handler->display->display_options['fields']['field_solicationmonth_1']['label'] = '';
  $handler->display->display_options['fields']['field_solicationmonth_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_solicationmonth_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_solicationmonth_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_solicationmonth_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_solicationmonth_1']['settings'] = array(
    'format_type' => 'mta_month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: ReferenceNumber */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['label'] = '';
  $handler->display->display_options['fields']['field_ref_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['text'] = '<a name=\'[field_ref_number][field_solicationmonth_1]\'></a>[field_ref_number]';
  $handler->display->display_options['fields']['field_ref_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: DollarRange */
  $handler->display->display_options['fields']['field_dollar_range']['id'] = 'field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['table'] = 'field_data_field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['field'] = 'field_dollar_range';
  $handler->display->display_options['fields']['field_dollar_range']['label'] = '';
  $handler->display->display_options['fields']['field_dollar_range']['element_label_colon'] = FALSE;
  /* Field: Content: ProjectDescription */
  $handler->display->display_options['fields']['field_project_desc']['id'] = 'field_project_desc';
  $handler->display->display_options['fields']['field_project_desc']['table'] = 'field_data_field_project_desc';
  $handler->display->display_options['fields']['field_project_desc']['field'] = 'field_project_desc';
  $handler->display->display_options['fields']['field_project_desc']['label'] = '';
  $handler->display->display_options['fields']['field_project_desc']['element_label_colon'] = FALSE;
  /* Field: Content: Tasks */
  $handler->display->display_options['fields']['field_tasks']['id'] = 'field_tasks';
  $handler->display->display_options['fields']['field_tasks']['table'] = 'field_data_field_tasks';
  $handler->display->display_options['fields']['field_tasks']['field'] = 'field_tasks';
  $handler->display->display_options['fields']['field_tasks']['label'] = '';
  $handler->display->display_options['fields']['field_tasks']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tasks']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tasks']['multi_type'] = 'ul';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_contract_duration']['id'] = 'field_contract_duration';
  $handler->display->display_options['fields']['field_contract_duration']['table'] = 'field_data_field_contract_duration';
  $handler->display->display_options['fields']['field_contract_duration']['field'] = 'field_contract_duration';
  $handler->display->display_options['fields']['field_contract_duration']['label'] = 'Duration of Contract';
  $handler->display->display_options['fields']['field_contract_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contract_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: FullName */
  $handler->display->display_options['fields']['field_agency_fullname']['id'] = 'field_agency_fullname';
  $handler->display->display_options['fields']['field_agency_fullname']['table'] = 'field_data_field_agency_fullname';
  $handler->display->display_options['fields']['field_agency_fullname']['field'] = 'field_agency_fullname';
  $handler->display->display_options['fields']['field_agency_fullname']['relationship'] = 'field_ref_agency_tid';
  $handler->display->display_options['fields']['field_agency_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_agency_fullname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agency_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'mta/capital/eotf-descrip';
  $export['eotf'] = $view;

  return $export;
}
