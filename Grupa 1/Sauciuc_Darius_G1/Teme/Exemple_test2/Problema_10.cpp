/*
a) Citirea unei matrice de dimensiune n x m de la tastatură, unde n și m sunt citite de la tastatură. Alocarea dinamică a matricei și înmulțirea fiecărui element cu o valoare constantă (de exemplu, 2). Afișați matricea rezultată.
b) Scrieți matricea rezultată într-un fișier numit "MatriceInmultita.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f("MatriceInmultita.txt");

    int n, i, j, m;
    int **a;

    cout << "Introduceti numarul de linii: ";
    cin >> n;

    cout << "Introduceti numarul de coloane: ";
    cin >> m;

    a = new int*[n];

    for(i = 0; i < n; i++){
        a[i] = new int[m];
    }

    if(a == NULL){
        cout << "Nu s-a putut aloca dinamic memorie";
        return -1;
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cout << "Introduceti elementul a[" << i << "]" << "[" << j <<"]: ";
            cin >> a[i][j];
        }
    }

    const int k = 2; // valoare constanta cu care inmultim fiecare element al matricei
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            a[i][j] = a[i][j] * k;        
        }
    }

    f << "Matricea rezultata este: " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            f << a[i][j] << " ";
        }
        f << endl;
    }

    f.close();
    delete[] a;
    return 0;
}