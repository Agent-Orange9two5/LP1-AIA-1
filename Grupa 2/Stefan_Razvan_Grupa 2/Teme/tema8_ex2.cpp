// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)

#include <iostream>
#include <cstdlib> /* Greseala de pe linia 4 - Lipseste libraria cstdlib */

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size; /* Greseala de pe linia 9 - Lipseste un caracter ">" */


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl; /* Greseala de pe linia 14 - Lipseste un caracter ":" */
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) { /* Eroare de logica - Avand in vedere ca "i" incepe de la 0, trebuie sa mearga pana la size - 1 */
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: "; /* Greseala de pe linia 26 - Lipseste un caracter ":" */
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float)); /* Greseala de pe linia 30 - Lipseste caracterul "*" */
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

/* Programul va permite utilizatorului sa introduca o dimensiune initiala si o realocare. Vectorul primeste
elemente conform dimensiunilor alocate. In urma realocarii, sirul va primi o concatenare incepand de la al
2-lea element din primul vector. ( am vazut un hint la linia 47, intuiesc ca este o eroare de logica legata de faptul ca i ar fi trebuit
                                  sa porneasca de la 0. ) */
