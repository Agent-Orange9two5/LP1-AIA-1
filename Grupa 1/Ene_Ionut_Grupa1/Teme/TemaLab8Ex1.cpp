//Codul iti cere sa ii oferi o dimensiune array-ului, aloca acea memorie o data folosid malloc si o data calloc, dupa cere sa oferim o noua dimensiune, pe care o aloca folosind realloc, dupa care elibereaza memoria folosind free


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


    int * arrCalloc = static_cast<int *>(calloc(size, sizeof(int)));
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
    free(arrCalloc);

    return 0;
}
