#include <iostream>

using namespace std;

int main()
{
    // se citeste de la tastatura o matrice patratica de dimensiune 4, sa se afiseze:
    // a. elementele de pe diagonala principala
    // b. elementele de pe diagonala secundara in ordine inversa
    // c. suma elementelor aflate deasupra diagonalei secundare
    // d. toate elementele palindroame de pe diagonala principala
    // e. in patru vectori vom stoca urmatoarele siruri (cele 4 triunghiuri)

    int a[4][4],n,i,j,copiemat,aux, suma=0,pal=0,v1[10],v2[10],v3[10],v4[10],x=0,b=0,c=0,d=0;
    cout << "Introduceti numarul de linii / coloane al matricii patratice : " ;
    cin >> n;
    cout << "Cititi matricea :  " << " " << endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
    cout << endl;

    cout << "Elementele matricei de pe diagonala principala sunt: " ;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if (i==j)
                cout << a[i][j] << " ";
    cout << endl;

    cout << "Elementele matricei de pe diagonala secundara in ordine inversa sunt : " ;
    for(i=n;i>=0;i--)
           for(j=n;j>=0;j--)
            if(i+j == n-1)
                cout << a[i][j] << " ";
    cout<<endl;

    cout << "Suma elementelor aflate deasupra diagonalei secundare este: ";
    for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            if (i+j < n-1)
            suma+=a[i][j];
    cout << suma;
    cout << endl;

    cout << "Elementele palindroame de pe diagonala principala sunt: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
            {
                copiemat=a[i][j];

            while(copiemat!=0)
    {
        pal=pal*10+copiemat%10;
        copiemat/=10;
    }
            }
    if(a[i][j]==pal) cout << a[i][j] ;
        else cout << "Nu exista elemente palindroame pe diagonala principala. ";
    cout << endl;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(i<j && i+j<n-1)
                v1[x++]=a[i][j];
            if(i>j && i+j>n-1)
                v2[b++]=a[i][j];
            if(i<j && i+j>n-1)
                v3[c++]=a[i][j];
            if(i>j && i+j<n-1)
                v4[d++]=a[i][j];

        } 

    cout<< "Elementele matricei din zona Nord : ";
    for(i=0;i<x;i++)
        cout << v1[i]<<" ";
    cout << endl;

    cout<< "Elementele matricei din zona Sud : ";
     for(i=0;i<b;i++)
        cout << v2[i]<<" ";
    cout << endl;

    cout<< "Elementele matricei din zona Est : ";
     for(i=0;i<c;i++)
        cout << v3[i]<<" ";
    cout << endl;

    cout<< "Elementele matricei din zona Vest: ";
     for(i=0;i<d;i++)
        cout << v4[i]<<" ";
    cout << endl;

        return 0;
}

