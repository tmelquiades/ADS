<?php
    $bmenor = $_POST['basemenor'];
    $bmaior = $_POST['basemaior'];
    $altura = $_POST['altura'];

    $area = (($bmenor+$bmaior)*$altura)/2;

    echo "Area do trapezio é $area m²";
?>