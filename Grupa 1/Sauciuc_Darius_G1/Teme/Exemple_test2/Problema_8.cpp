/*
a) Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați produsul elementelor de pe diagonala secundară.
b) Scrieți produsul calculat într-un fișier numit "ProdusDiagonalaSecundara.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f("ProdusDiagonalaSecundara.txt");

    int n, p = 1;
    int **a;

    cout << "Introduceti numarul de linii si coloane: ";
    cin >> n;

    a = new int *[n];
    for(int i = 0; i < n; i++){
        a[i] = new int[n];
    }

    if(a == NULL){
        cout << "Nu s-a putut aloca dinamic memorie";
        return -1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Elementul a[" << i << "]" << "[" << j << "] este: ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        p = p * a[i][n - i - 1];
    }

    f << "Produsul elementelor de pe diagonala secundara este: " << p;

    f.close();
    delete[] a;
    return 0;
}