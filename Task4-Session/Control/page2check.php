<?php
session_start();

echo $_SESSION["username"];
echo $_SESSION["password"];

if (isset($_POST["submit"])) {

    // Radio
    $radio = $_REQUEST["rd"];

    if (isset($radio)) {
        $_SESSION["radio"] = $radio;
    } else {
        echo "You have no radio selection";
    }

    // Checkbox
    $c1 = $_REQUEST["c1"];
    $c2 = $_REQUEST["c2"];
    $c3 = $_REQUEST["c3"];

    if (isset($c1) || isset($c2) || isset($c3)) {
        //echo "You have selected checkbox ";

        if (isset($c1))
            $_SESSION["c1"] = $c1;

        //echo $c1 . ", ";
        if (isset($c2))
            $_SESSION["c2"] = $c2;

        //echo $c2 . ", ";
        if (isset($c3))
            $_SESSION["c3"] = $c3;

        //echo $_REQUEST["c3"];
    } else {
        echo "You have no checkbox selection";
    }

    // Email
    $email = $_REQUEST["email"];

    if (strlen($email) < 1) {
        echo "You must Enter valid email";
    } else {
        $_SESSION["email"] = $email;
        //echo "Your email is " . $email;
    }

    // File
    // if ($_FILES["file"]["name"] == "") {
    //     echo "Must upload a file!";
    // } else if ($_FILES["file"]["type"] != "image/jpeg") {
    //     echo "File must be in JPG format!";
    // } else if ($_FILES["file"]["size"] > 2 * 1024 * 1024) {
    //     echo "File size must be less than 2MB!";
    // } else if (move_uploaded_file($_FILES["file"]["tmp_name"], "../Files/" . "abcd.jpg")) { //$_FILES["file"]["name"]
    //     echo "File Uploaded\n";
    // } else {
    //     echo "Cannot Upload";
    // }

    if ($haserror == 0) {
        header("location: ../View/page3.php");
    }
}
