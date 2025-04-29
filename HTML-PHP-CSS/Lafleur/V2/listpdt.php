<?php
echo "<!DOCTYPE html>
    <html>
        <head> 
            <meta charset='UTF-8'/>
            <link rel='stylesheet' href='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css'>
            <title> Produits </title>
        </head> 
        <body> 
            <table border>";

$id = $_GET['id'];

    try 
    {
    $pdo = new PDO('mysql:host=localhost;dbname=lafleur','root', '') ;
     $pdostat = $pdo->query("SELECT * FROM produit WHERE pdt_categorie = '".$id."'; ");
     foreach ($pdostat as $row)
     {
        echo " <tr> <td> <img src=../Images/" . $row['pdt_image']. ".jpg> </td> <td>" . $row['pdt_ref']. " </td> <td> ". $row['pdt_designation']." </td> <td> ". $row['pdt_prix']."</td> </tr>";
     }
     $pdo = null ;
    }
    catch (PDOException $e) 
    {
     echo "<p>Erreur: ".$e->getMessage() ;
     die() ;
    }  


echo " </table> </body> </html>";