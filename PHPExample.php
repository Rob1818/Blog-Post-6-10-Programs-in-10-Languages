<?php

function compoundInterest($initial, $rate, $years) {
  $final = $initial * pow(1 + $rate / 100, $years);
  return $final;
}

$final = compoundInterest(10000, 10, 10);

echo $final;

// Output: 25937.424601
// Run this code at https://onlinephp.io/