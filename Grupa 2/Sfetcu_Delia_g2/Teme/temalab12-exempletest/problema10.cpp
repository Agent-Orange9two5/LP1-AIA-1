#include <iostream>
#include <fstream>

using namespace std;

//declararea fisierului
fstream f("MatriceInmultita.txt");

int main()
{   
    int n, m, **a, k;
    cout << "Introduceti numarul de linii si numarul de coloane: ";
    cin >> n >> m;
    cout << "Introduceti constanta cu care vreti sa fie inmultita matricea: ";
    cin >> k;
    //alocarea dinamica a memoriei pentru matrice
    a = (int**)malloc(n*sizeof(int *));
    //verificarea pentru a vedea daca memoria a fost alocata corect
    if (a == nullptr) {
        cout << "Alocarea memoriei a esuat!" << endl;
        return 1;
    }
    a[0] =  (int *)malloc(n * m * sizeof(int));
    //verificarea pentru a vedea daca memoria a fost alocata corect
    if (a[0] == nullptr) {
        cout << "Alocarea memoriei a esuat!" << endl;
        free(a);
        return 1;
    }
    //initializarea pointerilor pentru randuri
    for (int i = 1; i < n; i++) {
        a[i] = a[0] + i * m;
    }
    //citirea matricei si inmultirea elementelor sale cu constanta data
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; j++)
    {    
        cin >> a[i][j];
        a[i][j] *= k;
    }
    //afisarea matricei in fisier
    for(int i = 0; i < n; ++i)
    {  for(int j = 0; j < n; j++)
        {f << a[i][j] << " ";}
        f << endl;
    }
    free(a[0]);
    free(a);
    return 0;
}
    return 0;
}
