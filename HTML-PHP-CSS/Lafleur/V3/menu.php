<?php
session_start();
$html = <<< HTML
<!DOCTYPE HTML>
    <html>
        <head>
            <meta charset ="UTF-8"/>
            <link rel='stylesheet' href='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css'>
            </head>
        <body>
            <h2>Sté LaFleur</h2>
                <p><a href="accueil.php" target="page">Accueil</a></p>
                <p><a href='mailto:commercial@lafleur.com'><i>Nous contacter</i></a></p>
                <hr>
                <p>Nos produits</p>
                <ul>
HTML;

// Connexion à la base de données 
$host = "localhost";
$dbname = "lafleur";
$username = "lafleur";
$password = "secret";

try {
    $pdo = new PDO("mysql:host=$host;dbname=$dbname;charset=utf8", $username, $password);


$requete="select * from categorie ;" ;

// Exécuter la requête
    foreach ($pdo->query($requete) as $row) {
$html.= "<li><a href='listpdt.php?id=".$row['cat_code']."' target='page'>".$row["cat_libelle"]."</a>";
}


// Initialisation du panier
if (!isset($_SESSION["reference"])) {
    $_SESSION["reference"] = array();
    $_SESSION["quantite"] = array();
}

}
catch (PDOException $e) {
 echo "<p>Connexion échouée".$e->getMessage() ;
 die() ;
}

$html.= <<< HTML
        </ul>
        <hr> 
        <form action="panier.php" target="menu" method="get">
            <input type="submit" name="supp" value="Vider le panier" />
        </form>
        <form action="commande.php" target="page" method="get">
            <p> <input type="submit" value="Commander" /> </p>
        </form>
    </body>
</html>
HTML;


echo $html ; 