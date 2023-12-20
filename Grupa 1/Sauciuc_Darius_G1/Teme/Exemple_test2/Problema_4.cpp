/*
a) Generați aleator n numere întregi și stocați-le într-un vector.
b) Sortați aceste numere în ordine descrescătoare și afișați-le într-un fișier numit "NumereSortate.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;


void sortare(int n, int v[100]){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] < v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}


int main(){

    ofstream f("NumereSortate.txt");

    int n;


    cout << "Dati numarul de elemente: ";
    cin >> n;

    int *v; 
    v = new int[n];

    if(v == NULL){
        cout << "Nu s-a putut aloca memorie"; 
        return -1;
    }

    for(int i = 0; i < n; i++){
        cout << "Elementul de pe pozitia: " << i + 1 << " este: ";
        cin >> v[i];
    }

    /*
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(v[i] < v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    */

    sortare(n, v);
    f << "Vectorul sortat descrescator este: ";
    for(int i = 0; i < n; i++)
    {
        f << v[i] << " ";
    }

    f.close();
    delete[] v;
    return 0;

}