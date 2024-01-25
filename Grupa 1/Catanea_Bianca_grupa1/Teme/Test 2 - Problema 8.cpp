// a) Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați produsul elementelor de pe diagonala secundară.
// b) Scrieți produsul calculat într-un fișier numit "ProdusDiagonalaSecundara.txt".

#include <iostream>
#include <fstream>
using namespace std;
ofstream g("ProdusDiagonalaSecundara.txt");
int main()
{
    int n,i,j,a[100][100],p=1;
    cout << "Introduceti numarul de linii si coloane a matricii: ";
    cin >> n;
  
    cout << "Introduceti matricea: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
  
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i+j == n-1)
                p*=a[i][j];
  
    g << "Produsul elementelor de pe diagoanala secundara este: " << p;
    return 0;
}
