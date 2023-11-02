#include <iostream>

using namespace std;

int main()
{
    // 1. Se citesc de la tastatura doua tablouri bidimensionale cu n linii si n coloane, 1<=n<=50, cu elemente numere naturale.
    // Scrieti un program care va calcula suma celor doua tablouri.

    int a[50][50],b[50][50],c[50][50],i,j,n;
    cout << "Introduceti numarul de linii / coloane ale celor doua matrici patratice: ";
    cin >> n;
    cout << endl;

    cout << "Introduceti elementele matricii 1: ";
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
    cout << endl;

    cout << "Introduceti elementele matricii 2: ";
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> b[i][j];
    cout << endl;

     for (i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
           c[i][j] = a[i][j]+b[i][j];
        }
    cout << "Matricea rezultata (suma celor doua matrici) este: " << endl;
     for (i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            cout << c[i][j]<< " ";
            cout << endl;
        }
    return 0;
}
