<?php

// This file includes/head.php; Define here input and output parameters
// and set default values for input variables.
?><head>
<title>RCC</title>
<link href="../common/rai.css" rel="stylesheet" type="text/css">
</head><body>
<hr><h1>
<?php /* Edit title of problem below */ ?>
Load Carrying Capacity for Circular Column<br>
by<br>
Limit State Philosophy
</h1><hr><?php
extract($_POST); // or $_GET
$tableJustification="align=right";

// Define constants required to solve problem, you need to declare
// them as global;
// Material: Concrete Mix
// global $Es;		   //uncomment this, to use $Es in your problem
// $Es = 200; $Es *= 1000; //uncomment this, to use $Es in your problem


// Specify input parameters and their defalt value

// Material: Grade of Concrete

$rccDescription[]="Grade of Concrete";
$rccDefault[] = "20";

// Material: Grade of Steel

$rccDescription[]="Grade of Steel";
$rccDefault[] = "415";

// Width of Section

$rccDescription[]="Diameter (D)";
$rccDefault[] = "300";

// Dia of reinforement

$rccDescription[]="Dia of reinf. [Type 1]";
$rccDefault[] = "16";

// Number of bars of dia seleted above

$rccDescription[]="Number of bars [Type 1]";
$rccDefault[] = "6";

// Dia of reinforement

$rccDescription[]="Dia of reinf. [Type 2]";
$rccDefault[] = "0";

// Number of bars of dia seleted above

$rccDescription[]="Number of bars [Type 2]";
$rccDefault[] = "0";

// Things to find, or descripution of output parameters 

$rccDescriptionRes[]="P<sub>u</sub>(kN) (with ties)";
$rccDescriptionRes[]="P<sub>u</sub>(kN) (with spiral)";
$rccDescriptionRes[]="A<sub>sc</sub>";
$rccDescriptionRes[]="Steel (%)";

if ( $inputType != 1) include "headDropDownData.php"; 

?>
