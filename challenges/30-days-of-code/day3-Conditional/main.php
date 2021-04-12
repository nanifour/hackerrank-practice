<?php



$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $N);

if (($N % 2 == 0) && ($N < 6 || $N > 20)){
        echo "Not Weird \n";
    } else{
        echo "Weird \n";
    }



fclose($stdin);
