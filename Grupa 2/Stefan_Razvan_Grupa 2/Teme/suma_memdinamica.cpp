/*

Problema 9

a) Creați un program care primește de la
tastatură un număr n și apoi citește n numere
întregi. Alocați dinamic un vector pentru aceste
numere și calculați suma lor.

b) Scrieți suma calculată într-un fișier numit "SumaNumere.txt".


*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

ofstream g("SumaNumere.txt");

int main()
{
    int i,s=0,*v,n;
    cin>>n;

    v=(int *)malloc(n * sizeof(int));

    for(i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }

    g<<s;

    free(v);
    return 0;

}
