#include <iostream>
#include <conio.h>

using namespace std;

int pgcd(int x, int y){

int tempo=0,resultat = 1,reste = 1;

if (y>x) {
   tempo = y;
   y = x;
   x = tempo;
}
if (x % y == 0){
	resultat = y;
	}
else{
	while (reste!=0 and y!=0){
        reste = x % y;
        x = y;
        y = reste;
        resultat = x;
}
}
return resultat;
}
int main(void)
{   //début p.p
int a,b, result;
cout<< "Calcul PGCD, Saisir un 1er nb : ";
cin>>a;

cout<<"Saisir nb 2 : ";
cin>>b;

result = pgcd(a,b);
cout << "Le PGCD de " << a << " et " << b << " est : " << result;


getch();
return 0;
}
