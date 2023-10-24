#include <iostream>
using namespace std;
int main()
{
    int a[4][4];
    int s = 0;
    cout << "Citeste matricea:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    cout << "\nElementele de pe diagonala principala: ";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (i == j)
                cout << a[i][j] << " ";
    cout << "\nElementele de sub diagonala secundara: ";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (i + j >= 4)
                cout << a[i][j] << " ";
    cout << "\nSuma elementelor de 3 cifre: ";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (a[i][j] > 99 && a[i][j] < 1000)
                s += a[i][j];
    cout << s;
}
