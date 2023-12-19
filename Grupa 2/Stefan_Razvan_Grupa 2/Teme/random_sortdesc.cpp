/*

Problema 4
a) Generați aleator n numere întregi și stocați-le într-un vector.

b) Sortați aceste numere în ordine descrescătoare și afișați-le
într-un fișier numit "NumereSortate.txt".


*/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

ofstream g("NumereSortate.txt");

int main()
{
    int ok,aux,n,i,a[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
       a[i]=rand();
    }

    do{
    ok=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
        aux=a[i];
        a[i]=a[i+1];
        a[i+1]=aux;
        ok++;
        }
    }
    }while(ok);

    for(i=0;i<n;i++)
        g<<a[i]<<" ";

    return 0;
}

