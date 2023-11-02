#include <iostream>

using namespace std;

int main()
{
    // 1. Fiind dat de la tastatura un tablou bidimensional cu n linii si n coloane, 1<=n<=50, cu elemente numere naturale.
    // Scrieti un program care va calcula media aritmetica a elementelor de pe fiecare coloana.

    int a[50][50],i,j,n,s=0,ma=0;
    cout << "Introduceti numarul de linii / coloane al matricii patratice : ";
    cin >> n;
    cout << endl ;

    cout << "Introduceti elementele matricii patratice : ";
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            cin >> a[i][j];
    cout << endl;

    cout << "Media aritmetica a fiecarei coloane: " << endl;

    for (j=0;j<n;j++)
    {
        s=0;
        for (i=0;i<n;i++)
        {
            s += a[i][j];
        }
        ma = s / n;
       cout << "Media aritmetica a coloanei " << j << " este: " << ma << endl;
    }
        return 0;
}
