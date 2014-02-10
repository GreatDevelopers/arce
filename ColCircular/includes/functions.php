<?php
//
// This file includes/functions.php contain function to solve problem.
//
// Change code in following function, as per need.

function moment_of_resistance($E, &$designParameter, &$designParameterRes)
{

// You may assign relavent names to input parameters

$stArea = (3.141 / 4.0 ) * $designParameter[4] * $designParameter[3] * $designParameter[3];
$stArea += (3.141 / 4.0 ) * $designParameter[7] * $designParameter[6] * $designParameter[6];

$grossArea =  (3.141 / 4.0 ) * $designParameter[2] * $designParameter[2];

$facLoad = ( 0.4 * $designParameter[0] * 
                          ( $grossArea - $stArea) + 0.67 *
                        $designParameter[1] * $stArea ) / 1000.0;

$designParameterRes[] = $facLoad ;

$designParameterRes[] = 1.05 * $facLoad ;

$designParameterRes[] = $stArea ;
$designParameterRes[] = 100.0 * $stArea / $grossArea ;

// $designParameterRes[] = $otheParameters ; // other parameters ...
 
}

?>
