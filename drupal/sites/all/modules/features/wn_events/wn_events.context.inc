<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function wn_events_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_pages';
  $context->description = 'Context triggered when viewing event pages.';
  $context->tag = 'content_types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'wn_common-0' => array(
          'module' => 'wn_common',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-ce3c6f72a6fff470fd9f1ade8c7b668c' => array(
          'module' => 'views',
          'delta' => 'ce3c6f72a6fff470fd9f1ade8c7b668c',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context triggered when viewing event pages.');
  t('content_types');

  $export['event_pages'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_header';
  $context->description = 'Header content on the events listing page.';
  $context->tag = 'views';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'events:page_1' => 'events:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-events' => array(
          'module' => 'boxes',
          'delta' => 'events',
          'region' => 'preface',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header content on the events listing page.');
  t('views');

  $export['events_header'] = $context;
  return $export;
}