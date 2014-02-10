<?php

$path = "";
$fileName = "rai001.txt";
$myCommand = "sh raiKK";
//$myCommand = "pwd";
$fileTex = $path . $fileName ;

//shell_exec($myCommand); 

$result = array();
exec( $myCommand, &$result);
foreach ( $result as $v )
{

echo "$v \n<br>";

// parse, or do cool stuff
}

unlink($fileTex);
touch($fileTex);

$fText = fopen($fileTex,"w");

?>