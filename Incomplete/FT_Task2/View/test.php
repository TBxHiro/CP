<?php
include "../Control/results.php";
//include "../css/mystyle.css";

?>
<html>

<head>
  <title>FT_Task1</title>
  <link rel="stylesheet" href="../css/mystyle.css">
</head>

<body>
  <h2> Validation Form </h2>
  <hr>

  <form action="" method="post">
    <input type="submit" name="Fetch" value="Fetch Data">
  </form>
  <hr>
  <br>

  <form action="" method="post"><input type="text" name="searchname" placeholder="First Name">
    <input type="submit" name="Search" value="Search Data">
  </form>
  <hr>
  <br>

  <!-- css -->
  <div id="box">

    <form action="" method="post" enctype="multipart/form-data">
      <!-- <p id="labels"> -->
      <table>
        <tr>
          <td id="labels">First Name:</td>
          <td><input type="text" name="fname" value=<?= $fname ?>> </td>
        </tr>
        <tr>
          <td>Last Name:</td>
          <td><input type="text" name="lname" value=<?= $lname ?>></td>
        </tr>
        <tr>
          <td>Age:</td>
          <td><input type="text" name="age" value=<?= $age ?>></td>
        </tr>
        <tr>
          <td>Designation:</td>
          <td>
            <input type="radio" name="rd" <?php if ($dgn == "Junior Programmer") echo "checked"; ?> value="Junior Programmer"> Junior Programmer
            <input type="radio" name="rd" <?php if ($dgn == "Senior Programmer") echo "checked"; ?> value="Senior Programmer"> Senior Programmer
            <input type="radio" name="rd" <?php if ($dgn == "Project Lead") echo "checked"; ?> value="Project Lead"> Project Lead
          </td>
        </tr>
        <tr>
          <td>Preferred language:</td>
          <td>
            <input type="checkbox" name="c1" <?php if ($c1) echo "checked"; ?> value="JAVA"> JAVA
            <input type="checkbox" name="c2" <?php if ($c2) echo "checked"; ?> value="PHP"> PHP
            <input type="checkbox" name="c3" <?php if ($c3) echo "checked"; ?> value="C++"> C++
          </td>
        </tr>
        <tr>
          <td>E-mail:</td>
          <td><input type="email" name="email" value=<?= $email ?>></td>
        </tr>
        <tr>
          <td>Password:</td>
          <td><input type="password" name="password" value=<?= $pass ?>></td>
        </tr>
        <tr>
          <td>Please choose a file:</td>
          <td><input type="file" name="file"></td>
        </tr>

      </table>

      <input type="submit" class="button btnsubmit" name="Submit">
      <input type="submit" class="button btnupdate" name="Update" value="Update">
      <input type="reset" class="button btnreset" name="reset">
  </div>

  </form>

</body>

</html>