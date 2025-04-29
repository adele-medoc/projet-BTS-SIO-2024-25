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
    $pdo = new PDO('mysql:host=localhost;dbname=lafleur2','root', '') ;
     $pdostat = $pdo->query("SELECT * FROM produit WHERE pdt_categorie = '".$id."'; ");
     foreach ($pdostat as $row)
     {
        echo " <tr> <td> <img src=../Images/" . $row['pdt_image']. ".jpg> </td> <td>" . $row['pdt_ref']. " </td> <td> ". $row['pdt_designation']." </td> <td> ". $row['pdt_prix']."</td> </tr>";
     }
     echo" </table> 
           <hr> 
            <form action='panier.php' target='menu' method='get'> 
                <select name='reference' size='1'>";
                
    $jeuResultat = $pdo->query("SELECT * FROM produit WHERE pdt_categorie = '".$id."'; "); 
    foreach ($jeuResultat as $row)
     {    // Remplissage de la liste déroulante à partir de la base de données.
        $reference = "<option value=". $row['pdt_ref'] ." > ". $row['pdt_designation']. "</option>";
        echo $reference;
     }
    echo"</select>";
        echo 'Quantité : ';
    echo '<input type="text" name="quantite" size="5" value="1" />
         <input type="submit" name="ajout" value="Ajouter au panier" /> </form> ';
    $pdo = null;
    $jeuResultat=null;
    }
    catch (PDOException $e) 
    {
     echo "<p>Erreur: ".$e->getMessage() ;
     die() ;
    }  


    echo " </body> </html>";