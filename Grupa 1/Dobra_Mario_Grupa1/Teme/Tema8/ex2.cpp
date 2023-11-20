#include <iostream>
#include <cstdlib> //lipsea libraria cstdlib

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size; //lipsea un ">"


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl; //aparea un singur ":" inainte de cout
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) { //i se ducea pana la size, nu size-1
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: "; //aparea un singur ":" inainte de cout
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
    for (int i = 0; i < newSize; ++i) { //structura for pleca cu i de la valoarea 1
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}

/* Programul cere dimensiunea n a unui array de tip float, alocă memorie cu malloc, și verifică alocarea, iar apoi afișează "Memory allocation failed using malloc!" in caz de eșec .
Utilizatorul introduce n numere de tip float. Se citește o nouă dimensiune m, iar memoria este realocată cu realloc și se verifică alocarea, iar apoi afișează "Memory allocation failed using realloc!" in caz de eșec.
Apoi se adaugă m−n numere de tip float. Se afișează array-ul actualizat, iar memoria este eliberată.  */




