<?php
/**
 * @file
 * crealead_documents.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_documents_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filedepot_default_notify_filechange';
  $strongarm->value = 1;
  $export['filedepot_default_notify_filechange'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filedepot_default_notify_newfile';
  $strongarm->value = 1;
  $export['filedepot_default_notify_newfile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filedepot_email_to';
  $strongarm->value = 'noreply@crealead.com';
  $export['filedepot_email_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filedepot_extension_data';
  $strongarm->value = 'a:13:{s:3:"jpg";s:7:"jpg.gif";s:3:"gif";s:7:"gif.gif";s:3:"bmp";s:7:"bmp.gif";s:3:"doc";s:7:"doc.gif";s:4:"docx";s:7:"doc.gif";s:3:"xls";s:7:"xls.gif";s:4:"xlsx";s:7:"xls.gif";s:3:"ppt";s:7:"ppt.gif";s:4:"pptx";s:7:"ppt.gif";s:3:"mpp";s:7:"mpp.gif";s:3:"pdf";s:7:"pdf.gif";s:3:"txt";s:7:"txt.gif";s:3:"zip";s:7:"zip.gif";}';
  $export['filedepot_extension_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filedepot_yui_baseurl';
  $strongarm->value = 'https://yui-s.yahooapis.com/2.7.0/build/';
  $export['filedepot_yui_baseurl'] = $strongarm;

  return $export;
}
