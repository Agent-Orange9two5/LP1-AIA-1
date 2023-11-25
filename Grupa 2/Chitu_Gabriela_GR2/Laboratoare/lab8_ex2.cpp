#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std:: cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i = size; ++i) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));
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
    for (int i = 1; i < newSize; ++i) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}

/* Linia 2: este inclusa libraria <cstdlib> care face posibila utilizarea functiilor pentru alocare dinamica
In liniile 5-7: este declarat marimea unui array de tipul int , se afiseaza de la tastatura marimea array-ului cu textul "Enter the initial size of the array: " , dupa care se citeste marimea acestuia
Linia 10: este alocata in float o dimensiune a array-ului cu ajutorul functiei malloc;
Liniile 11-14 contin o functie if prin care , daca alocarea facuta in float-ul de mai sus este 0 , se afiseaza textul "Memory allocation failed using malloc!" si se returneaza valoarea 1 de la tastatura;
Linia 16: se afiseaza textul "Memory allocated using malloc."
Linia 18: se afiseaza textul "Enter " urmat de variabila "size" de tipul int declarata in linia 5 si textul " float numbers:" ;
Liniile 19-21 contin o structura repetitiva for cu conditiile ca variabila i=0 de tipul int sa fie egala cu marimea declarata la linia 5 si apoi sa ia valori crescatoare, iar instructiunile fiind sa se citeasca array-ul declarat cu ajutorul functiei malloc de tipul float, cu i elemente;
In liniile 23-25 se declara in int o noua dimensiune (adica newsize) , dupa care se afiseaza textul "Enter the new size for reallocation: " si se citeste de la tastatura newsize-ul declarat in int (noua dimensiune declarata)
Linia 28: este alocat in float o noua dimensiune a array-ului cu ajutorul functiei realloc;
Liniile 29-33 contin o functie if prin care , daca alocarea facuta in float-ul de la linia 28 este egala cu 0, se afiseaza textul "Memory reallocation failed using realloc!", si se elibereaza spatiul care a fost declarat pentru variabila cu ajutorul functiei malloc, dupa care se returneaza valoarea 1 ;
Linia 35: se afiseaza textul "Memory reallocated using realloc." 
Linia 38: se afiseaza textul "Enter " urmat de diferenta dintre variabila newSize si variabila size (ambele de tipul int) si textul " more float numbers:" ;
Liniile 39-41 contin o structura repetitiva for cu conditia ca variabila i=size de tipul int sa fie mai mica decat noua dimenisiune (newSize) declarata la linia 23 si apoi sa ia valori crescatoare, iar instructiunea acestei structuri fiind sa se citeasca array-ul declarat cu ajutorul functiei realloc de tipul float , cu i elemente ;
Linia 44: se afiseaza textul "Updated array:" 
Liniile 45-47 contin o structura repetitiva for cu conditia ca variabila i de tipul int sa ia valori incepand cu 1, sa fie mai mica decat newSize-ul declarat la linia 23 si apoi sa ia valori crescatoare, iar instructiunea acestei structuri fiind sa se afiseze array-ul declarat cu ajutorul functiei realloc de tip float , cu i elemente ;
Pe linia 48 nu se afiseaza nimic deoarece dupa std::cout<< urmeaza std::endl ce are rolul de a trece la urmatoarea linie ;
Linia 51: se elibereaza spatiul care a fost alocat pentru array-ul declarat cu ajutorul functiei realloc
Linia 53: returneaza valoarea 0;
*/
