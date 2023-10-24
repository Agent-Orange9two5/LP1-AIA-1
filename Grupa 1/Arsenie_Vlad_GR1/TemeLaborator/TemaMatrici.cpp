//Se citeste de la tastatura o matrice patratica de dimensiune 4, se afiseaza elementele de 
//pe diagonala principala, elementele de pe diagonala secundara in ordine inversa, suma el aflate
//deasupra diagonalei secundare, toate el palindrom de pe diag princ, si, in 4 vectori, vom
//stoca urm siruri: (cele 4 triunghiuri: N, S, E, V)

/*Exemplu 1:

1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Exemplu 2:
12 5 5 1
8 13 2 6
8 3 14 6
4 7 7 15
*/

#include <iostream>
using namespace std;

int main()
{
    int matrice[5][5], ds[5], suma, nord[5], n = 0, sud[5], s = 0, est[5], e = 0, vest[5], v = 0, i, j, sec, m, k, vpal[5], h = 0;
    cout << "Se citeste de la tastatura o matrice patratica de dimensiune 4: " << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            cin >> matrice[i][j];
    }
    for (i = 0; i < 4; i++)
    {
        sec = 0;
        suma = 0;
        for (j = 0; j < 4; j++)
        {
            if (i + j == 3)
                ds[sec++] = matrice[i][j];
            if (i + j < 3)
                suma = suma + matrice[i][j];
            if (i + j < 3 && i < j)
                nord[n++] = matrice[i][j];
            if (i + j > 3 && i > j)
                sud[s++] = matrice[i][j];
            if (i + j > 3 && i < j)
                est[e++] = matrice[i][j];
            if (i + j<3 && i>j)
                vest[v++] = matrice[i][j];
        }
    }
    cout << "Elementele de pe diagonala principala sunt: ";
    for (i = 0; i < 4; i++)
    {
        cout << matrice[i][i] << " ";
        for (j = 0; j < 4; j++)
        {
            m = 0;
            k = matrice[i][j];
            while (k)
            {
                m = m * 10 + k % 10;
                k /= 10;
            }
            if (m == matrice[i][i])
                vpal[h++] = matrice[i][i];
        }
    }
    cout << endl << "Elementele de pe diagonala secundara sunt: ";
    for (int i = 3; i >= 0; i--)
    {
        cout << matrice[i][4 - i - 1] << " ";
    }
    cout << endl;
    if (h)
    {
        cout << "Numerele palindrom de pe diagonala principala sunt: ";
        for (i = 0; i < h; i++)
        {
            cout << vpal[i] << " ";
        }
        cout << endl;

    }
    else
        cout << "Nu exista numere palindrom pe diagonala principala!" << endl;
    cout << "Elementele din nordul matricei sunt: ";
    for (i = 0; i < n; i++)
    {
        cout << nord[i] << " ";
    }
    cout << endl << "Elementele din sudul matricei sunt: ";
    for (i = 0; i < s; i++)
    {
        cout << sud[i] << " ";
    }
    cout << endl << "Elementele din estul matricei sunt: ";
    for (i = 0; i < e; i++)
    {
        cout << est[i] << " ";
    }
    cout << endl << "Elementele din vestul matricei sunt: ";
    for (i = 0; i < v; i++)
    {
        cout << vest[i] << " ";
    }
    return 0;
}
