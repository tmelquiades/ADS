<?php
    $nascimento = $_GET['Year'];    
    $hoje = date('Y');
    $idade = $hoje-$nascimento;
    
    echo "Tens $idade anos.";
?>