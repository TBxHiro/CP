<?php
include "../control/viewDataHandle.php";
?>

<html>

<body>
    <form action="" method="post">
        <input type="submit" name="fetch" value="Fetch Data">
    </form>

    <form action="" method="post">
        <input type="text" name="searchdata">
        <input type="submit" name="search" value="Search Data">
    </form>

    <form action="" method="post">
        <input type="text" name="fname" value="<?php echo $fname ?>">
        <input type="text" name="lname" value="<?php echo $lname ?>">
        <input type="text" name="age" value="<?php echo $age ?>">
        <input type="text" name="salary" value="<?php echo $salary ?>">
        <input type="submit" name="update" value="Search Data">
    </form>
</body>

</html>