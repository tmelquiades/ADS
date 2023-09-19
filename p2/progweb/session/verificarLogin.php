<?php

$usuarioPadrao = "thatha@gmail.com";
$senhaPadrao = "MarThaP0W3R!";

if(($usuarioPadrao == $_POST['emailUser']) && ($senhaPadrao == $_POST['password'])){
    session_start();
    $_SESSION['logado'] = 1;
    header('Location: arearestrita.php');
} else {
    header('Location: falha.html');
}

?>