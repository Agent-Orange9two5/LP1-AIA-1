// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)
/*
In cod se introduce dela tastatura un numar care va aloca memorie folosind functia malloc,
dupa se va introduce n numere (n=size) care vor fi introduse in pointeru arrMalloc.
Dupa se introduce din nou un numar de la tastatura pentu realocarea pointerului
(exemplu: prima data se aloca in memorie un pointer de 2 elemente, cu realloc se poate aloca in acelasi pointer mai multe elemente).
Dupa realocare se vor introduce alte numere de tip float care vor fi introduse in pointer pentru a ocupa spatiile
libere din pointer dupa realocare. La sfarsit se afiseaza toate numerele din pointer si se elibereaza pointerul din memorie. */

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));
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
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}
