/*
a) Citirea unei matrice pătratice de dimensiune n (n ≤ 10) și calcularea sumei elementelor de pe diagonala principală și a celei secundare.
b) Scrierea sumelor calculare într-un fișier numit "SumeDiagonale.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f("SumeDiagonale.txt");
    
    int n, i, mat[10][10], sp = 0, ss = 0;

    cout << "Dati numarul de linii si coloane ale matricei: ";
    cin >> n;

    for(i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Elementul mat[" << i << "]" << "[" << j << "] este: ";
            cin >> mat[i][j];
        }
    }

    for(i = 0; i < n; i++){
        sp = sp + mat[i][i];
        ss = ss + mat[i][n - i - 1];
    }

    f << "Suma elementelor de pe diagonala principala este: " << sp << endl;
    f << "Suma elementelor de pe diagonala secundara este: " << ss << endl;

    f.close();
    return 0;
}