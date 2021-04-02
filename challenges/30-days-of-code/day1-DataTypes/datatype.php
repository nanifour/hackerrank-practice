<?php
$handle = fopen ("php://stdin","r");
$i = 4;
$d = 4.0;
$s = "HackerRank ";
// Declare second integer, double, and String variables.
// Read and save an integer, double, and String to your variables.
$int = readline('');
$doub = readline('');
$str = readline('');

$dubdecimal = number_format($doub, 3, '.', '');
// Print the sum of both integer variables on a new line.
// Print the sum of the double variables on a new line.
echo $i + $int."\n";
echo sprintf("%.1f", $d + $doub);
echo "\n";
// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
echo $s.$str;

fclose($handle);
?>