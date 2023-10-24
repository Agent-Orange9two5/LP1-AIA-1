// Se citeste de la tastatura o matrice patratica de dimensiune 4.Se afiseaza elementele de pe diag princ,
// diag sec in ordine inversa,suma elementelor aflate deasupra diag secundare, toate elem palindrom de pe diag principala
//in 4 vectori vom stoca urm siruri(triunghiurile dintre diagolane S,E,V,N)*/


#include<iostream>
#include<cstring>
using namespace std;

void afisare(int a[2], char b[10])
{
    cout << "Elementele din " << b << "ul matricei sunt: ";
    for (int i = 0; i < 2; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int matrice[5][5], sud[2], est[2], vest[2], nord[2];
    cout << "Introduceti elementele matricei patratice de 4 linii si 4 colonae: " << endl;
    int sumaDeasupraDiag = 0;
    int palindrom[4];
    int n, s, v, e;
    n = v = s = e = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrice[i][j];
            if (i + j < 3)
            {
                sumaDeasupraDiag += matrice[i][j];
            }
            if (i + j < 3 && i < j)
            {
                nord[n++] = matrice[i][j];
            }
            if (i + j < 3 && i > j)
            {
                vest[v++] = matrice[i][j];
            }
            if (i + j > 3 && i < j)
            {
                est[e++] = matrice[i][j];
            }
            if (i + j > 3 && i > j)
            {
                sud[s++] = matrice[i][j];
            }
        }
    }
    cout << "Elemtentele de pe diagonala principala sunt: ";
    int counter = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << matrice[i][i]<<" ";
        int invers = 0;
        int copy = matrice[i][i];
        while (copy)
        {
            invers = invers * 10 + copy % 10;
            copy /= 10;
        }
        if (invers == matrice[i][i])
        {
            palindrom[counter++] = matrice[i][i];
        }
    }
    cout << endl;
    cout << "Elementele de pe diagonala secundara sunt: ";
    for (int i = 3; i >= 0; i--)
    {
        cout << matrice[i][4-i-1]<<" ";
    }
    cout << endl;
    if (counter != 0)
    {
        cout << "Numerele palidrom de pe diagonala principala sunt: ";
        for (int i = 0; i < counter; i++)
        {
            cout << palindrom[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Nu exista numere palindrom pe diagonala principala" << endl;
    }
    char b[5] = "sud";
    afisare(sud, b);
    strcpy(b, "nord");
    afisare(nord, b);
    strcpy(b, "est");
    afisare(est, b);
    strcpy(b, "vest");
    afisare(vest, b);
    return 0;
}
