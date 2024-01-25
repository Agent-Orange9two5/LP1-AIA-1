// Se citesc de la tastatura doua matrice cu elemente numere reale A(nxn) si B(nxn). Matricele se stocheaza intr-un tablou bidimensional cu maxim 10 linii si 10 coloane. 
// De asemenea, numarul de linii n si numarul de coloane n se citesc de la tastatura. Sa se determine si sa se afiseze:
// -suma celor doua matrice;
// - maximul elementelor de deasupra diagonalei secundare pentru matricea A si B
// - produsul elementelor de sub diagonalale secundare

#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10],n,m,i,j,maxim1=0, maxim2=0, produs1=1, produs2=1;
    cout << "Introduceti numarul de linii al matricei: ";
    cin >> n;
    cout << endl;
    cout << "Introduceti numarul de coloane al matricei: ";
    cin >> n;
    cout << endl;

    cout << "Matricea A este: ";
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
    cout << endl;

    cout << endl << "Matricea B este: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> b[i][j];
    cout << endl;

    cout << " Suma celor doua matrici este: ";
    for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
               cout << a[i][j]+b[i][j] << endl;
               }

    cout << "Maximul de elemente deasupra diagonalei secundare pentru matricea A este: ";
    maxim1 = a[0][0];
    for(i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            if (i+j < n-1)
               if (a[i][j] > maxim1 )
                maxim1 = a[i][j];
        }
    cout << maxim1 << endl;

    cout << "Maximul de elemente deasupra diagonalei secundare pentru matricea B este: ";
    maxim2 = b[0][0];
    for(i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            if (i+j < n-1)
               if (b[i][j] > maxim2 )
                maxim2 = b[i][j];
        }
    cout << maxim2 << endl;

    cout << "Produsul elementelor de sub diagonala secundara a matricei A: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        if(i+j > n-1)
            produs1 *= a[i][j]; /// produs1=produs1*a[i][j]
    }
    cout << produs1 << endl;

    cout << "Produsul elementelor de sub diagonala secundara a matricei B: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        if(i+j > n-1)
            produs2 *= b[i][j];
    }
    cout << produs2;
        return 0;
}
