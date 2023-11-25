<?php

    define('HOST', 'localhost');
    define('USER', 'root');
    define('PASS', '');
    define('BASE', 'agenda');

    $conn = new MySQLi(HOST, USER, PASS, BASE);
    