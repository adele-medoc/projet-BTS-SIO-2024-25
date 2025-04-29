#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

float racine(int);

// PP
int main(void)
{   //début p.p
int n;
float resultat, approximation;

cout<<"Saisir n :";
cin>>n;
resultat = racine(n);

cout<<setprecision(10)<<" Racine carre de "<<n<<" est "<<resultat;
getch();
return 0;
}

float racine(int x)
{
float calc;
calc = x;
float approximation = 0.000001;

while (fabs(x-calc*calc )>approximation){
calc = 0.5 * ((x/calc) + calc);
}
return calc;
 }
