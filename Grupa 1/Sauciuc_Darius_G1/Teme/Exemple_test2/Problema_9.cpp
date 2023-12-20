/*
a) Creați un program care primește de la tastatură un număr n și apoi citește n numere întregi. Alocați dinamic un vector pentru aceste numere și calculați suma lor.
b) Scrieți suma calculată într-un fișier numit "SumaNumere.txt".

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream f("SumaNumere.txt");

    int n, *v, i, s = 0;

    cout << "Introduceti numarul de elemnte: ";
    cin >> n;

    v = new int[n];

    if(v == NULL){
        cout << "Nu s-a putut aloca dinamic memorie";
        return -1;
    }

    for(i = 0; i < n; i++){
        cout << "Introduceti elementul " << i + 1 << ": ";
        cin >> v[i];
    }

    for(i = 0; i < n; i++){
        s = s + v[i];
    }
    
    f << "Suma elementelor din vector este: " << s;

    f.close();
    delete[] v;

    return 0;
}