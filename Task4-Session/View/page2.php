<?php
include "../Control/page2check.php";

?>

<html>

<body>
    <form action="" method="post" enctype="multipart/form-data">
        <table>
            <tr>
                <td>Designation:</td>
                <td>
                    <input type="radio" name="rd" value="Junior Programmer"> Junior Programmer
                    <input type="radio" name="rd" value="Senior Programmer"> Senior Programmer
                    <input type="radio" name="rd" value="Project Lead"> Project Lead
                </td>
            </tr>
            <tr>
                <td>Preferred language:</td>
                <td>
                    <input type="checkbox" name="c1" value="JAVA"> JAVA
                    <input type="checkbox" name="c2" value="PHP"> PHP
                    <input type="checkbox" name="c3" value="C++"> C++
                </td>
            </tr>
            <tr>
                <td>E-mail:</td>
                <td><input type="email" name="email"></td>
            </tr>
            <tr>
                <td>Please choose a file:</td>
                <td><input type="file" name="file"></td>
            </tr>

        </table>

        <input type="submit" name="submit">
        <input type="reset" name="reset">
    </form>
</body>

</html>