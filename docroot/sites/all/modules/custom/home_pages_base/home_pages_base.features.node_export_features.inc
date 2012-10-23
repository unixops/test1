<?php
/**
 * @file
 * home_pages_base.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function home_pages_base_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'3664\',
      \'uid\' => \'173\',
      \'title\' => \'mnr\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'15d0222d-6772-7de4-e97e-8789e36c5a00\',
      \'nid\' => \'3651\',
      \'type\' => \'home_page\',
      \'language\' => \'und\',
      \'created\' => \'1347477001\',
      \'changed\' => \'1350306468\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3be4fb69-0477-e6f4-716b-620538803450\',
      \'revision_timestamp\' => \'1350306468\',
      \'revision_uid\' => \'173\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1347477001\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'173\',
      \'comment_count\' => \'0\',
      \'name\' => \'dvandre\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'46\',
        \'source\' => \'node/3651\',
        \'alias\' => \'mnr\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Metro-North Railroad\',
        \'mlid\' => 0,
        \'plid\' => \'221\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'revision_uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'3699\',
      \'uid\' => \'173\',
      \'title\' => \'MTA Home\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a94d2c65-3950-5f44-9523-6a6f1e33f620\',
      \'nid\' => \'3661\',
      \'type\' => \'home_page\',
      \'language\' => \'und\',
      \'created\' => \'1348506647\',
      \'changed\' => \'1350306595\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4e274e5d-88c2-bda4-a5ab-34fa71c0ce59\',
      \'revision_timestamp\' => \'1350306595\',
      \'revision_uid\' => \'173\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348506647\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'173\',
      \'comment_count\' => \'0\',
      \'name\' => \'dvandre\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'47\',
        \'source\' => \'node/3661\',
        \'alias\' => \'mta\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'MTA Home\',
        \'mlid\' => 0,
        \'plid\' => \'221\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'revision_uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'3665\',
      \'uid\' => \'173\',
      \'title\' => \'bandt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'42ff22ac-d809-1894-855a-3c0b41cb3161\',
      \'nid\' => \'3652\',
      \'type\' => \'home_page\',
      \'language\' => \'und\',
      \'created\' => \'1347477045\',
      \'changed\' => \'1350306029\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'939216af-f873-ebe4-e1d9-b8cb1ca3a1d3\',
      \'revision_timestamp\' => \'1350306029\',
      \'revision_uid\' => \'173\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1347477045\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'173\',
      \'comment_count\' => \'0\',
      \'name\' => \'dvandre\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'43\',
        \'source\' => \'node/3652\',
        \'alias\' => \'bandt\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Bridges and Tunnels\',
        \'mlid\' => 0,
        \'plid\' => \'221\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'revision_uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'3662\',
      \'uid\' => \'173\',
      \'title\' => \'nyct\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a8b956f1-a919-28e4-1d26-860446a58c5f\',
      \'nid\' => \'3649\',
      \'type\' => \'home_page\',
      \'language\' => \'und\',
      \'created\' => \'1347476884\',
      \'changed\' => \'1350306155\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'95be54b2-9b4f-bee4-b128-16bb56eb1c26\',
      \'revision_timestamp\' => \'1350306155\',
      \'revision_uid\' => \'173\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1347476884\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'173\',
      \'comment_count\' => \'0\',
      \'name\' => \'dvandre\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'45\',
        \'source\' => \'node/3649\',
        \'alias\' => \'nyct\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'NYC Subways and Buses\',
        \'mlid\' => 0,
        \'plid\' => \'221\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'revision_uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'3663\',
      \'uid\' => \'173\',
      \'title\' => \'lirr\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'81b708e5-c3ee-75b4-5d1f-089b28035ff4\',
      \'nid\' => \'3650\',
      \'type\' => \'home_page\',
      \'language\' => \'und\',
      \'created\' => \'1347476918\',
      \'changed\' => \'1350306079\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9d08f22a-fc91-ab54-8193-ba3dd8ce594a\',
      \'revision_timestamp\' => \'1350306079\',
      \'revision_uid\' => \'173\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1347476918\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'173\',
      \'comment_count\' => \'0\',
      \'name\' => \'dvandre\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'44\',
        \'source\' => \'node/3650\',
        \'alias\' => \'lirr\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Long Island Rail Road\',
        \'mlid\' => 0,
        \'plid\' => \'221\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'revision_uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'3807\',
      \'uid\' => \'173\',
      \'title\' => \'sir\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'745b248e-0562-cb44-d5f6-941fd6359ec0\',
      \'nid\' => \'3761\',
      \'type\' => \'home_page\',
      \'language\' => \'und\',
      \'created\' => \'1350481140\',
      \'changed\' => \'1350481140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a161dcc4-5fc4-f914-61cd-dfcf2e5e4280\',
      \'revision_timestamp\' => \'1350481140\',
      \'revision_uid\' => \'173\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1350481140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'173\',
      \'comment_count\' => \'0\',
      \'name\' => \'dvandre\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'52\',
        \'source\' => \'node/3761\',
        \'alias\' => \'sir\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
        array(
          \'type\' => \'user\',
          \'id\' => \'173\',
          \'delta\' => 0,
          \'property\' => \'revision_uid\',
          \'module\' => \'node\',
          \'uuid\' => \'5c712eaa-f6b5-ab44-49a5-8e04939993cb\',
        ),
      ),
    ),
)',
);
  return $node_export;
}
