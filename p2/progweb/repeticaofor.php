<?php
    $numbers = array(2, 4, 5, 1, 9, 16);
    $sum = 0;

    for($count=0; $count<=5; $count++){
        $sum += $numbers[$count];
        echo "$sum<br>";
    }
?>