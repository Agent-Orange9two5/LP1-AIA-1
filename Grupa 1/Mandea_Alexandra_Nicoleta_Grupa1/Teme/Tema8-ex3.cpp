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
    for (int i = 0; i <= size; ++i) {
        const int bufferSize = 100;
        arrMalloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrMalloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) {
                free(arrMalloc[j]);
            }
            free(arrMalloc) 
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

        for (int i = 1; i < size; ++i) {
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
        if (arrRealloc[] == nullptr) {
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

    for (int i = 0; i <= newSize; ++i) {
        free(arrRealloc[i]);
    }
    free(arrRealloc);

    return 0;
}

/*

#include <iostream>
#include <cstdlib>

int main() {
    // Se solicită utilizatorului să introducă dimensiunea inițială a array-ului.
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;
    std::cin.ignore(); // Se ignoră caracterul newline rămas în buffer după citirea dimensiunii.

    // Se alocă dinamic memorie pentru array-ul de șiruri de caractere.
    char **arrMalloc = static_cast<char **>(malloc(size * sizeof(char *)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    // Se introduce fiecare șir de caractere în array.
    std::cout << "Enter " << size << " strings:" << std::endl;
    for (int i = 0; i < size; ++i) {
        const int bufferSize = 100;
        // Se alocă dinamic memorie pentru fiecare șir de caractere.
        arrMalloc[i] = static_cast<char *>(malloc(bufferSize * sizeof(char)));
        if (arrMalloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            // Dacă alocarea pentru un șir de caractere a eșuat, se eliberează memoria alocată anterior și se iese din program.
            for (int j = 0; j < i; ++j) {
                free(arrMalloc[j]);
            }
            free(arrMalloc);
            return 1;
        }
        // Se citește șirul de caractere de la intrarea standard.
        std::cin.getline(arrMalloc[i], bufferSize);
    }

    // Se solicită utilizatorului să introducă noua dimensiune pentru realocare.
    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;
    std::cin.ignore(); // Se ignoră caracterul newline rămas în buffer după citirea noii dimensiuni.

    // Se realocă dinamic memoria pentru array-ul de șiruri de caractere.
    char **arrRealloc = static_cast<char **>(realloc(arrMalloc, newSize * sizeof(char *)));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;

        // Dacă realocarea a eșuat, se eliberează memoria alocată anterior și se iese din program.
        for (int i = 0; i < size; ++i) {
            free(arrMalloc[i]);
        }
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    // Se introduce noi șiruri de caractere în array-ul extins.
    std::cout << "Enter " << newSize - size << " more strings:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        const int bufferSize = 100;
        // Se alocă dinamic memorie pentru fiecare nou șir de caractere.
        arrRealloc[i] = static_cast<char *>(malloc(bufferSize * sizeof(char)));
        if (arrRealloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            // Dacă alocarea pentru un nou șir de caractere a eșuat, se eliberează memoria alocată anterior și se iese din program.
            for (int j = 0; j < i; ++j) {
                free(arrRealloc[j]);
            }
            free(arrRealloc);
            return 1;
        }
        // Se citește șirul de caractere de la intrarea standard.
        std::cin.getline(arrRealloc[i], bufferSize);
    }

    // Se afișează array-ul actualizat de șiruri de caractere.
    std::cout << "Updated array of strings:" << std::endl;
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << std::endl;
    }

    // Se eliberează memoria alocată dinamic pentru array-ul de șiruri de caractere.
    for (int i = 0; i < newSize; ++i) {
        free(arrRealloc[i]);
    }
    free(arrRealloc);

    return 0;
}

*/
