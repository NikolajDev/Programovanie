<?php
$servername = "localhost";
$username = "borys_niky";
$password = "n1kyd3v7890";

// Create connection
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";
?>