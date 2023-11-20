// Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica) 

#include <iostream>
#include <cstdlib> 

int main() {
    int size;
std::cout << "Enter the size of the array: ";
    std::cin >> size;
    /*Se aloca folosind un pointer spatiu in memorie pentru variabila size folosind functia malloc
    iar in caz ca variabila este NULL nu se aloca spatiu*/
    int* arrMalloc = static_cast<int*>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;
    /*Se aloca folosind un pointer spatiu in memorie pentru variabila size folosind functia calloc
    iar in caz ca variabila este NULL nu se aloca spatiu*/

    int* arrCalloc = static_cast<int*>(calloc(size, sizeof(int)));
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;
    /*Se realoca folosind un pointer spatiu in memorie pentru variabila newSize folosind functia malloc
        iar in caz ca variabila este NULL nu se aloca spatiu 
        si se elibereaza memoria acupata anterior cu functiile malloc si calloc*/

    int* arrRealloc = static_cast<int*>(realloc(arrMalloc, newSize * sizeof(int)));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;
    //Se elibereaza memoria oncupata de functiile realloc si calloc
    free(arrRealloc);
    free(arrCalloc);

        return 0;
}

//Explicatiile se vor afla in cadrul unui bloc comment ( /* */ ) in codul corectat.
