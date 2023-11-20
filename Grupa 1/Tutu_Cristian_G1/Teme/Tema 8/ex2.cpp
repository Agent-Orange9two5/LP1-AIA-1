#include <iostream>
#include <cstdlib> //lipsea libraria cstdlib

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size; //lipsea un ">" de la citire


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl; //aparea o singura data ":" inainte de cout
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) { //structura for il incrementa pe i pana cand i=size, in loc de i=size-1
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: "; //aparea o singura data ":" inainte de cout
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float)); //arrRealloc nu era declarat ca pointer
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;


    std::cout << "Enter " << newSize - size << " more float numbers:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        std::cin >> arrRealloc[i];
    }


    std::cout << "Updated array:" << std::endl;
    for (int i = 0; i < newSize; ++i) { //structura for pleca cu i de la valoarea 1, neafisand astfel prima valoare
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}

/* Programul cere utilizatorului sa introduca dimensiunea n a unui array, alocand apoi memorie folosind functia malloc pentru un array cu numere de tip float, adresa memoriei fiind alocata in pointerul arrMalloc. Se verifica apoi procesul de alocare,
afisandu-se mesajul "Memory allocation failed using malloc!" si incheindu-se programul in cazul in care memoria nu a fost alocata returnandu-se valoarea 1. Codul cere apoi utilizatorului sa introduca n numere de tip float care sunt stocate in array.
Este citita apoi o noua dimensiune m a array-ului, fiind folosita functia realloc pentru a se realoca memoria alocata initial cu malloc. Adresa memoriei realocate este memorata in pointerul arrRealloc. Se verifica din nou daca procesul de alocare a reusit,
afisandu-se mesajul "Memory reallocation failed using realloc!", eliberandu-se memoria din arrMalloc si incheindu-se programul cu returnarea valorii 1 in cazul esuarii realocarii. Daca procesul a reusit, utilizatorul trebuie sa introduca m-n numere de tip float
care sunt adaugate la array-ul realocat. Se afiseaza array-ul actualizat, urmand ca memoria alocata cu realloc sa fie eliberata. */
