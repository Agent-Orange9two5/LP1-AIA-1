/*Generați aleator n numere întregi și stocați-le într-un vector.
b) Sortați aceste numere în ordine descrescătoare și afișați-le într-un fișier numit "NumereSortate.txt".*/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,i,v[100],j;
    cin>>n;
    ofstream g("NumereSortate.txt");
    for(i=0;i<n;i++)
    {
        v[i]=rand();
    }
     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v[i]>v[j])
            {
                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        g<<v[i]<<endl;
    }
    return 0;
}
