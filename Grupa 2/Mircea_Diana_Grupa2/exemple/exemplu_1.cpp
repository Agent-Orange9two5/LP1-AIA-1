//Exemplu 1
/* Creați un vector cu n elemente întregi, unde n este citit de la tastatură. Inițializați vectorul cu numere întregi citite de la tastatură și calculați suma elementelor pare din vector.
b) Scrieți suma calculată a elementelor pare într-un fișier numit "SumaPare.txt". */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int v[100],n,i,s=0;
    ofstream g("SumaPare.txt");
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
            s+=v[i];

    }
    if(s==0)
        g<<"Nu exista numere pare";
        else
        g<<"Suma este "<<s;
        
    return 0;
}
