<?php
// This file rcc0.php is used to accept input data for the
// problem.

include "../common/tableHead.php";
$i = 0;
while($rccDescription1[$i])
{
if ( ($i % 2) == 0 ) $rowCol = $rowColour0;
else $rowCol = $rowColour1;

$insertCol = "STYLE =\"background: $rowCol \"";
$var1  = "<tr><td $tableJustification >";

$rccString[$i]=" $rccDescription1[$i]:";
$rccString[$i] .= "<a href=\" $rccDescription3[$i]\">";
$rccString[$i] .= "$rccDescription2[$i]</a>";
$rccString[$i] .=  " </td><td>  ";

$var1 .= "<p $insertCol> $rccString[$i]</p>";
$var1 .= "</td></tr>"; 
if (file_exists($rccDescription3[$i]))
  echo $var1;
$i++;
}
include "../common/tableFoot.php";
?>
<br>
