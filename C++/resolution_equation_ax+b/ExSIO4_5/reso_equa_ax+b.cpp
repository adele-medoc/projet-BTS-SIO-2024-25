#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{   //d�but p.p

/* Resolution d'une equation du 1er degre.
Prends en saisie deux coefficient a et b
pour trouver x r�pondant a l'equation = a*x + b
*/

int a;
int b;
float x;

cout<<"Saisir a : ";
cin>>a;
cout<<"Saisir b : ";
cin>>b;
if (a == 0)
{
	if (b == 0)
	{
		cout<<"Solution indertermine";
	}
	else
	{
		cout<<"Solution impossible";
	}
}
else
{x = (float) (-b)/a;
	cout<<"x vaut : "<<x;
}

getch();
return 0;
}
