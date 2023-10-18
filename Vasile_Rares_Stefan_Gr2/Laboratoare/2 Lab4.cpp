#include <iostream>
using namespace std;//Matrice Patratica de 4.Elmt de pe diag principala,elmt de sub diagonala secundara,sum numerelor de 3 cifre.
int main()
{
    int a[4][4],s=0,n,i,j;
    cout<<"Lungimea Matricei:";
    cin>>n;
    cout<<"Matricea:"<<endl;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>a[i][j];
    cout<<"Elementele de pe diagonala principala:";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(a[i][j]>99 && a[i][j]<1000)
                s=s+a[i][j];
            if(i==j)
                cout<<a[i][j]<<' ';
        }
    cout<<endl;
    cout<<"Elementele de sub diagonala secundara:";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i+j<n-1)
                cout<<a[i][j]<<' ';
    cout<<endl;
    cout<<"Suma elementelor cu 3 cifre:";
    cout<<s;
    return 0;
}
