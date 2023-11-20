#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the size of the array: "; //aparea o singura data ":" inainte de cout
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int *arrCalloc = static_cast<int *>(calloc(size, sizeof(int))); //arrCalloc nu era declarat ca pointer
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    int *arrRealloc = static_cast<int *>(realloc(arrMalloc, newSize * sizeof(int)));
    if (arrRealloc == nullptr) { //aparea un singul egal in conditie
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc);//lipsea ";"

    return 0;
}
/* Codul dat incepe prin a cere dimensiunea dorita de utilizator pentru un array, alocand memorie de dimensiunea data folosind functia malloc, adresa a careia este stocata in pointerul arrMalloc. Programul verifica apoi daca memoria a fost alocata cu succes, urmand ca
 in cazul in care nu a fost alocata cu succes sa afiseze mesajul "Memory allocation failed using malloc!" si sa incheie programul returnand valoarea 1. Se aloca apoi memorie folosind functia calloc, adresa acesteia fiind din nou stocata in pointerul arrMalloc. Se
verifica din nou daca memoria a fost alocata cu succes, afisandu-se mesajul "Memory allocation failed using calloc!" in caz contrar si incheindu-se programul. Este ceruta apoi utilizatorului o noua dimensiune pentru realocare, fiind redimensionata memoria alocata
initial cu malloc, iar adresa acesteia este memorata in pointerul arrRealloc. Se verifica procesul de realocare, programul afisand mesajul de eroare "Memory reallocation failed using realloc!" in cazul in care aceasta nu a reusit urmand sa se elibereze memoria
alocata cu malloc si calloc si sa se incheie programul, returnandu-se valoare 1. In caz contrar, se afiseaza mesajul "Memory reallocated using realloc." si se elibereaza memoria alocata cu alloc si calloc. */
