<?php

// This file includes/head.php; Define here input and output parameters
// and set default values for input variables.
?><head>
<title>RCC</title>
<link href="../common/rai.css" rel="stylesheet" type="text/css">
</head><body>
<hr><h1>
<?php /* Edit title of problem below */ ?>
Moment of Resistance of Rectagular Section <br>
by<br>
Limit State Philosophy
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

$rccDescription[]="Grade of Concrete";
$rccDefault[] = "20";

// Material: Grade of Steel

$rccDescription[]="Grade of Steel";
$rccDefault[] = "415";

// Width of Section

$rccDescription[]="Width (b)";
$rccDefault[] = "250";

// Overall depth of Section

$rccDescription[]="Overall depth (D)";
$rccDefault[] = "450";

// Dia of reinforement on tension face

$rccDescription[]="Dia of reinf. on tension face [Layer 1, Type 1]";
$rccDefault[] = "16";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Number of bars on tension face [Layer 1, Type 1]";
$rccDefault[] = "3";

$rccDescription[]="Dia of reinf. on tension face [Layer 1, Type 2]";
$rccDefault[] = "0";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Number of bars on tension face [Layer 1, Type 2]";
$rccDefault[] = "0";

$rccDescription[]="Dia of reinf. on tension face [Layer 2, Type 1]";
$rccDefault[] = "0";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Number of bars on tension face [Layer 2, Type 1]";
$rccDefault[] = "0";

// Dia of reinforement on tension face

$rccDescription[]="Dia of reinf. on tension face [Layer 2, Type 2]";
$rccDefault[] = "0";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Number of bars on tension face [Layer 2, Type 2]";
$rccDefault[] = "0";

$rccDescription[]="Dia of reinf. on tension face [Layer 3, Type 1]";
$rccDefault[] = "0";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Number of bars on tension face [Layer 3, Type 1]";
$rccDefault[] = "0";

$rccDescription[]="Dia of reinf. on tension face [Layer 3, Type 2]";
$rccDefault[] = "0";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Number of bars on tension face [Layer 3, Type 2]";
$rccDefault[] = "0";

// Effective cover to tension reinforement

$rccDescription[]="Effective cover";
$rccDefault[] = "20";

// Description for output parameters:

$rccDescriptionRes[]="d";
$rccDescriptionRes[]="x<sub>u</sub> / d";
$rccDescriptionRes[]="x<sub>u,lim</sub> / d";
$rccDescriptionRes[]="M<sub>u</sub>(kNm)";
$rccDescriptionRes[]="A<sub>st</sub>";
$rccDescriptionRes[]="Steel (%)";

if ( $inputType != 1) include "headDropDownData.php"; 

?>
