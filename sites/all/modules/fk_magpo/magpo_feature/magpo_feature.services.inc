<?php
/**
 * @file
 * magpo_feature.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function magpo_feature_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass;
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'poem';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'poem_rest';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'rest_server' => array(
      'formatters' => array(
        'json' => TRUE,
        'bencode' => FALSE,
        'jsonp' => FALSE,
        'php' => FALSE,
        'rss' => FALSE,
        'xml' => FALSE,
        'yaml' => FALSE,
      ),
      'parsers' => array(
        'application/json' => TRUE,
        'application/vnd.php.serialized' => FALSE,
        'application/x-www-form-urlencoded' => FALSE,
        'application/x-yaml' => FALSE,
        'multipart/form-data' => FALSE,
      ),
    ),
  );
  $endpoint->resources = array(
    'node' => array(
      'alias' => 'n',
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
        'create' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'user' => array(
      'alias' => 'u',
      'actions' => array(
        'login' => array(
          'enabled' => 1,
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['poem'] = $endpoint;

  return $export;
}
