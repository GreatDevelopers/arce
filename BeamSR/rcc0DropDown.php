<?php
// This file rcc0.php is used to accept input data for the
// problem.
?>
<form name="main" method="post" action="">
<?php
$i = 0;

include "../common/tableHead.php";

while ($rccList[$i])
{

$rccListExploded[$i] = explode(',', $rccList[$i]);
sort($rccListExploded[$i]);

$rccString[$i]=" $rccDescription[$i]:  </td><td> <select name=rccItem[$i]>";

while ( list($I, $A) = each($rccListExploded[$i])) 
{
	$rccString[$i] .= "\n<option value=";
	$rccString[$i] .= $A; 
	if ($A == $rccDefault[$i]) {$rccString[$i] .= " selected";}
	$rccString[$i] .= ">";
	$rccString[$i] .= $A;
}

if ( ($i % 2) == 0 ) $rowCol = $rowColour0;
else $rowCol = $rowColour1;
$insertCol = "STYLE =\"background: $rowCol \"";

$rccString[$i] .= "</select>";
echo "<tr><td $tableJustification > <p $insertCol>  $rccString[$i]</p> </td></tr> "; 
$i++;

}
include "../common/tableFoot.php";
?>
<br>
<INPUT type=hidden  name=currentStep  value=1 >
<center><input type='submit' name =submit value='Submit'>
</center>
</form>
