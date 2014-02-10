<?php

// This file includes/head.php; Define here input and output parameters
// and set default values for input variables.
?><head>
<title>Demo</title>
<link href="../common/rai.css" rel="stylesheet" type="text/css">
</head><body>
<hr><h1>
<?php /* Edit title of problem below */ ?>
Rectangle Minus Circle
</h1><hr><?php
extract($_POST); // or $_GET
$tableJustification="align=right";

// Define constants required to solve problem, you need to declare
// them as global;
// Material: Concrete Mix
// global $Es;		   //uncomment this, to use $Es in your problem
$Es = 200; $Es *= 1000; //uncomment this, to use $Es in your problem



// Specify input parameters and their defalt value

// 1st input parameter

$rccDescription[]="First Side of Rectangle";
$rccDefault[] = "100";

// 2nd input parameter

$rccDescription[]="Second side of Rectangle";
$rccDefault[] = "120";

// 3rd input parameter

$rccDescription[]="Diameter of Circle";
$rccDefault[] = "90";

// Description for output parameters:

$rccDescriptionRes[]="Area of Rectangle (A<sub>r</sub>)";
$rccDescriptionRes[]="Area of Circle (A<sub>c</sub>)";
$rccDescriptionRes[]="A<sub>r</sub> - A<sub>c</sub>";

if ( $inputType != 1) include "headDropDownData.php"; 

?>
