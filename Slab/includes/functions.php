<?php
function moment_of_resistance($E, &$designParameter, &$designParameterRes)
{
$width = 1000.0 ;
$clearCover = $designParameter[11];
$stAreaX1  = (3.141 / 4.0 ) / $designParameter[4] * $designParameter[3] * $designParameter[3] * 1000.;
$totalAreaX = $stAreaX1;
$coverX1 = $designParameter[3] / 2.0;

if ( $designParameter[5] != 0 )
{
$stAreaX2  = (3.141 / 4.0 ) / $designParameter[6] * $designParameter[5] * $designParameter[5] * 1000.;
$totalAreaX += $stAreaX2 ;
$coverX1 = ( $stAreaX1 * $designParameter[3] * 0.5 +
             $stAreaX2 * $designParameter[5] * 0.5  ) / ( $totalAreaX );
}

$dx = $designParameter[2] - $clearCover - $coverX1;
$designParameterRes[] = $dx;
$fxu = 0.87 * $designParameter[1] * $totalAreaX / (0.36 * $designParameter[0] * $width * $dx );
$designParameterRes[] = $fxu;
$tmp1 = 0.85 * $designParameter[1] / $E + 0.002 ;
$xulim = 0.0035 / (0.0035 + $tmp1);

$designParameterRes[] = $xulim;

if ($fxu < $xulim )
{

$tmp1 = $totalAreaX * $designParameter[1] / 
		( $width * $dx * $designParameter[0] ) ;
$tmp1 =  1.0 - $tmp1 ;
$tmp1 *= 0.87 * $designParameter[1] * $totalAreaX * $dx ;
$designParameterRes[] = $tmp1 / 1.0E06 ;
}
else
{
	$designParameterRes[]=  0.0 ;
}

$designParameterRes[] = $totalAreaX ;
$designParameterRes[] = 100.0 * $totalAreaX / ( $width * $dx )  ;
$designParameterRes[] = 100.0 * $totalAreaX / ( $width * $designParameter[2] )  ;

// y - direction

// Read X as Y

$stAreaX1  = (3.141 / 4.0 ) / $designParameter[8] * $designParameter[7] * $designParameter[7] * 1000.;
$totalAreaX = $stAreaX1;
$coverX1 = $designParameter[7] / 2.0;

if ( $designParameter[9] != 0 )
{
$stAreaX2  = (3.141 / 4.0 ) / $designParameter[10] * $designParameter[9] * $designParameter[9] * 1000.;
$totalAreaX += $stAreaX2 ;
$coverX1 = ( $stAreaX1 * $designParameter[7] * 0.5 +
             $stAreaX2 * $designParameter[9] * 0.5  ) / ( $totalAreaX );
}

$dxMax = $designParameter[3];
if ( $designParameter[5] > $designParameter[3] ) $dxMax = $designParameter[5];

$dx = $designParameter[2] - $clearCover - $dxMax - $coverX1 ;
$designParameterRes[] = $dx;
$fxu = 0.87 * $designParameter[1] * $totalAreaX / (0.36 * $designParameter[0] * $width * $dx );
$designParameterRes[] = $fxu;
$tmp1 = 0.85 * $designParameter[1] / $E + 0.002 ;
$xulim = 0.0035 / (0.0035 + $tmp1);

$designParameterRes[] = $xulim;

if ($fxu < $xulim )
{

$tmp1 = $totalAreaX * $designParameter[1] / 
		( $width * $dx * $designParameter[0] ) ;
$tmp1 =  1.0 - $tmp1 ;
$tmp1 *= 0.87 * $designParameter[1] * $totalAreaX * $dx ;
$designParameterRes[] = $tmp1 / 1.0E06 ;
}
else
{
	$designParameterRes[]=  0.0 ;
}

$designParameterRes[] = $totalAreaX ;
$designParameterRes[] = 100.0 * $totalAreaX / ( $width * $dx )  ;
$designParameterRes[] = 100.0 * $totalAreaX / ( $width * $designParameter[2] )  ;


}
?>
