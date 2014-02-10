<?php
/// My first brief Descripion 
/**
 * First file 'indx.php' to calculate area and perimeter of rectangle
 *
 * You need to edit following two file to solve a new problem, and
 * third one to change colour scheme.
*/
include "../common/preference.php";
include "includes/head.php"; 
include "includes/functions.php";

// -----------------------------------------------------
// Normally you do not need to edit anything below this:
// -----------------------------------------------------


if ( $inputType ==1 ) $rccFile = "rcc0.php" ;
else $rccFile = "rcc0DropDown.php";
?>
<h3>
Force/Load is in Newtons (N) and Length is in Millimetres (mm),
unless otherwise specified.</h3>
<?php
switch ($currentStep)
{
   case "1":

	include "rcc1.php";
	break;

   default:
	include $rccFile;
	break;

}

include "../common/footer.php"; 

?>
