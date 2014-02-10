<?php
function moment_of_resistance($E, &$designParameter, &$designParameterRes)
{

$PI=3.141;

$designParameterRes[] = $designParameter[1] * $designParameter[0];

$designParameterRes[] = $PI / 4 * $designParameter[2] * $designParameter[2];

$designParameterRes[] = $designParameterRes[0] - $designParameterRes[1];

}
?>
