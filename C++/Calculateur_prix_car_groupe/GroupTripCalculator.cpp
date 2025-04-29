#include <iostream>
#include <conio.h>

using namespace std;

int main(void){   //début p.p
int nb_personne;
int distance;
float prix;
float prix_km;
float reduction;
int billet_gratuit;
float prix_p_p;

cout<< "Nombre de personnes pour le voyage : ";
cin>>nb_personne;
cout<< "Distance a pracourir en Km :";
cin>>distance;

if (nb_personne > 20) {
   if (nb_personne >= 40) {
       reduction = 0.80;
   }
   else{
   reduction = 0.75;
   }
}else{
  if (nb_personne > 10){
  reduction = 0.7;
  } }
billet_gratuit = nb_personne / 25;
prix_km = distance * (0.55 * (nb_personne- billet_gratuit));
prix = reduction * prix_km;
prix_p_p = prix / nb_personne;
cout<< "le prix totale est : "<< prix<< " par personne le prix est : "<< prix_p_p<<" Euros";

getch();
return 0;
}
