<?php

$nome = $_COOKIE['name'];
$idade = $_COOKIE['age'];

echo "<!DOCTYPE html>
<html lang='en'>
<head>
    <meta charset='UTF-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1.0'>
    <title>Where the cookies know my name</title>
</head>
<body>
    <p>O usuario $nome tem $idade anos de idade.</p>
</body>
</html>";

?>