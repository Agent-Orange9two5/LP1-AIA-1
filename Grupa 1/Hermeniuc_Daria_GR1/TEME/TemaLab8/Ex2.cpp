// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)

#include <iostream>
#include <stlib.h> //Eroare linia 4: nu a fost introdusa biblioteca stdlib.h

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size; //Eroare linia 9: programul initial avea cin > dar este nevoie de cin >>


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std:cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) { //Eroare linia 21: variabila i trebuie sa fie < size nu <= size
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: "; //Eroare linia 26: programul initial avea std: dar este nevoie de std::
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float)); //Eroare linia 30: variabila arrRealloc avea nevoie de pointer
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
    for (int i = 0; i < newSize; ++i) { //Eroare linia 47: am modificat valoarea de la care porneste i(am schimbat 1 in 0) 
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}

/*Explicatie program: Programul aloca memorie unui vector, ne cere sa ii dam valori acestuia de numere reale, 
dupa care ii realoca mai multa memorie si ne cere sa introducem atatea numere cat este nevoie pentru a umple memoria,
apoi afiseaza noul vector(dupa realocare), iar la final elibereaza memoria*/
