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
    if (arrRealloc == nullptr) {
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

//Explicatiile se vor afla in cadrul unui bloc comment ( /* */ ) in codul corectat.
/* Linia 2: este inclusa libraria <cstdlib> care face posibila utilizarea functiilor pentru alocare dinamica
In liniile 5-7: este declarat marimea unui array de tipul int , se afiseaza de la tastatura marimea array-ului, dupa care se citeste marimea acestuia ;
Linia 9: este alocata in int o dimensiune a array-ului cu ajutorul functiei malloc ;
Liniile 10-13 contin o functie if prin care , daca alocarea facuta in int-ul de mai sus este = 0 , se afiseaza textul "Memory allocation failed using calloc!" si se elibereaza spatiul care a fost declarat pentru variabila respectiva , dupa care se returneaza valoarea 1;
Linia 15: se afiseaza textul "Memory allocated using malloc."
Linia 18: este alocata in int o dimensiune a array-ului cu ajutorul functiei calloc ;
Liniile 19-23 contin o functie if prin care, daca alocarea facuta in int-ul de mai sus este egala cu 0, se afiseaza textul "Memory allocation failed using calloc!" si se elibereaza spatiul care a fost declarat pentru variabila , dupa care se returneaza valoarea 1 (mentiune: calloc, spre deosebire de malloc , aloca spatiul cerut si seteaza memoria alocata la 0)  
Linia 25 : se afiseaza textul "Memory allocated using calloc."
In iniile 28-30 se declara in int o noua dimensiune (adica newsize) , dupa care se afiseaza textul "Enter the new size for reallocation: " si se citeste de la tastatura newsize-ul declarat in int (noua dimensiune declarata)
Linia 33: este alocata in int o noua dimensiune a array-ului cu ajutorul functiei realloc;
Liniile 34-39 contin o functie if prin care, daca alocarea facuta in int-ul de la linia 33 este egala cu 0, se afiseaza textul "Memory reallocation failed using realloc!" , dupa care se elibereaza spatiul care a fost declarat cu functiile malloc si calloc , iar apoi se returneaza valoarea 1
Linia 41: se afiseaza textul  "Memory reallocated using realloc."
Liniile 43-44 : se elibereaza spatiul care a fost alocat pentru array-urilor care au fost declarate cu ajutorul functiilor realloc , respectiv calloc
Linia 46: returneaza valoarea 0;
*/
