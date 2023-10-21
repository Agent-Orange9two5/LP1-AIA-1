#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100], i, j, s = 0, v1[100], v2[100], v3[100], v4[100];

    cout << "Introduceti numarul de linii/ coloane: ";
    cin >> n;

    cout << endl;
    cout << "Introduceti elementele matricei: " << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    //afisarea elem diag principala
    cout << "Elementele de pe diagonala principala sunt: ";
    for(i = 0; i < n; i++)
    {
        cout << a[i][i] << " ";
    }
    cout << endl;

    //afis diag secundare in ordine inversa
    cout << "Diagonala secundara in ordine inversa este: ";
    for(i = n - 1; i >= 0; i--)
    {
        cout << a[i][n - i -1] << " ";
    }
    cout << endl;

    //suma elem deasupra diag secundare
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i + j < n - 1)
            {
                s = s + a[i][j];
            }
        }
    }
    cout << "Suma elementelor de deasupra diagonalei secundare este: " << s << endl;

    //elemente palindroame de pe diag pr
    int cp; //copia elementului curent
    int inv; //inversul elementului curent
    cout << "Numerele palindroame de pe diagonala principala sunt: ";
    for(i = 0; i < n; i++)
    {
        inv = 0;
        cp = a[i][i];
        while(a[i][i] != 0)
        {
            inv = inv * 10 + a[i][i] % 10;
            a[i][i] = a[i][i] / 10;
        }
        if(cp == inv)
        {
            cout << cp << " ";
        }       
    }
    cout << endl;

    //stocarea triunghiurilor matricei in cei 4 vectori
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0; //indicii pt fiecare dintre cei 4 vectori

    //zona 1 - zona de sus
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i < j && i + j < n - 1)
            {
                v1[k1++] = a[i][j];
            }
        }
    }
    cout << "Elementele triunghiului de sus sunt: ";
    for(i = 0; i < k1; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    //zona 2 - zona din stanga
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i > j && i + j < n -1)
            {
                v2[k2++] = a[i][j];
            }
        }
    }
    cout << "Elementele triunghiului din stanga sunt: ";
    for(i = 0; i < k2; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    //zona 3 - zona de jos
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i > j && i + j > n - 1)
            {
                v3[k3++] = a[i][j];
            }
        }
    }
    cout << "Elementele triunghiului de jos sunt: ";
    for(i = 0; i < k3; i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    //zona 4 - zona din dreapta
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i < j && i + j > n - 1)
            {
                v4[k4++] = a[i][j];
            }
        }
    }
    cout << "Elementele triunghiului din dreapta sunt: ";
    for(i = 0; i < k4; i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    return 0;
}
