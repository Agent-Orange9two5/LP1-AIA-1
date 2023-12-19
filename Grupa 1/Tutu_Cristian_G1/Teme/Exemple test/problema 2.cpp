#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream g("SumeDiagonale.txt");
    int n,i,j,sumap=0,sumas;
    cout<<"Introduceti numarul de elemente ale matricei: ";
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
                sumap+=a[i][j];
            else if(i+j==n-1) sumas+=a[i][j];
        }
    g<<"Suma elementelor de pe diagonala principala: "<<sumap<<endl;
    g<<"Suma elementelor de pe diagonala secundara: "<<sumas;
    cout<<"Sumele elementelor de pe diagonale a fost scrisa in fisier";
    g.close();
    return 0;
}
