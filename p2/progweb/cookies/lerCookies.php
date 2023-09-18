<?php

    $birth_year = $_POST['userBirth'];
    $userAge = date('Y')-$birth_year;
    //$user_name = $_POST['userName'];

    setcookie('age', $userAge, time()+300);
    setcookie('name', $_POST['userName'], time()+300);

    header('Location: utilizarCookies.php');

?>