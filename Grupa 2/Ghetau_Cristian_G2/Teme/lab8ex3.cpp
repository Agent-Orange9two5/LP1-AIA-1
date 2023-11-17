// Scopul acestui program este să ceară utilizatorului să introducă inițial o dimensiune pentru un șir de caractere (array)
// și apoi să aloce memorie pentru acesta folosind funcția malloc.
// Programul primește apoi o serie de șiruri de caractere de la utilizator și le stochează în memoria alocată.
// Ulterior, solicită utilizatorului să introducă o nouă dimensiune pentru șirul de caractere și realocă memoria folosind funcția realloc.
// Acest proces se repetă pentru a adăuga mai multe șiruri de caractere în memoria realocată.
// În final, programul afișează șirurile de caractere stocate în memoria realocată și eliberează memoria alocată.

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;
    std::cin.ignore();

    char** arrMalloc = (char**)malloc(size * sizeof(char*));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " strings:" << std::endl;
    for (int i = 0; i < size; ++i) {
        const int bufferSize = 100;
        arrMalloc[i] = (char*)malloc(bufferSize * sizeof(char));
        if (arrMalloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) {
                free(arrMalloc[j]);
            }
            free(arrMalloc);
            return 1;
        }
        std::cin.getline(arrMalloc[i], bufferSize);
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;
    std::cin.ignore();

    char** arrRealloc = (char**)realloc(arrMalloc, newSize * sizeof(char*));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;

        for (int i = 0; i < size; ++i) {
            free(arrMalloc[i]);
        }
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    std::cout << "Enter " << newSize - size << " more strings:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        const int bufferSize = 100;
        arrRealloc[i] = (char*)malloc(bufferSize * sizeof(char));
        if (arrRealloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) {
                free(arrRealloc[j]);
            }
            free(arrRealloc);
            return 1;
        }
        std::cin.getline(arrRealloc[i], bufferSize);
    }

    std::cout << "Updated array of strings:" << std::endl;
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << std::endl;
    }

    for (int i = 0; i < newSize; ++i) {
        free(arrRealloc[i]);
    }
    free(arrRealloc);

    return 0;
}

// Am corectat erorile de sintaxă și am ajustat unele valori de la <= la < pentru a evita depășirea buffer-ului și a indicaților. //
