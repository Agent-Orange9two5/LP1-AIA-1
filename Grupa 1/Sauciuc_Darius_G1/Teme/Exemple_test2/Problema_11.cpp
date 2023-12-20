/*
a) Creați un program care primește de la tastatură un număr n și apoi citiți n șiruri de caractere de lungime variabilă. Alocare dinamică pentru fiecare șir și stocați aceste șiruri într-un vector.
b) Afișați aceste șiruri în ordinea inversă a lungimii lor într-un fișier numit "SiruriInvers.txt".

*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
    ofstream f("SiruriInvers.txt");

    int n;

    cout << "Introduceti numarul de siruri: ";
    cin >> n;
    cin.ignore();

    char **a;
    a = new char*[n];

    for(int i = 0; i < n; i++){
        a[i] = new char[n];
    }

    if(a == NULL){
        cout << "Nu s-a putut aloca dinamic memorie";
        return -1;
    }

    for(int i = 0; i < n; i++){
        cout << "Introduceti sirul " << i + 1 << ": ";
        cin.getline(a[i], 100);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            char aux[100];
            if(strlen(a[i]) > strlen(a[j])){
                strcpy(aux, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], aux);
            }
        }
    }

    f << "Sirurile in ordinea inversa a lungimii lor:" << endl;
    for(int i = 0; i < n; i++){
        f << a[i] << endl;
    }

    f.close();
    delete[] a;
    return 0;

}