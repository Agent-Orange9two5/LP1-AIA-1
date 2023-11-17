// Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica) 

#include <iostream>
#include <cstdlib> 

int main() {
    int size;
    std::cout << "Enter the size of the array: "; 
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


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

 
    int *arrRealloc = static_cast<int *>(realloc(arrMalloc, newSize * sizeof(int)));
    if (arrRealloc = nullptr) { 
        /*
        corect: if(arrRealloc == nullptr)
        in if trebuie sa avem ==, nu =
        */
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

//Explicatiile se vor afla in cadrul unui bloc comment ( /* */ ) in codul corectat.

/*

    Programul de mai sus are scopul de a verifica daca se poate aloca memorie pentru un array, folosind cele 2 functii: malloc si calloc.
De asemenea se realoca memorie pentru vector, folosind functia realloc. Se afiseaza pe ecran daca se poate sau nu aloca memorie.

*/