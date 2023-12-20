/*Citirea unei matrice de dimensiune n x m de la tastatură, unde n și m sunt citite de la tastatură. Alocarea dinamică a matricei și înmulțirea
fiecărui element cu o valoare constantă (de exemplu, 2). Afișați matricea rezultată.
b) Scrieți matricea rezultată într-un fișier numit "MatriceInmultita.txt".*/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

typedef struct
{
    int n, m;   // Numarul de linii si coloane ale matricei
    int **elem; // Pointer catre elementele matricei
} Matrice;

Matrice alocare_matrice(int *aloc)
{
    Matrice A;
    cout << "Introduceti matricea A" << endl;
    cout << "Numar de linii: ";
    cin >> A.n;
    cout << "Numar de coloane: ";
    cin >> A.m;

    A.elem = (int **)calloc(A.n, sizeof(int *));
    if (!A.elem)
    {
        cout << "Eroare la alocarea zonei pointerilor de linie";
        *aloc = 0;
    }
    else
    {
        // Alocare memorie pentru fiecare linie (vector de int) din matrice
        for (int i = 0; i < A.n; i++)
        {
            A.elem[i] = (int *)calloc(A.m, sizeof(int));
            if (!A.elem[i])
            {
                cout << "Eroare la alocarea zonei pointerilor de coloana";
                *aloc = 0;
            }
        }
    }
    if (*aloc)
    {
        for (int i = 0; i < A.n; i++)
        {
            cout << "Dati linia " << i << " cu elemente separate prin spatiu: " << endl;
            for (int j = 0; j < A.m; j++)
                cin >> A.elem[i][j];
        }
        return A;
    }
    else
        cout << "Alocare esuata" << endl;
}
ofstream g("MatriceInmultita.txt");
int main()
{
    Matrice a;
    int i,j,nr,aloc1=1;
    a=alocare_matrice(&aloc1);
    cout<<"Numarul de inmmultit matricea ";
    cin>>nr;
     for (i = 0; i < a.n; i++)
            {
                cout << endl;
                for (j = 0; j < a.m; j++)
                {
                    g<<a.elem[i][j]*nr<<" ";
                }
            }
    for (i = 0; i < a.n; i++)
            {
                free(a.elem[i]);
            }
            free(a.elem);

    return 0;
}
