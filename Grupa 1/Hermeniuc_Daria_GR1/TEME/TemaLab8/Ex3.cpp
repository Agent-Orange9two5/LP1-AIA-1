//Sa se explice succint scopul programului de  mai jos si sa se corecteze erorile de sintaxa si logica. 


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
    for (int i = 0; i < size; ++i) { //Eroare linia 24: variabila i trebuie sa fie < size, nu <= size
        const int bufferSize = 100;
        arrMalloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrMalloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) {
                free(arrMalloc[j]);
            }
            free(arrMalloc); //Eroare linia 33: este nevoie de ; la finalul sintaxei
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

        for (int i = 0; i < size; ++i) { //Eroare linia 49: variabila i trebuie sa porneasca de la valoarea 0
            free(arrMalloc[i]);
        }
        free(arrMalloc); 
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    std::cout << "Enter " << newSize - size << " more strings:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        const int bufferSize = 100; 
        arrRealloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrRealloc[i] == nullptr) { //Eroare linia 62: am inlocuit arrRealloc[] cu arrRealloc[i]
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i, ++j) {
                free(arrRealloc[j]);
            }
            free(arrRealloc); 
            return 1;
        }
        std::cingetline(arrRealloc[i], bufferSize);
    }


    std::cout << "Updated array of strings:" << std::endl;
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << std::endl;
    }

    for (int i = 0; i <= newSize; ++i) { //Eroare linia 80: variabila i trebuie sa fie < newSize, nu <= newSize
        free(arrRealloc[i]);
    }
    free(arrRealloc);

    return 0;
}

/*Explicatie program: Programul aloca memorie unei matrice formata din siruri de caractere, 
ne cere sa introducem siruri de caractere pentru a umple memoria, dupa care matricei ii este alocata mai multa memorie si trebuie sa introducem
din nou siruri de caractere pentru a umple restul de memorie care a fost introdusa, iar la final spatiul de memorie al acesteia este eliberat*/
