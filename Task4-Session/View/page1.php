<?php
include "../Control/page1check.php";
?>

<html>

<head>
  <title>Task4</title>
</head>

<body>
  <h2> Validation Form </h2>
  <hr>

  <form action="" method="post" enctype="multipart/form-data">
    <table>
      <td>Username:</td>
      <td><input type="text" name="username"></td>
      </tr>
      <tr>
        <td>Password:</td>
        <td><input type="password" name="password"></td>
      </tr>

    </table>

    <input type="submit" name="submit">
  </form>

</body>

</html>