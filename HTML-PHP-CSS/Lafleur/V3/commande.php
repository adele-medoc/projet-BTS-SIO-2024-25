<?php
session_start();
$html = 
"<! Doctype html>
    <html>
        <head>
        </head>
        <body>
            <table border>
                <tr> <td> Référence </td> <td> désignation </td> <td> prix unitaire </td> <td> quantité </td> <td> montant </td> </tr>";

$table = count($_SESSION['reference']);  

try {
    $pdo = new PDO('mysql:host=localhost;dbname=lafleur2','root', '') ;
    for ($i = 0; $i < $table; $i++) {
        $pdostat = $pdo->query("SELECT * FROM produit WHERE pdt_ref = '". $_SESSION['reference'][$i] ."'; ");
        foreach ($pdostat as $row ){
            $html .= "<tr> <td> ". $row['pdt_ref'] . "</td> <td> ". $_SESSION['reference'][$i] . " </td> <td> ". $row['pdt_prix'] . " </td> <td>" . $_SESSION['quantite'][$i]." </td> <td> " .$row['pdt_prix'] * $_SESSION['quantite'][$i] . " € </td> </tr>";
        }
   
    }
    $pdo = null;
}
catch (PDOException $e) 
{
    echo "<p>Erreur: ".$e->getMessage() ;
    die() ;
} 
$html .= "</table> </body> </html> ";
echo $html;