<?php
//
// This file includes/functions.php contain function to solve problem.
//
// Change code in following function, as per need.

function moment_of_resistance($E, &$designParameter, &$designParameterRes)
{

// You may assign relavent names to input parameters

$b = $designParameter[0] ;
$d = $designParameter[1] ;

// Perform alculations to find results / values of output parameters
$Area = $b * $d ;
$Peri = 2 * ( $b + $d ) ;

// Put output parameters in array in sequence / order.
$designParameterRes[] = $Area ; 
$designParameterRes[] = $Peri ;
// $designParameterRes[] = $otheParameters ; // other parameters ...
 
}

?>
