/*Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați produsul elementelor de pe diagonala secundară.
b) Scrieți produsul calculat într-un fișier numit "ProdusDiagonalaSecundara.txt".*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,i,j,p=1,v[100][100];
    cin>>n;
    ofstream g("ProdusDiagonalaSecundara.txt");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>v[i][j];
            if(i+j==n-1)
                p*=v[i][j];
        }
    }
    g<<p;
    return 0;
}
