// Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica)

// Programul ne arata cum se aloca si realoca memoria pentru array-uri de numere intregi. 

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the size of the array: "; // std trebuie sa fie urmat de dublu ":" // Introducem lungimea initiala a array-ului.
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int))); // verificam daca memoria a fost alocata cu succes, in caz contrar afisam mesaj de esec
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int * arrCalloc = static_cast<int *>(calloc(size, sizeof(int))); // pointer arrCalloc //initializam cun array de int-uri cu 0
    if (arrCalloc == nullptr) {  //se verifica daca alocarea de memorie a avut succes si se afiseaza
        std::cout << "Memory allocation failed using calloc!" << std::endl; //mesaj de esec in caz contrar
        free(arrMalloc); // se elibereaza memoria alocata anterior 
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: "; // // o noua lungime pentru alocarea memoriei
    std::cin >> newSize;


    int *arrRealloc = static_cast<int *>(realloc(arrMalloc, newSize * sizeof(int))); //raeloca memoria pentru noul set de array uri
    if (arrRealloc == nullptr) { // am schimbat operatorul de atribuire in cel de egalitate
        std::cout << "Memory reallocation failed using realloc!" << std::endl; 
        free(arrMalloc); 
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc); // se elibereaza memoria 
    free(arrCalloc); // ; la final

    return 0;
}

//Explicatiile se vor afla in cadrul unui bloc comment ( /* */ ) in codul corectat.
