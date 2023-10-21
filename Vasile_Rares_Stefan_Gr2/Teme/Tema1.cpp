
#include <iostream>
using namespace std;
int palindrom(int x)
{
    int ogl = 0, cx = x;
    while (x)
    {
        ogl = ogl*10 + x % 10;
        x /= 10;
    }
    if (cx == ogl)
        return 1;
    else
        return 0;
}
int main()
{
    int a[4][4], n, i, j;
    int V[2]={0}, V2[2] = { 0 }, V3[2] = { 0 }, V4[2] = { 0 }, v = 0, v2 = 0, v3 = 0, v4 = 0;
    cout << "Lungimea matricei:";
    cin >> n;
    cout << "Matricea este:" << '\n';
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] < 0)
                cout << a[i][j] << ' ' << "Se afla pe linia " << i+1 << " Si pe coloana " << j+1 <<'\n';
    cout << "Numerele de deasupra diagonalei secundare:";
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (i + j < n - 1)
                    cout << a[i][j] << ' ';
        cout << '\n';
        cout << "Numerele de sub diagonala principala:";
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (i > j)
                    cout << a[i][j] << ' ';
        cout << '\n';
        cout << "Numerele palindroame de pe linii impare:";
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
             if (i % 2 == 0 && palindrom(a[i][j]))
                    cout << a[i][j] << ' ';
        cout << '\n';
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i > j && i + j < n - 1)
                    V[v++] = a[i][j];
                if (i > j && i + j > n - 1)
                    V2[v2++] = a[i][j];
                if (i<j && i + j>n - 1)
                    V3[v3++] = a[i][j];
                if (i < j && i + j < n - 1)
                    V4[v4++] = a[i][j];
            }
        }
         cout << "Numerele de sub diag principala si deasupra diag secundare:";
         for (i = 0; i < v; i++)
             cout << V[i] << ' ';
         cout << '\n';
         cout << "Numerele de sub diag principala si de sub diag secundare:";
         for (i = 0; i < v2; i++)
             cout << V2[i] << ' ';
         cout << '\n';
         cout << "Numerele de deasupra diag principala si de sub diag secundare:";
         for (i = 0; i < v3; i++)
             cout << V3[i] << ' ';
         cout << '\n';
         cout << "Numerele de deasupra diag principala si de deasupra diag secundare:";
         for (i = 0; i < v4; i++)
             cout << V4[i] << ' ';
    return 0;
}

