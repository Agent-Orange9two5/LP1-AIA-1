#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

fstream f("orase.txt");

struct oras {
    char denumire[100];
    long long nrloc; 
    long long supr;  
    char indiceapec;
};
int suma = 0;
void citire(oras **v, int n) {
    *v = (oras *)malloc(n * sizeof(oras));
    if (*v == nullptr) {
        cout << "Alocare de memorie esuata!";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "Introduceti orasul cu numarul " << i + 1 << " si detaliile despre acesta";
        cout << endl;
        cout << "Numele orasului: ";
        cin >> (*v)[i].denumire;
        cout << endl;
        cout << "Numarul de locuitori: ";
        cin >> (*v)[i].nrloc;
        cout << endl;
        cout << "Suprafata orasului: ";
        cin >> (*v)[i].supr;
        cout << "km^2";
        cout << endl; 
        cout << "Indicele de apreciere economica: ";
        cin >> (*v)[i].indiceapec;
        cout << endl;
        suma = suma + (*v)[i].nrloc;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((*v)[j].nrloc > (*v)[i].nrloc) {
                swap((*v)[i], (*v)[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        f << "Numele orasului: "<< (*v)[i].denumire << "  Numarul de locuitori: " << (*v)[i].nrloc << "  Suprafata orasului: " << (*v)[i].supr << "  Indicele de apreciere economica: " << (*v)[i].indiceapec << endl;
    }
}

int main() {
    int n;
    float smedie = 0;
    cout << "Introduceti numarul de orase: ";
    cin >> n;
    oras *v;
    citire(&v, n);
    smedie = suma/n;
    cout << smedie;
    f.close();
    free(v);
    return 0;
}
