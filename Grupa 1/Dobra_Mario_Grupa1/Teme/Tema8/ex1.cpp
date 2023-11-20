#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the size of the array: "; //aparea un singur ":" inainte de cout
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
    if (arrRealloc == nullptr) { //aparea un singur egal
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc); //lipsea ";"

    return 0;
}

/* Programul începe prin a solicita dimensiunea dorită a unui array de la utilizator. Alocă memorie cu malloc și verifică succesul. În caz de eșec, afișează un mesajul "Memory allocation failed using malloc!" și încheie programul.
Se alocă și memorie cu calloc, iar apoi se solicită o nouă dimensiune pentru realocare. Se alocarea memoriei cu calloc, iar in caz de eșec, afișează un mesajul "Memory allocation failed using calloc!" 
Memoria inițial alocată cu malloc este redimensionată cu realloc. Verifică succesul realocării și afișează un mesaj corespunzător. Se eliberează memoria alocată anterior cu malloc și calloc. */
