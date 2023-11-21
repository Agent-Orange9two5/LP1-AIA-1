//Sa se explice succint scopul programului de  mai jos si sa se corecteze erorile de sintaxa si logica.
//alocarea si realocare mememorie pentru un array de siruri
#include <iostream> // librarie pentru comenzi de intrare/iesire, nu functioneaza programul fara
#include <cstdlib>
#include <cstring>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;
    std::cin.ignore();


    char **arrMalloc = (char **)malloc(size * sizeof(char *));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    std::cout << "Enter " << size << " strings:" << std::endl;
    for (int i = 0; i <= size; ++i) {
        const int bufferSize = 100;
        arrMalloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrMalloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) {
                free(arrMalloc[j]);
            }
            free(arrMalloc); //; la final
            return 1;
        }
        std::cin.getline(arrMalloc[i], bufferSize);
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;
    std::cin.ignore();


    char **arrRealloc = (char **)realloc(arrMalloc, newSize * sizeof(char *));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;

        for (int i = 0; i < size; ++i) { //i=0 inloc de i=1
            free(arrMalloc[i]);
        }
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    std::cout << "Enter " << newSize - size << " more strings:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        const int bufferSize = 100;
        char * arrRealloc[i] = (char *)malloc(bufferSize * sizeof(char)); //char si pointer arrRealoc
        if (arrRealloc[] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) { //; inloc de ,
                free(arrRealloc[j]);
            }
            free(arrRealloc);
            return 1;
        }
        std::cin.getline(arrRealloc[i], bufferSize); //cin.getline inloc de cingetline
    }


    std::cout << "Updated array of strings:" << std::endl;
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << std::endl;
    }

    for (int i = 0; i < newSize; ++i) { //la i=0 avem < nu <=, se face exces de date dupa
        free(arrRealloc[i]);
    }
    free(arrRealloc);

    return 0;
}
