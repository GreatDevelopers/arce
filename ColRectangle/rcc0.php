<?php
// This file rcc0.php is used to accept input data for the
// problem.
?>
<form name="main" method="post" action="">
<?php
include "../common/tableHead.php";
$i = 0;
while($rccDescription[$i])
{
$rccString[$i]=" $rccDescription[$i]:  </td><td> 
<input type=text size = 4 value=$rccDefault[$i] name=rccItem[$i]> ";

if ( ($i % 2) == 0 ) $rowCol = $rowColour0;
else $rowCol = $rowColour1;
$insertCol = "STYLE =\"background: $rowCol \"";

$var1  = "<tr><td $tableJustification >";
$var1 .= "<p $insertCol> $rccString[$i]</p>";
$var1 .= "</td></tr>"; 
echo $var1;
$i++;
}
include "../common/tableFoot.php";
?>
<br>
<INPUT type=hidden  name=currentStep  value=1 >
<center><input type='submit' name =submit value='Submit' ></center>
</form>
