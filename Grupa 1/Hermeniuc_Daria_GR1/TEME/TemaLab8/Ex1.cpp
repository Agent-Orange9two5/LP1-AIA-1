 // Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica) 

#include <iostream>
#include <cstdlib> 

int main() {
    int size;
    std::cout << "Enter the size of the array: "; //Eroare linia 8: programul initial avea std: dar este nevoie de std::
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int arrCalloc = static_cast<int *>(calloc(size * sizeof(int))); //Eroare linia 20: programul initial avea size, sizeof dar este nevoie de size * sizeof
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
    if (arrRealloc == nullptr) { //Eroare linia 36: programul initial avea if( cond = cond) dar este nevoie de if(cond == cond)
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc); 
        free(arrCalloc); 
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc); //Eroare linia 46: este nevoie de ; la finalul sintaxei

    return 0;
}

//Explicatiile se vor afla in cadrul unui bloc comment ( /* */ ) in codul corectat.

//Explicatie program: Programul ne arata cum se folosesc functiile malloc, calloc, realloc si free.(alocarea, realocarea si eliberarea unui spatiu de memorie)
