/*
a) Creați un program care primește de la tastatură un număr n și apoi citește n șiruri de caractere de lungime variabilă. Stocați aceste șiruri într-un vector și afișați-le sortate în ordine alfabetică.
b) Scrieți aceste șiruri sortate într-un fișier text numit "SiruriSortate.txt".

*/


#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
    ofstream f("SiruriSortate.txt");

    int n, i, j;

    cout << "Introduceti numarul de siruri: ";
    cin >> n;

    cin.ignore();

    char v[100][100];

    cout << "Introduceti sirurile: ";
    for(i = 0; i < n; i++){
        cin.getline(v[i], 100);
    }

    //sortare alfabetica
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(strcmp(v[i], v[j]) > 0){
                char aux[100];
                strcpy(aux, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], aux);
            }
        }
    }
    
    f << "Sirurile sortate in ordine alfabetica:" << endl;
    for(i = 0; i < n; i++){
        f << v[i] << endl;
    }
  
    f.close();
    return 0;
}
