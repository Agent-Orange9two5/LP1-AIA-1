//ex1-alocare dinamica
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{    float *a, x;
    int n,i;
    printf("Cate numere? ");
    scanf("%d", &n);
    a=(float*) malloc(n*sizeof(float));
    if(!a) {
        printf("Nu pot aloca memorie.\n");   }
for(i= 0 ; i < n; i++) {
 printf("a[%d] : ", i) ;
 scanf("%f", &a[i]); }
printf("x:");
scanf("%f", &x);
 printf("Numerele din inte4rvalul (%.2f, %2f) sunt: ", x-5 , x+5);
 for(i=0; i<n; i++) {
 if(fabs(x-a[i])<5)
    printf("%.2f ", a[i]);
 free(a); }
    return 0;}

//ex2
#include <stdio.h>
#include <stdlib.h>
int functie1()
{static int x= 0;
x+= 10;
return x;}
int functie2()
{    int x = 0;
    x+= 10;
    return x;
}
void main()
{    int n = 10;
    printf("Functie cu variabila static: ");
    for(int i=0; i < n; i++)
    {        printf("%d ", functie1());    }
    printf("\nFunctie cu variabila non-static: ");
    for(int i=0; i<n; i++)  {        printf("%d ", functie2());    }  }

//ex3
#include <iostream>
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
        return 1;    }
    std::cout << "Memory allocated using malloc." << std::endl;
    std::cout << "Enter " << size << " strings:" << std::endl;
    for (int i = 0; i <= size; ++i) {
        const int bufferSize = 100;
        arrMalloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrMalloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;
            for (int j = 0; j < i; ++j) {
                free(arrMalloc[j]);           }
            free(arrMalloc);
            return 1;        }
        std::cin.getline(arrMalloc[i], bufferSize);   }
    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;
    std::cin.ignore();
    char **arrRealloc = (char **)realloc(arrMalloc, newSize * sizeof(char *));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        for (int i = 1; i < size; ++i) {
            free(arrMalloc[i]);        }
        free(arrMalloc);
        return 1;    }
    std::cout << "Memory reallocated using realloc." << std::endl;
    std::cout << "Enter " << newSize - size << " more strings:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        const int bufferSize = 100;
        arrRealloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrRealloc[i] == nullptr) {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;
            for (int j = 0; j < i; ++j) {
                free(arrRealloc[j]);            }
            free(arrRealloc);
            return 1;        }
        std::cin.getline(arrRealloc[i] , bufferSize);   }
  std::cout << "Updated array of strings:" << std::endl;
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << std::endl;    }
    for (int i = 0; i <= newSize; ++i) {
        free(arrRealloc[i]);    }
    free(arrRealloc);
    return 0;  }

/* Linia 1: este inclusa libraria <iostream> esentiala pentru C++
Linia 2: este inclusa libraria <cstdlib> care face posibila utilizarea functiilor pentru alocare dinamica
Linia 3: este inclusa libraria <cstring> care face posibila utilizarea sirurilor de caractere
Liniile 6-8: este declarat marimea unui array de tipul int, se afiseaza de la tastatura dimensiunea initiala a array-ului impreuna cu textul "Enter the initial size of the array: ", dupa care se citeste marimea acestuia
Linia 9: contine functia std::cin.ignore() ce are rolul de a elimina caracterele nedorite
Linia 12: este alocata o dimensiune a array-ului de tipul char cu ajutorul functiei malloc;
Liniile 13-16 contin o functie if prin care , daca daca alocarea facuta in linia 12 este egala cu 0, se afiseaza textul "Memory allocation failed using malloc!", dupa care se returneaza valoarea 1;
Linia 18: "Memory allocated using malloc." ;
Linia 21: se afiseaza textul "Enter " urmat de variabila "size" de tipul int declarata in linia 6 si textul " strings:" ; 
Liniile 22-35 contin doua structuri repetitive for si o functie if
De la linia 22 incepe structura repetitiva for cu conditia ca variabila i de tipul int sa ia valori incepand cu 0, sa fie mai mica sau egala cu marimea (size) declarata la linia 6, iar apoi sa ia valori crescatoare , intstructiunile fiind ca variabila bufferSize de tipul const int sa fie egala cu 100 si alocarea marimii array-ul declarat cu ajutorul functiei malloc de tipul char, cu i elemente;
De la linia 25 incepe functia if (inclusa in structura repetitiva de la linia 22) , daca alocarea facuta la linia 24 este egala cu 0, afiseaza textul "Memory allocation failed for string " urmat de variabila i si textul " using malloc!" ;
De la linia 28 incepe cea de-a doua structura repetitiva for (inclusa in functia if , care deci e subordonata structurii repetitive de la linia 22) cu conditia ca variabila j (care reprezinta numarul de coloane) sa ia valori incepand cu 0, sa fie mai mica decat i (numarul de linii) si sa ia valori crescatoare, iar ca instructiuni avand eliberarea spatiului alocat pentru array-ul care a fost declarat cu ajutorul functiei malloc,
La linia 32 se revine la functia if in care se returneaza valoarea 1;
Linia 34: se revine la prima structura repetitiva si cu ajutorul careia se citesc dimensiunea array-ului declarat cu ajutorul functiei malloc si buffersize;
Linia 37: se declara in int o noua dimensiune (adica newsize)
Linia 38: se afiseaza textul "Enter the new size for reallocation: " 
Linia 39: se citeste newsize-ul declarat la linia 37
Linia 40: asemenea liniei 9, contine functia std::cin.ignore() ce are rolul de a elimina caracterele nedorite
Linia 43: este alocata o noua dimensiune a array-ului de tipul char cu ajutorul functiei realloc;
Liniile 44-52 contin o functie if si o structura repetitiva for
De la linia 44 incepe functia if prin care daca alocarea de tipul char facuta la linia 43 este egala cu 0, se afiseaza textul "Memory reallocation failed using realloc!"
De la linia 47 incepe structura repetitiva for cu conditia ca variabila i de tipul int sa ia valori incepand cu 1, sa fie mai mica decat marimea (size) declarata la linia 6,  iar apoi sa ia valori crescatoare, instructiunea fiind eliberarea spatiului alocat pentru array-ul care a fost declarat cu ajutorul functiei malloc si care contine numarul de linii (i)
La linia 50 se revine la structura repetitiva for si se elibereaza spatiul alocat pentru array-ul care a fost declarat cu ajutorul functiei malloc, iar la linia 51 se returneaza valoarea 1;
Linia 54: se afiseaza textul "Memory reallocated using realloc."
Linia 56: se afiseaza textul "Enter" urmat de diferenta dintre variabila newSize si variabila size (ambele de tipul int) si textul " more strings:"
Liniile 57-70 contin doua structuri repetitive for si o functie if
De la linia 57 incepe structura repetitiva for cu conditia ca variabila i de tipul int sa ia valoarea variabilei size, sa fie mai mica decat variabila newSize, iar apoi sa ia valori crescatoare, instructiunile fiind ca variabila bufferSize de tipul const int sa fie egala cu 100 si alocarea marimii array-ului declarat cu ajutorul functiei realloc de tipul char, cu i elemente;
De la linia 60 incepe functia if (inclusa in structura repetitiva de la linia 57) care , daca alocarea facuta la linia 59 este egala cu 0, afiseaza textul "Memory allocation failed for string " urmat de variabila i si textul " using malloc!" ;
De linia 63 se incepe structura repetitiva for (inclusa in functia if , deci si in prima structura repetitiva de la linia 57) 
*/







