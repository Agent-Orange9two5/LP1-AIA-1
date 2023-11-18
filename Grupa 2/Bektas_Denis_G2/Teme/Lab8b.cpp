// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)

#include <iostream>


int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size; /* Dupa cin, s-a utilizat 1 ">" inloc de 2 */


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl; /* dupa std era doar 1 ":" inloc de 2 */
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; ++i) { /* am modificat i < size, initial era i <= size*/
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: "; /* dupa std era doar 1 ":" inloc de 2 */
    std::cin >> newSize;


    float* arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float)); /* initial, float nu era pointer si se incerca conversia dintre un pointer si o variabila*/
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
    for (int i = 0; i < newSize; ++i) { /* am modificat int i = 0 din i = 1 pentru ca fiind indexat de la 1, nu imi arata numarul de pe pozitia 0, astfel intr un vector de 4 elemente se afisau doar 3 */
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}
/* Codul furnizat foloseste malloc pentru a aloca vectorului un numar de elemente in memorie introdus de la tastatura si se introduc elementele vectorului initial
Apoi se initializeaza o noua dimensiune in care se va realoca vectorul initial, astfel creand un vector nou.
Se introduce de la tastatura noua dimensiune, apoi programul calcueaza diferenta dintre nr de elemente initial si nr nou de elemente si trebuie sa introducem de la tastatura diferenta de elemente
In cazul in care dimensiunea noua este mai mica decat vectorul initial, programul afiseaza automat vectorul nou.*/
