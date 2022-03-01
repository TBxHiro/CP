<?php

// Name
$fname = $_REQUEST["fname"];
$lname = $_REQUEST["lname"];

if (strlen($fname) < 5 || strlen($lname) < 5) {
  echo "Names must be 5 characters or more";
  echo "; Your Name is " . $fname . " " . $lname;
} else {
  echo "Your Name is " . $fname . " " . $lname;
}

// Password
echo "<br>";
$pass = $_REQUEST["password"];

if (strlen($pass) < 8) {
  echo "Password must be 8 characters or more";
  echo "; Your password is " . $pass;
} else {
  echo "Your password is " . $pass;
}

// Age
echo "<br>";
$age = $_REQUEST["age"];

if (strlen($age) < 1) {
  echo "You must Enter valid age";
  echo "; Your age is 0";
} else {
  echo "Your age is " . $age;
}

// Radio
echo "<br>";
if (isset($_REQUEST["rd"])) {
  echo "You have selected " . $_REQUEST["rd"];
} else {
  echo "You have no radio selection";
}

// Checkbox
echo "<br>";

if (isset($_REQUEST["c1"]) || isset($_REQUEST["c2"]) || isset($_REQUEST["c3"])) {
  echo "You have selected checkbox ";

  if (isset($_REQUEST["c1"]))
    echo $_REQUEST["c1"] . ", ";
  if (isset($_REQUEST["c2"]))
    echo $_REQUEST["c2"] . ", ";
  if (isset($_REQUEST["c3"]))
    echo $_REQUEST["c3"];
} else {
  echo "You have no checkbox selection";
}

// Email
echo "<br>";
$email = $_REQUEST["email"];

if (strlen($email) < 1) {
  echo "You must Enter valid email";
} else {
  echo "Your email is " . $email;
}

// File
echo "<br>";

echo $_FILES["file"]["tmp_name"] . "; ";
echo $_FILES["file"]["type"] . "; ";
echo $_FILES["file"]["size"] . "\n";

if ($_FILES["file"]["name"] == "") {
  echo "Must upload a file!";
} else if ($_FILES["file"]["type"] != "image/jpeg") {
  echo "File must be in JPG format!";
} else if ($_FILES["file"]["size"] > 2 * 1024 * 1024) {
  echo "File size must be less than 2MB!";
} else if (move_uploaded_file($_FILES["file"]["tmp_name"], "../Files/" . "abcd.jpg")) { //$_FILES["file"]["name"]
  echo "File Uploaded\n";
} else {
  echo "Cannot Upload";
}
