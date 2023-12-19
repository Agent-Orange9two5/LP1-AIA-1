//a) Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați suma elementelor de pe diagonala principală.
//b) Scrieți suma calculată într-un fișier numit "SumaDiagonala.txt".


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[50][50],n,s=0;
    cin>>n;

    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) s=s+a[i][j];

        }
    }


    ofstream g("SumaDiagonala.txt");
    g<<s;

    return 0;
}
