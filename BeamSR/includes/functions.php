<?php
function moment_of_resistance($E, &$designParameter, &$designParameterRes)
{

$fd = $designParameter[3] - $designParameter[16];
$designParameterRes[] = $fd;

$stArea  = (3.141 / 4.0 ) * $designParameter[5] * $designParameter[4] * $designParameter[4];
$stArea += (3.141 / 4.0 ) * $designParameter[7] * $designParameter[6] * $designParameter[6];
$stArea += (3.141 / 4.0 ) * $designParameter[9] * $designParameter[8] * $designParameter[8];
$stArea += (3.141 / 4.0 ) * $designParameter[11] * $designParameter[10] * $designParameter[10];
$stArea += (3.141 / 4.0 ) * $designParameter[13] * $designParameter[12] * $designParameter[12];
$stArea += (3.141 / 4.0 ) * $designParameter[15] * $designParameter[14] * $designParameter[14];

$fxu = 0.87 * $designParameter[1] * $stArea / (0.36 * $designParameter[0] * $designParameter[2] * $fd );
$designParameterRes[] = $fxu;
$tmp1 = 0.85 * $designParameter[1] / $E + 0.002 ;
$xulim = 0.0035 / (0.0035 + $tmp1);

$designParameterRes[] = $xulim;

if ($fxu < $xulim )
{

$tmp1 = $stArea * $designParameter[1] / 
		( $designParameter[2] * $fd * $designParameter[0] ) ;
$tmp1 =  1.0 - $tmp1 ;
$tmp1 *= 0.87 * $designParameter[1] * $stArea * $fd ;
$designParameterRes[] = $tmp1 / 1.0E06 ;
}
else
{
	$designParameterRes[]=  0.0 ;
}

$designParameterRes[] = $stArea ;
$designParameterRes[] = 100.0 * $stArea / ( $designParameter[2] * $fd )  ;

}
?>
