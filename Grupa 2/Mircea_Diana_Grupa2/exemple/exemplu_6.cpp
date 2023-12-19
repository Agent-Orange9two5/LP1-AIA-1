/*Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați suma elementelor de pe diagonala principală.
b) Scrieți suma calculată într-un fișier numit "SumaDiagonala.txt".*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,i,j,a[100][100],s=0;
    cin>>n;
    ofstream g("SumaDiagonala.txt");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                s+=a[i][j];
            }
        }
    }
    g<<"Suma diagonala principala "<<s;
    return 0;
}
