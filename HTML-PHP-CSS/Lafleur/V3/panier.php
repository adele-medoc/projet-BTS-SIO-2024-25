<?php

session_start();
if (isset($_GET["ajout"]))
{ 
    $i = count($_SESSION["reference"]);
    $_SESSION['reference'][$i] = $_GET['reference'];
    $_SESSION['quantite'][$i] = $_GET['quantite']; 
    
}

if (isset($_GET["supp"])){
    $_SESSION["reference"] = array();
    $_SESSION["quantite"] = array();
}

header("Location: menu.php");