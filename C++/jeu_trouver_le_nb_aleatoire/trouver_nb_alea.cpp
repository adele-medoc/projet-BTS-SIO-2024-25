#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{   //début p.p
int n, coups, alea, i;
bool flag;

flag = true;

cout<< "Saisir le nombre de coups pour deviner : ";
cin>>coups;

randomize();
alea = rand() % 100;
i = 0;

while (flag){
cout<<" Saisir n : ";
cin>>n;

    if (n == alea) {
     cout<< " felicitation ";
     flag = false;
     continue;
    }
    if ( i == coups-1) {
     cout<<" rate la solution est "<<alea;
     flag = false;
     continue;}

     if (n>alea) {
        cout<<" nb trop grand ";
     }
     else {
         cout<<" nb trop petit ";
     }
 i++;
}


getch();
return 0;
}
