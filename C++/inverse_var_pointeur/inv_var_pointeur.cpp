#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{   //d�but p.p
float a = 3.14;
float b = 9.17;
cout<<"voici a : "<<a<<"et voici b : "<<b;
float c;
float* pa = NULL;
float* pb = NULL;

cout<<"\n echange des valeurs des variables a et b par les pointeurs ";
pa = &a;
pb = &b;

c = *pa;
*pa = *pb;
*pb = c;

cout<<"\n voici a : "<<a<<" et voici b : "<<b;

getch();
return 0;
}
