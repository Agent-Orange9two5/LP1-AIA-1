//a) Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați produsul elementelor de pe diagonala secundară.
//b) Scrieți produsul calculat într-un fișier numit "ProdusDiagonalaSecundara.txt".

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[50][50],n,p=1;
    cin>>n;

    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) p=p*a[i][j];

        }
    }


    ofstream g("ProdusDiagonalaSecundara.txt");
    g<<p;

    return 0;
}
