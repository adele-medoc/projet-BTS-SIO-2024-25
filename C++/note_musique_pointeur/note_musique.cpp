#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(void)
{   //début p.p

int *mus = new int[100];
char touche = 0;
int cpt=0, freq;
bool flag = false;

cout << "Joue la note que tu veux : \n";
    cout << "DO = d \nRE = r \nMI = m \nFA = f \nSOL = s \nLA = l \nSI = i\n";
    cout << "p : rejouer la mélodie enregistrée";
    cout << "q : quitter\n";

while (touche != 'q'){
    touche =getch();

    switch(touche){
        case'd':
        case 'D':
            freq=262;
            break;
        case'r':
        case'R':
            freq=294;
            break;
        case'm':
        case'M':
            freq = 330;
            break;
        case'f':
        case'F':
            freq =349;
            break;
        case's':
        case'S':
            freq = 392;
            break;
        case'l':
        case'L':
            freq = 440;
            break;
        case'i':
        case'I':
            freq = 494;
            break;
        case 'e':
        case 'E':
            for (int i=0; i < 100; i++) {
               *(mus+i)=0;
               cpt=0;
               flag=true;
               cout<<"memoire efface";
            }
        	break;
        case 'p':
            for (int i = 0; i <cpt; i++) {
               Beep(*(mus+i),500);
            }
            flag = true;
            break;
        default:
            flag = true;
            break;
}
if (!flag) {
  Beep(freq,500);
  *(mus+cpt)=freq;
  if (cpt <99) cpt++;
  else cpt=0;
}
else{
flag = false;

}
}

delete[] mus;
getch();
return 0;
}
