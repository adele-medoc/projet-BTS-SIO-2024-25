#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{   //d�but p.p
int n;
int resultat;
int i;

resultat = 1;
cout<< "factoriel de n. Saisir n : ";
cin>>n;

for (i = 1; i < n+1; i++) {
    resultat = resultat * i;
}
cout<< "factoriel de "<<n<<"! ="<<resultat;
getch();
return 0;
}
