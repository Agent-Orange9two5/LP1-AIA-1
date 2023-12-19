#include <iostream>
using namespace std;

//CMMDC - Recursivitate
int cmmd(int a, int b)
{
    if(b==0)
    {
        return a;
    } else{
    return cmmd (b, a%b);
    }
}

int main()
{
 int x,y;
 // x - variabila folosita pentru a stoca primul numar
 // y - variabila folosita pentru a stoca al doilea numar
 cout << "Introduceti primul numar: ";
 cin >> x;

 cout<<"Introduceti al doilea numar: ";
 cin>>y;

 int rez = cmmd(x,y);

 cout << "Cel mai mic divizor comun pentru " << x << " si " << y << " este: " << rez <<endl;

 return 0;
}
