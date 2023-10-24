#include <iostream>

using namespace std;

int main()
{
    int a[4][4], n = 4, i, j, k, m, v[1], b[1], c[1], d[1];
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "numerele negative sunt:";
    for (i = 1; i <= 4; i++)
        for (j = 1; j <= 4; j++)
        {
            if (a[i][j] < 0)
                cout << a[i][j];
        }
    cout << "element de deasupra diagonalei secundare:";
    for (i = 1; i <= 4; i++)
        for (j = 1; j <= 4; j++)
            if (i + j < 5)
                cout << a[i][j] << " ";
    cout << "element de sub diagonala principala:";
    for (i = 1; i <= 4; i++)
        for (j = 1; j <= 4; j++)
            if (i > j)
                cout << a[i][j] << " ";
    cout << "elementele palindrom de pe liniile impare sunt:";
    for (i = 1; i <= 4; i++)
        for (j = 1; j <= 4; j++)
        {
            k = a[i][j];
            m = 0;
            if (i == 0 || i == 2)
            {
                if (a[i][j] > 9)
                    while (k != 0)
                    {
                        m = m * 10 + k % 10;
                        k = k / 10;
                    }
                if (m == a[i][j])
                    cout << a[i][j];
            }
        }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            if ((i < j) && (i + j < n + 1))
                v[++k] = a[i][j];
        if ((i < j) && (i + j > n + 1))
            b[++k] = a[i][j];
        if ((i > j) && (i + j < n + 1))
            c[++k] = a[i][j];
        if ((i > j) && (i + j > n + 1))
            d[++k] = a[i][j];
    }

    cout << "primul vector este:" << v[k] << " ";
    cout << "Al doilea vector este:" << b[k] << " ";
    cout << "Al treilea vector este:" << c[k] << " ";
    cout << "Al patrulea vector este:" << d[k] << " ";

    return 0;
}
