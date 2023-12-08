#include <iostream>
#include <cstdlib>

int main() {
    int size;
    //lipsea : la cout
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;
    //arrCalloc nu era declarat ca pointer
    int *arrCalloc = static_cast<int *>(calloc(size, sizeof(int)));
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
    //in if era un singur egal care insemna atribuire, nu comparare cum ar trebui
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc); //lipsea ;

    return 0;
}

/*In acest cod cu functia malloc, alocam un anumit spatiu din memorie pentru un vector a carui marime am introdus o la inceput
apoi codul verifica daca memoria a fost alocata cu succes folosind functia malloc, in caz afirmativ, programul afiseaza un mesaj de confirmare, in caz contrar programul afiseaza un mesaj de eroare si se opreste
acelasi lucru se face pentru un alt vector oarecare cu aceeasi marime declarata anterior, insa de data aceasta folosind calloc, apoi verifica daca alocarea memoriei a avut succes, si in cazul in care nu, apare un mesaj de eroare, se elibereaza si memoria alocata folosind functia malloc si se opreste programul
in caz afirmativ, acesta afiseaza un mesaj de succes
apoi ne cere sa introducem o alta marime a unui vector pe care o vom realoca spatiului alocat mai devreme primului vector folosind functia malloc, schimbandu-i dimensiunea
apoi verificam daca alocarea a avut succes, again in caz afirmativ afiseaza un mesaj de confirmare ca memoria a fost realocata cu succes folosind functia realloc, in caz contrar apare un mesaj cu un warning ca a esuat, se elibereaza memoria care a fost alocata anterior in memorie cu functiile malloc si calloc si se opreste programul
*/
