// Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica)

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    //Greseala de pe linia 8 - Intre "std" si "cout" avem nevoie de doua caractere ":", in loc de unul.
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    /*Greseala de pe linia 20 - "arrCalloc" trebuie initializat alaturi de caracterul "*".*/
    int *arrCalloc = static_cast<int *>(calloc(size, sizeof(int)));
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    int *arrRealloc = static_cast<int *>(realloc(arrMalloc, newSize * sizeof(int))); /*Pe aceasta linie nu am reusit sa identific problema de logica. Am incercat sa asimilez codul de aici cu codul scris anterior, insa arrMalloc nu poate fi folosit ca functie.*/
    if (arrRealloc = nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc); /*Pe aceasta linie lipsea caracterul ";" */

    return 0;
}

//Explicatiile se vor afla in cadrul unui bloc comment ( /* */ ) in codul corectat.
/* Din pacate nu cred ca am reusit sa identific problema liniei 36. Astept cu nerabdare un feedback si o explicatie. :) */

/*
Explicatia programului:

Programul permite utilizatorului sa aloce dimensiunea unui array cu ajutorul malloc / calloc ( in functie de cum sunt indeplinite conditiile ). Mai departe, programul 
ofera optiunea de a realoca o alta dimensiune - folosind realloc. Pe scurt, programul arata intr-un mod simplu cum functioneaza malloc / calloc / realloc
*/
