<?php
/**
 * @file
 * elections_module.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function elections_module_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'closing_and_count';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs: Closing and Count';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_questions-block_8',
      'hide_title' => 1,
      'title' => 'Process',
      'weight' => '-100',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Process');
  t('Quicktabs: Closing and Count');

  $export['closing_and_count'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'general_observations';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs: General Observations';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_questions-block_4',
      'hide_title' => 1,
      'title' => 'IOM Info',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_questions-block_2',
      'hide_title' => 1,
      'title' => 'Gender',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_questions-block_1',
      'hide_title' => 1,
      'title' => 'Party Agents',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_questions-block_3',
      'hide_title' => 1,
      'title' => 'Environment',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_questions-block_5',
      'hide_title' => 1,
      'title' => 'Opening Info',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Environment');
  t('Gender');
  t('IOM Info');
  t('Opening Info');
  t('Party Agents');
  t('Quicktabs: General Observations');

  $export['general_observations'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'voting_and_accreditation';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs: Voting and Accreditation';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_questions-block_6',
      'hide_title' => 1,
      'title' => 'Accreditation Process',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_questions-block_7',
      'hide_title' => 1,
      'title' => 'Voting Process',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Accreditation Process');
  t('Quicktabs: Voting and Accreditation');
  t('Voting Process');

  $export['voting_and_accreditation'] = $quicktabs;

  return $export;
}
