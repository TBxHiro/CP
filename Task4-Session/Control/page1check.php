<?php

session_start();


$haserror = 0;

if (isset($_POST["submit"])) {
    if (empty($_POST["username"])) {
        echo "Username cannot be empty!\n";
        $haserror = 1;
    }

    if (empty($_POST["password"])) {
        echo "Password cannot be empty!";
        $haserror = 1;
    }

    if ($haserror == 0) {
        $_SESSION["username"] = $_POST["username"];
        $_SESSION["password"] = $_POST["password"];

        header("location: ../View/page2.php");
    }
}
