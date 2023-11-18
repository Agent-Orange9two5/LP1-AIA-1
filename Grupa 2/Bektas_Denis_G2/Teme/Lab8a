// Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica)

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the size of the array: "; /* std functioneaza doar cu 2 ":" iar aici era doar 1*/
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int *arrCalloc = static_cast<int *>(calloc(size, sizeof(int))); /* Aici arrCalloc nu a fost declarat ca
                            pointer initial si nu se poate face conversia dintre o variabila si un pointer*/
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    int *arrRealloc = static_cast<int *>(realloc(arrMalloc, newSize * sizeof(int)));
    if (arrRealloc = nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc); /* ; lipsa */

    return 0;
}

/* Programul utilizeaza functiile Malloc si Calloc si pointer catre vector pentru a aloca un spatiu in memorie pentru vector. Se introduce de la
tastatura marimea initiala dorita pentru vector, apoi se initializeaza o noua dimensiune introdusa de la tastatura, care va inlocui marimea introdusa
initial utilizand functia Realloc. La final, functia free elibereaza spatiul utilizat in memorie pentru a nu ocupa spatiul cu functiile utilizate anterior.*/
