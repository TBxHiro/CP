<?php

class DB{

    function opencon()
    {
        $dbhost = "localhost";
        $dbuser = "root";
        $dbpass = "";
        $dbname = "testdb1";

        $conn = new mysqli($dbhost, $dbuser, $dbpass, $dbname);
        if($conn->connect_error)
        {
            echo "cannot connect".$conn->connect_error;
        }

        return $conn;
    }

    function insertData($fname, $lname, $age, $tablename, $conn)
    {
        $sqlstr = "INSERT INTO $tablename (fname,lname, age)
        VALUES('$fname', '$lname', '$age')";
        
        if($conn->query($sqlstr))
        {
            echo "record Inseted!";
        }
        else 
        {
            echo "Cannot insert record!";
        }
    }

    function fetchData($conn, $tablename)
    {
        $sqlstr = "SELECT * FROM $tablename";
        $query = $conn->query($sqlstr);
        return $query;
    }

    function searchUser($conn, $tablename, $fname)
    {
        $sqlstr = "SELECT * FROM $tablename WHERE fname = '$fname'";
        $query = $conn->query($sqlstr);
        return $query;
    }

    function updateData($conn, $tablename, $fname, $lname, $age, $salary)
    {
        $sqlstr = "UPDATE $tablename SET fname='$fname', lname='$lname', age='$age', 
        salary='$salary' WHERE 
    }

    function closecon($conn)
    {
        $conn->close();
    }
}

?>
