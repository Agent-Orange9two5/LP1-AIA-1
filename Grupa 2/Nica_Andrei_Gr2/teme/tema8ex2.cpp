#include <iostream>
#include <cstdlib> ///// lipseste libraria

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size; /// lipseste >


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl; ///// lipsea : inainte de cout
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) { ///////////i trebuie sa se duca pana la size
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: "; ///////// lipsea : inainte de cout
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float)); /////arrrealloc nu este declarat pointer
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
    for (int i = 0; i < newSize; ++i) { /////////structura for pleca cu i de la valoarea 1
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}

