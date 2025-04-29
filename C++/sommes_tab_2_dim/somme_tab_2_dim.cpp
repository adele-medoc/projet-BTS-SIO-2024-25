#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{   //début p.p
int tab[3][4] ={ {32,54,12,8}, {3,98,23,87}, {15,12,91,6} };
int resultat = 0;

for (int i = 0; i < 3; i++) {
    for (int j=0; j < 4; j++) {
        resultat = resultat + tab[i][j];
    }
}

cout<< "la somme de tab est : "<<resultat;
getch();
return 0;
}
