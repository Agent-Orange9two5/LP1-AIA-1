// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)

#include <iostream>


int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin > size;


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std:cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i <= size; ++i) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std:cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    float arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));
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
    for (int i = 1; i < newSize; ++i) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}

/*

#include <iostream>
#include <cstdlib>


int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size; // Se citeste dimensiunea initiala a array-ului.

    // Se aloca memorie pentru array-ul de numere.
    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std:cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    // Se introduc numerele in array.
    for (int i = 0; i < size; ++i) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std:cout << "Enter the new size for reallocation: ";
    std::cin >> newSize; // Se citeste noua dimensiune pentru realocare.

    // Se realoca dinamic memoria pentru array-ul extins.
    float arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;


    std::cout << "Enter " << newSize - size << " more float numbers:" << std::endl;
    // Se introduc noile numere in array-ul extins.
    for (int i = size; i < newSize; ++i) {
        std::cin >> arrRealloc[i];
    }


    std::cout << "Updated array:" << std::endl;
    // Se afiseaza array-ul extins.
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;

    // Se elibereaza memoria alocata dinamic.
    free(arrRealloc);

    return 0;
}

*/
