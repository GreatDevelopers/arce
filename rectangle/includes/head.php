<?php

// This file includes/head.php; Define here input and output parameters
// and set default values for input variables.
?><head>
<title>RCC:</title>
<link href="../common/rai.css" rel="stylesheet" type="text/css">
</head><body>
<hr><h1>
<?php /* Edit title of problem below */ ?>
Properties of<br>
Rectangle
</h1><hr><?php
extract($_POST); // or $_GET
$tableJustification="align=right";

// Define constants required to solve problem, you need to declare
// them as global;
// Material: Concrete Mix
// global $Es;		   //uncomment this, to use $Es in your problem
// $Es = 200; $Es *= 1000; //uncomment this, to use $Es in your problem



// Specify input parameters and their defalt value

// 1st input parameter

$rccDescription[]="Width"; // 'Width' is 1st parameter
$rccDefault[] = "200";	   // '200' is default value of 1st parameter

// 2nd input parameter

$rccDescription[]="Length";
$rccDefault[] = "800";

// Add more input parameters as per your problem
// 3rd input parameters and so on ...

// Things to find, or descripution of output parameters 

$rccDescriptionRes[]="Area";	// 'Area' is 1st parameter
$rccDescriptionRes[]="Perimeter";	// 'Perimeter' is 2nd parameter

// Add more output parameters as per your problem
// 3rd output parameters and so on ...

/*  
// 
$rccDescription[]="";		// more output parameter
*/

if ( $inputType != 1) include "headDropDownData.php"; 

?>
