/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the size of the array: "; //////// lipsesc: ininte de cout
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int *arrCalloc = static_cast<int *>(calloc(size, sizeof(int)));     ////// arrcalloc nu era declarat ca pointer
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
    if (arrRealloc == nullptr) { /// lipseste un egal in if
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc);     //// lipseste ;

    return 0;
}


/* Programul solicita dimensiune unui array de la tastatura, dupa care aloca memorie cu malloc si verifica.Daca nu se poate verifica se afiseaza "Memory allocation failed using malloc!" și încheie programul.
Dupa care calloc aloca memorie, si se cere o noua dimensiune pt alocare.memoria se alocheaza cu calloc, iar in caz de eșec, afișează un mesajul "Memory allocation failed using calloc!" 
Memoria initial alocata cu malloc devine se realocheaza cu realloc . Verifică succesul realocării și afișează un mesaj corespunzător. Se eliberează memoria alocată anterior cu malloc și calloc. */
