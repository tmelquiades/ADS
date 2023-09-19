<?php

if($_SESSION['logado'] == 1){

    echo "<!DOCTYPE html>
    <html lang='en'>
    <head>
        <meta charset='UTF-8'>
        <meta name='viewport' content='width=device-width, initial-scale=1.0'>
        <title>Document</title>
    </head>
    <body>
        <h1>Area Restrita</h1>
        <a href='index.html'>Página inicial</a>
    </body>
    </html>";
    
} else {
    header('Location: index.html');
}

?>