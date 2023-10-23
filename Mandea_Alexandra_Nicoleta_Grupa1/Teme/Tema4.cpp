#include <iostream>

using namespace std;

/*

Se citeste o matrice patratica. Se afiseaza:
-elementele de pe diagonala principala
-elementele se pe diagonala secundara inversate
-elementele deasupra diagonalei principale
-elemetele palindrome de pe diagonala principala
-in patru vectori se stocheaza cele patru zone ale matricei: Nord, Sud, Est, Vest
si se afiseaza

*/

int main()
{
    int a[10][10],n,i,j,ogl,v1[10],v2[10],v3[10],v4[10],k=0,x=0,z=0,t=0,ca;
    cout<<"Introduceti numarul de elemente ale matricei: ";
    cin>>n;
    cout<<"Afisare matrice:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i<j && i+j<n-1)
                v1[k++]=a[i][j];
            if(i<j && i+j>n-1)
                v2[x++]=a[i][j];
            if(i>j && i+j>n-1)
                v3[z++]=a[i][j];
            if(i>j && i+j<n-1)
                v4[t++]=a[i][j];
        }
    cout<<"Afisarea elementelor de pe diagonala principala: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
               cout<<a[i][j]<<" ";
    cout<<endl;
    cout<<"Afisarea elementelor in ordine inversa de pe diagonala secundara: ";
    for(i=n-1;i>=0;i--)
        for(j=n-1;j>=0;j--)
            if(i+j==n-1)
               cout<<a[i][j]<<" ";
    cout<<endl;
    cout<<"Afisarea elementelor deasupra diagonalei principale: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i<j)
               cout<<a[i][j]<<" ";
    cout<<endl;
    cout<<"Afisarea elementelor palindrome de pe diagonala principala: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
        {
            ca=a[i][j];
            ogl=0;
            while(ca)
            {
                ogl=ogl*10+ca%10;
                ca=ca/10;
            }
            if(ogl==a[i][j])
                cout<<a[i][j]<<" ";
        }
    cout<<endl;
    cout<<"Afisarea elementelor din zona Nord: ";
    for(i=0;i<k;i++)
       cout<<v1[i]<<" ";
    cout<<endl;
    cout<<"Afisarea elementelor din zona Est: ";
    for(i=0;i<x;i++)
       cout<<v2[i]<<" ";
    cout<<endl;
    cout<<"Afisarea elementelor din zona Sud: ";
    for(i=0;i<z;i++)
       cout<<v3[i]<<" ";
    cout<<endl;
    cout<<"Afisarea elementelor din zona Vest: ";
    for(i=0;i<t;i++)
       cout<<v4[i]<<" ";

    return 0;
}
