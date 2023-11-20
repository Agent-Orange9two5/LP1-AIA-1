// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;

    /*Se aloca memorie folosind malloc cu un pointer de tip float
    iar daca variabila este 0 nu se poate aloca memorie*/
    float* arrMalloc = (float*)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
    std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;
    /*Se citesc de la tastatura numere de tip float*/
    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i <= size; i++) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;

    /*Se aloca memorie pentru noua mrime a vectorului prin functia realloc iar daca variabila este NULL se elibereaza memoria alocata prin malloc*/
    float* arrRealloc = (float*)realloc(arrMalloc, newSize * sizeof(float));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    /*Se cere completarea noului vector cu numere de tip float*/
    std::cout << "Enter " << newSize - size << " more float numbers:" << std::endl;
    for (int i = size; i < newSize; i++) {
        std::cin >> arrRealloc[i];
    }

    /*Se afiseaza noul vector*/
    std::cout << "Updated array:" << std::endl;
    for (int i = 1; i < newSize; i++) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc); //Se elibereaza memoria ocupata de realloc

    return 0;
}
