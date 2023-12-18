/*Citirea unei matrice pătratice de dimensiune n (n ≤ 10) și calcularea sumei elementelor de pe diagonala principală și a celei secundare.
b) Scrierea sumelor calculare într-un fișier numit "SumeDiagonale.txt".*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a[10][10],i,j,n,sp=0,ss=0;
    cin>>n;
    ofstream g("SumeDiagonale.txt");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
    {
        cin>>a[i][j];
        if(i==j)
            sp+=a[i][j];
        if(i+j==n-1)
            ss+=a[i][j];
    }
    }
    g<<"Suma diagonalei principale "<<sp<<endl;
    g<<"Suma diagonalei secundare "<<ss<<endl;
    return 0;
}
