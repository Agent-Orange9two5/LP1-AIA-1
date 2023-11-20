#include <iostream> //libraria iostream nu era inclusa
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
    for (int i = 0; i < size; ++i) { //structura for incrementa variabila i pana cand ajungea egala cu dimensiunea memoriei, ceea ce este incorect deoarece i porneste de la 0
        const int bufferSize = 100;
        arrMalloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrMalloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) {
                free(arrMalloc[j]);
            }
            free(arrMalloc); //lipsea ";"
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
        if (arrRealloc[i] == nullptr) { //variabila i nu aparea intre parantezele patrate
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j) { //aparea "," in loc de ";"
                free(arrRealloc[j]);
            }
            free(arrRealloc);
            return 1;
        }
        std::cin.getline(arrRealloc[i], bufferSize); //nu aparea "." intre cin si getline`
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


/*Programul cere utilizatorului dimensiunea n a unui array de siruri de caractere, alocand apoi memoria cu functia malloc. Utilizatorul apoi introduce n siruri de caractere, pentru fiecare sir fiind alocata memorie cu ajutorul functiei malloc.
Codul cere apoi o noua dimensiune m, si se foloseste functia realloc pentru a fi realocata memoria pentru array-ul existent la noua dimensiune. Sunt introduse apoi m-n siruri de caractere, fiind folosita functia malloc pentru a se alocata memorie
pentru fiecare din ele. Este afisat apoi array-ul cu cele m siruri, urmand ca memoria sa fie eliberata. */
