/*
a) Creați un program care primește de la tastatură un număr n și apoi citește n perechi de numere întregi (x, y). Stocați aceste perechi într-un vector și sortați-le în funcție de suma lor (x + y).
b) Afișați perechile sortate în ordine crescătoare a sumei într-un fișier numit "PerechiSortate.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f("PerechiSortate.txt");

    int n, i, j;

    cout << "Dati numarul de perechi: ";
    cin >> n;

    int **v;
    v = new int *[n];

    for(i = 0; i < n; i++){
        v[i] = new int[2];
    }

    if(v == NULL){
        cout << "Nu s-a putut aloca dinamic memorie";
        return -1;
    }
    
    for(i = 0; i < n; i++){
        cout << "Dati perechea (x, y): ";
        cin >> v[i][0] >> v[i][1];
    }

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(v[i][0] + v[i][1] > v[j][0] + v[j][1])
            {
                swap(v[i][0], v[j][0]);
                swap(v[i][1], v[j][1]);
            }
        }
    }

    f << "Perechile sortate in ordine crescatoare dupa suma lor:" << endl;
    for(i = 0; i < n; i++){
        f << v[i][0] << " " << v[i][1] << endl;
    }

    f.close();
    delete[] v;

    return 0;

}