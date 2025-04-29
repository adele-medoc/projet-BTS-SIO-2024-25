/*Déclarer un tableau en JavaScript pour représenter les données en haut, 
Créer une fonction qui permet d’afficher la note pour chaque choix de l’étudiant et du type de la note.*/

let tab0 = new Array('note1','note2','note exam');

let tab1 = new Array(1,"Bennani Ibtissam",15,16,17);
let tab2 = new Array(2, "Lahlou Amal", 16,12,13);
let tab3 = new Array(3,"Tazi Mounie",11,13,17); 
let tab = new Array(tab1,tab2,tab3);




for (i in tab){
    document.getElementById("nom").innerHTML += "<option value="+  tab[i][0] +">" + tab[i][1] +" </option>"; 
}

for (i in tab0){
    document.getElementById("note").innerHTML += "<option value="+i+" >" + tab0[i] + "</option>";
}

function Afficher(note,nom) {
    
    for (i in tab){
        if (tab[i][0] == nom){
            switch (note){
                case ("0"): 
                    document.getElementById("resultat").value = "Note 1 : " + tab[i][2];
                    break;
                case ("1"): 
                    document.getElementById("resultat").value = "Note 2 : " + tab[i][3];
                    break;
                case ("2"): 
                    document.getElementById("resultat").value = "Note Examen : " + tab[i][4];
                    break; 
            }
        }

    }
     
}