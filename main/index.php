<?php
/// My first brief Descripion 
include "../common/preference.php";
?>
<head>
<title>RCC:</title>
<link href="../common/rai.css" rel="stylesheet" type="text/css">
</head><body>
<hr><h1>
<?php /* Edit title of problem below */ ?>
Analysis of Reinforced Concrete Sections
</h1><hr><?php
extract($_POST); // or $_GET
$tableJustification="align=right";

include "head.php"; 
include "rcc0.php"; 

include "../common/footer.php"; 

?>
