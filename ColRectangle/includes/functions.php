<?php
//
// This file includes/functions.php contain function to solve problem.
//
// Change code in following function, as per need.

function moment_of_resistance($E, &$designParameter, &$designParameterRes)
{

// You may assign relavent names to input parameters

$stArea = (3.141 / 4.0 ) * $designParameter[5] * $designParameter[4] * $designParameter[4];
$stArea += (3.141 / 4.0 ) * $designParameter[7] * $designParameter[6] * $designParameter[6];
$stArea += (3.141 / 4.0 ) * $designParameter[9] * $designParameter[8] * $designParameter[8];

$grossArea =  $designParameter[2] * $designParameter[3];

$designParameterRes[] = ( 0.4 * $designParameter[0] * 
                          ( $grossArea - $stArea) + 0.67 *
                        $designParameter[1] * $stArea ) / 1000.0;

$designParameterRes[] = $stArea ;
$designParameterRes[] = 100.0 * $stArea / $grossArea ;

// $designParameterRes[] = $otheParameters ; // other parameters ...
 
}

?>
