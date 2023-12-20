/*
a) Citirea unui număr n și a unei matrice de dimensiune n x n de la tastatură. Calculați și afișați suma elementelor de pe diagonala principală.
b) Scrieți suma calculată într-un fișier numit "SumaDiagonala.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f("SumaDiagonala.txt");

    int n, s;

    cout << "Introduceti numarul de linii si coloane: ";
    cin >> n;

    int **a;
    a = new int *[n];

    for(int i = 0; i < n; i++){
        a[i] = new int[n];
    }
    if(a == NULL){
        cout << "Nu s-a putut aloca memorie";
        return -1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Elementul a[" << i << "]" << "[" << j << "] este: ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        s = s + a[i][i];
    }

    cout << "Suma elementelor de pe diagonala principala este: " << s;
    f << "Suma elementelor de pe diagonala principala este: " << s;

    f.close();
    delete[] a;
    return 0;
}