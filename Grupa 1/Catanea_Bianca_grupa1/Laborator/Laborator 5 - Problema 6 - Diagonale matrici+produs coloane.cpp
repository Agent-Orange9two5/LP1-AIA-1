#include <iostream>

using namespace std;

int main()
{
    /* 6.	Se dă o matrice cu n linii si m coloane, având toate elementele distincte. Să se calculeze:
    -	elementele de deasupra diagonalei principale (i<j)
    -	elementele de sub diagonala principala (i>j)
    -	elementele de deasupra diagonalei secundare (i+i<n-1 pentru i de la [0,n-1] si i+j<n+1 pentru i de la [1, n])
    -	elementele de sub diagonala secundara (i+i>n-1 pentru i de la [0,n-1] si i+j>n+1 pentru i de la [1, n])
    -	produsul elementelor de pe fiecare coloana */
    int a[100][100],i,j,n,produs=1;
    cout << "Introduceti numarul de linii/coloane al matricii patratice: ";
    cin>>n;
    cout << " Introduceti valori distincte in matrice : ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
    cout << " Elementele de deasupra diagonalei principale sunt: " ;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i<j) cout << a[i][j] << " ";
    cout << endl;

    cout << "Elementele de sub diagonala principala sunt : ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i>j) cout << a[i][j] << " ";
    cout << endl;

    cout << "Elementele de deasupra diagonalei secundara sunt : ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i+j<n-1) cout << a[i][j] << " ";
    cout << endl;

    cout << "Elementele de sub diagonala secundara sunt: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i+j>n-1) cout << a[i][j] << " ";
    cout << endl;

    cout << " Produsul elementelor de pe fiecare coloana este : ";
    for(j=0;j<n;j++)
    {
        produs=1;
        for(i=0;i<n;i++)
          {
              produs*=a[i][j];
          }
          cout << produs << " ";
    }


    return 0;
}
