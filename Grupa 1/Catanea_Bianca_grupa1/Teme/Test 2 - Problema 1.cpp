// a) Creați un vector cu n elemente întregi, unde n este citit de la tastatură. 
// Inițializați vectorul cu numere întregi citite de la tastatură și calculați suma elementelor pare din vector.
// b) Scrieți suma calculată a elementelor pare într-un fișier numit "SumaPare.txt".

#include <iostream>
#include <fstream>
using namespace std;
// ifstream f("SumaPare.txt");
ofstream g("SumaPare.txt");

int main()
{
    int v[100],i,s=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
            s+=v[i];
    }
    g << s;
    return 0;
}
