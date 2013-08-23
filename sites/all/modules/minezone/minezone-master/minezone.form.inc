<?php 
/**
 * Please do not commit to this project
 */

function minezone_form($form) {
  $form = array();
  
  $form['markup'] = array('#markup' => t("Please do not commit to this project"));
  
  return $form;
}