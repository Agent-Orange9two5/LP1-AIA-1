/*

a) Creați un vector cu n elemente întregi, unde n este citit de la tastatură. Inițializați vectorul cu numere întregi citite de la tastatură și calculați suma elementelor pare din vector.
b) Scrieți suma calculată a elementelor pare într-un fișier numit "SumaPare.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f("SumaPare.txt");
    
    int n, i;


    cout << "Introduceti numarul de elemente ale vectorului: ";
    cin >> n;

    int *v; 
    v = new int[n];

    if(v == NULL){
        cout << "Nu s-a putut aloca dinamic memorie";
        return -1;
    }

    for(i = 0; i < n; i++){
        cout << "Elementul " << i + 1 << " este: ";
        cin >> v[i];
    }

    f << "Elementele pare din vector sunt: ";
    for(i = 0; i < n; i++){
        if(v[i] % 2 == 0)
            f << v[i] << " ";
    }

    f.close();
    delete[] v;
    return 0;
}
