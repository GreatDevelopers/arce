<?php

// Specify list of possible values for input parameters

// 1st input parameter

if (isset($rccList)) {
    $rccList[] = "50,100,200,500";    // Possible values
} else {
    $rccList = array("50,100,200,500");
}

// 2nd input parameter

if (isset($rccList)) {
    $rccList[] = "450,500,750,800,900,1000";
} else {
    $rccList = array("450,500,750,800,900,1000");
}

// Add more input parameters as per your problem
// 3rd input parameters and so on ...

?>
