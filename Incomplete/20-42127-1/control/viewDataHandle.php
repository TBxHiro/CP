<?php

include "../model/model.php";
$fname = $lname = $age = $salary = "";

if(isset($_POST['fetch']))
{
    $mydb = new DB();
    $conn = $mydb->opencon();

    $mydata = $mydb->fetchData($conn, 'person');

    if($mydata->num_rows > 0)
    {
        echo "<table>";
        while ( $row = $mydata->fetch_assoc())
        {
            echo "<tr>";
            echo "<td>".$row['fname']."</td>";
            echo "<td>".$row['lname']."</td>";
            echo "<td>".$row['age']."</td>";
            echo "</tr>";
        }
        echo "</table>";
    }
    else 
    {
        echo "no data found!";
    }
}

if(isset($_POST['search']))
{
    $mydb = new DB();
    $conn = $mydb->opencon();

    $mydata = $mydb->searchUser($conn,"person", $_POST['searchdata']);

    if($mydata->num_rows > 0)
    {
        echo "<table>";
        while ( $row = $mydata->fetch_assoc())
        {
            $fname=$row['fname'];
            $lname=$row['lname'];
            $age=$row['age'];
            $salary = $row['salary'];
        }
        echo "</table>";
    }
    else 
    {
        echo "no data found!";
    }
}

?>