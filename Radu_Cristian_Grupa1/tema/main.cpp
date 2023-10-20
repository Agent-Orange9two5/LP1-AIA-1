#include <iostream>

using namespace std;

int main()
{
    int a[100][100], i, j, m, d, s = 0, k;
    int N[100], E[100], S[100], V[100];
    int n = 0, e = 0, sd = 0, v = 0;
    cout << "Numarul de linii si coloane ale matricii patratice: ";
    cin >> m;
    cout << "Scrie elementele matricii: ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    }
    cout << "Diagonala principala: ";
    for (i = 0; i < m; i++)
        cout << a[i][i] << " ";
    cout << endl;
    cout << "Diagonala secundara invers: ";
    for (i = m - 1; i >= 0; i--)
        cout << a[i][m - 1 - i] << " ";
    cout << endl;
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            if (j > i)
                s = s + a[i][j];
    cout << "Suma elementelor de deasupra diagonalei principale este: " << s << endl;
    cout << "Numere palindrome de pe diagonala principala: ";
    for (i = 0; i < m; i++)
    {
        k = a[i][i];
        d = 0;
        while (k)
        {
            d = d * 10 + k % 10;
            k /= 10;
        }
        if (d == a[i][i])
            cout << d << " ";
    }
    cout << endl;
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
        {
            if (i < j && i + j < m - 1)
                N[n++] = a[i][j];
            else if (i > j && i + j < m - 1)
                V[v++] = a[i][j];
            else if (i < j && i + j > m - 1)
                E[e++] = a[i][j];
            else if (i > j && i + j > m - 1)
                S[sd++] = a[i][j];
        }

    cout << "Elementele din N: ";
    for (i = 0; i < n; i++)
        cout << N[i] << ' ';
    cout << endl;
    cout << "Elementele din E: ";
    for (i = 0; i < e; i++)
        cout << E[i] << ' ';
    cout << endl;
    cout << "Elementele din S: ";
    for (i = 0; i < sd; i++)
        cout << S[i] << ' ';
    cout << endl;
    cout << "Elementele din V: ";
    for (i = 0; i < v; i++)
        cout << V[i] << ' ';

    return 0;
}
