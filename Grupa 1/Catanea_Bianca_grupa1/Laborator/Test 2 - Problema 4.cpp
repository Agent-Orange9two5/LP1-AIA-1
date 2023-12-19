// a) Generați aleator n numere întregi și stocați-le într-un vector.
// b) Sortați aceste numere în ordine descrescătoare și afișați-le într-un fișier numit "NumereSortate.txt".

#include <iostream>
#include <fstream>
using namespace std;
ofstream g("NumereSortate.txt");
int main()
{
    int n,i,v[100],aux;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> v[i];

    for(i=0;i<n-1;i++)
    {
        if(v[i]<v[i+1])
        {
            aux = v[i];
            v[i]=v[i+1];
            v[i+1]=aux;

        }
    }
    g << "Vectorul in ordine descrescatoare este: ";
    for(i=0;i<n;i++)
    g << v[i] << " " ;

    return 0;
}
