// a) Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați suma elementelor de pe diagonala principală.
// b) Scrieți suma calculată într-un fișier numit "SumaDiagonala.txt".

#include <iostream>
#include <fstream>
using namespace std;
ofstream g("SumaDiagonala.txt");
int main()
{
    int a[100][100],n,i,j,s=0;
    cout << "Introduceti numarul de linii si coloane a matricii: ";
    cin >> n;
  
    cout << "Introduceti matricea: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
  
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
                s+=a[i][j];
  
    g << "Suma elementelor de pe diagonala principala este: " << s;

    return 0;
}
