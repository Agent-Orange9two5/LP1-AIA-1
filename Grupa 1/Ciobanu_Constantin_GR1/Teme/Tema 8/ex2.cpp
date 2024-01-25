// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)

#include <iostream>


int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;


    float *arrMalloc = (float *)malloc(size * sizeof(float));   //  Se initializeaza si aloca un tabel arrMalloc cu tip de date float
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; i++) {    //  se introduc elementele in tabel
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));   //  se realoca un tabel arrRealloc pe baza tabelului arrMalloc
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;


    std::cout << "Enter " << newSize - size << " more float numbers:" << std::endl;
    for (int i = size; i < newSize; i++) {      //  Se introduc elemente aditionale in tabel daca este necesar
        std::cin >> arrRealloc[i];
    }


    std::cout << "Updated array:" << std::endl;
    for (int i = 0; i < newSize; i++) {     //   Se afiseaza tabelul nou
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);   //  Se elibereaza tabelul nou

    return 0;
}
