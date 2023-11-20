
#include <iostream>
#include <cstdlib> 
#include <cstring>

//ex1
/*
int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arrMalloc = static_cast<int*>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int *arrCalloc = static_cast<int*>(calloc(size, sizeof(int)));
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    int* arrRealloc = static_cast<int*>(realloc(arrMalloc, newSize * sizeof(int)));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc);

        return 0;
}
*/
/*A fost alocata dinamic memoria pentru o variabila, dupa aceea a fost realocata */



/*
int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;


    float* arrMalloc = (float*)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
    std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    float *arrRealloc = (float*)realloc(arrMalloc, newSize * sizeof(float));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;


    std::cout << "Enter " << newSize - size << " more float numbers:" << std::endl;
    for (int i = size; i < newSize; i++) {
        std::cin >> arrRealloc[i];
    }


    std::cout << "Updated array:" << std::endl;
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}*/

/*Se aloca dinamic memorie pentru un vector, se citesc numerele din vector, apoi se modifica dinamic memoria si se citesc newSize-size numere*/


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

/*Se aloca memorie dinamic pentru o matrice de charuri, dupa care se realoca memorie pentru ea si se adauga sirurile.*/
