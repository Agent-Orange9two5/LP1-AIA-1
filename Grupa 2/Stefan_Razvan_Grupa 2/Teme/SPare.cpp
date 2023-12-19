/*Problema 1
a) Creați un vector cu n elemente întregi, unde n este citit de la tastatură. Inițializați vectorul cu numere întregi citite de la tastatură și calculați suma elementelor pare din vector.
b) Scrieți suma calculată a elementelor pare într-un fișier numit "SumaPare.txt".
*/

#include <iostream>
#include <fstream>
using namespace std;

ofstream g("SumaPare.txt");

int main()
{
    int n, a[101], s=0, i;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];

        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                s+=a[i];
        }
        g<<s;

        g.close();
        return 0;
}
