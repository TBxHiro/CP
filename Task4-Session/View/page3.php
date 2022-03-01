<?php
session_start();

echo $_SESSION["username"] . "\n";
echo $_SESSION["password"] . "\n";
echo $_SESSION["radio"] . "\n";
echo $_SESSION["c1"] . "\n";
echo $_SESSION["c2"] . "\n";
echo $_SESSION["c3"] . "\n";
echo $_SESSION["email"];
?>

<html>

<body>
    <a href="../Control/logout.php">Log Out</a>
</body>

</html>