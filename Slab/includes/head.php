<?php

// This file includes/head.php; Define here input and output parameters
// and set default values for input variables.
?><head>
<title>RCC</title>
<link href="../common/rai.css" rel="stylesheet" type="text/css">
</head><body>
<hr><h1>
<?php /* Edit title of problem below */ ?>
Moment of Resistance of Slab<br>
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

$rccDescription[]="Depth (D)";
$rccDefault[] = "120";

// Dia of reinforement on tension face

$rccDescription[]="Dia of reinf. [Along x, Type 1]";
$rccDefault[] = "10";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Spacing [Along x, Type 1]";
$rccDefault[] = "120";

// Dia of reinforement on tension face

$rccDescription[]="Dia of reinf. [Along x, Type 2]";
$rccDefault[] = "0";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Spacing [Along x, Type 2]";
$rccDefault[] = "0";

// Dia of reinforement on tension face

$rccDescription[]="Dia of reinf. [Along y, Type 1]";
$rccDefault[] = "8";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Spacing [Along y, Type 1]";
$rccDefault[] = "150";

// Dia of reinforement on tension face

$rccDescription[]="Dia of reinf. [Along y, Type 2]";
$rccDefault[] = "0";

// Number of bars of dia seleted above, on tension face

$rccDescription[]="Spacing [Along y, Type 2]";
$rccDefault[] = "0";


// Effective cover to tension reinforement

$rccDescription[]="Clear cover";
$rccDefault[] = "15";

// Description for output parameters:

$rccDescriptionRes[]="d<sub>x</sub>";
$rccDescriptionRes[]="x<sub>u</sub> / d";
$rccDescriptionRes[]="x<sub>u,lim</sub> / d";
$rccDescriptionRes[]="M<sub>u,x</sub>(kNm)";
$rccDescriptionRes[]="Steel ( mm<sup>2</sup> / m )";
$rccDescriptionRes[]="Steel (%)";
$rccDescriptionRes[]="Steel (%) w.r.t gross conc. area";

$rccDescriptionRes[]="d<sub>y</sub>";
$rccDescriptionRes[]="x<sub>u</sub> / d";
$rccDescriptionRes[]="x<sub>u,lim</sub> / d";
$rccDescriptionRes[]="M<sub>u,y</sub>(kNm)";
$rccDescriptionRes[]="Steel ( mm<sup>2</sup> / m )";
$rccDescriptionRes[]="Steel (%)";
$rccDescriptionRes[]="Steel (%) w.r.t gross conc. area";

if ( $inputType != 1) include "headDropDownData.php"; 

?>
