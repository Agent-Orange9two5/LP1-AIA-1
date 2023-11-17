// Scopul acestui program este să aloce inițial memorie pentru un
// sir de numere reale (float), sa permita utilizatorului sa introduca valorile pentru aceste
// elemente si sa realoce apoi memoria pentru sirul respectiv la o dimensiune mai mare sau mai mica, in functie de opțiunea utilizatorului

#include <iostream>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;  // Trebuie să fie ">>" în loc de ">"

    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {  // Trebuie să fie "<" în loc de "<="
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;

    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));  // Trebuie să fie "*arrRealloc" în loc de "arrRealloc"
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
    for (int i = 0; i < newSize; ++i) {  // Trebuie să înceapă de la 0 în loc de 1
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;

    free(arrRealloc);

    return 0;
}


// Aceste modificări includ corecturi la operatorul de citire (std::cin >> size;), la bucla de introducere a valorilor (for (int i = 0; i < size; ++i)),
// la alocarea realocată (float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));), și la bucla de afișare a valorilor (for (int i = 0; i < newSize; ++i)).
