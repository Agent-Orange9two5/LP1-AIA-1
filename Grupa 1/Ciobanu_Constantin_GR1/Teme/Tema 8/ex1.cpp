// Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica) 

#include <iostream>
#include <cstdlib> 

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));    //  Se initializeaza si se aloca memorie dinamic pentru un tabel arrMalloc
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;     //  Daca numarul de elemente e negativ atunci zice ca nu poate aloca memorie
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int *arrCalloc = static_cast<int *>(calloc(size, sizeof(int)));     //  Se initializeaza cu 0 si se aloca dinamic tabelul arrCalloc 
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc!" << std::endl;
        free(arrMalloc); 
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;

 
    int *arrRealloc = static_cast<int *>(realloc(arrMalloc, newSize * sizeof(int)));    //  Se initializeaza si si aloca memorie pt un tabel arrRealloc pe baza tabelului arrMalloc
    if (arrRealloc = nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc); 
        free(arrCalloc); 
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);   //  Se elibereaza tabelul arrRealloc
    free(arrCalloc);    //  Se elibereaza tabelul arrCalloc

    return 0;
}

//Explicatiile se vor afla in cadrul unui bloc comment ( /* */ ) in codul corectat.
