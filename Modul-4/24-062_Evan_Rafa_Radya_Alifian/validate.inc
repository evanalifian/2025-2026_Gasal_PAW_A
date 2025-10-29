<?php

$errors = [];

function validateForm($fieldName, $fieldNIM) {
  global $errors;

  if ($fieldName == "") {
    $errors[] = "Nama tidak boleh kosong";
  }

  if ($fieldNIM == "") {
    $errors[] = "NIM tidak boleh kosong";
  }
  return $errors;
}