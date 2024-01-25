/* 
Se citeste un vector de 10 elemente
Se afiseaza : maximul din vector, suma tuturor numerelor din vector, numerele divizibile atat cu 5 cat si cu 11.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define SIZE 10

int arrayInput (int minVal, int maxVal) {   //  O functie care returneaza valori random intre un numar minim si un numar maxim

    int val = (rand() % (maxVal - minVal + 1)) + minVal;

    return val;
}

void swap(int *a, int *b) {     // functia care schimba doua elemente intre ele folosint o variabila temporara

    int temp = *a;
    *a = *b;
    *b = temp;

}

void sortArray(int array[]) {   //  functia de sortare prin bubble sort (Aceeasi ca la tema trecuta)

    int i, k;   //  variabilele folosite pentru buclele for
    bool swapped;   //  variabila care e folosita pentru a vedea daca a avut loc schimbarea intre 2 termeni

    for (i = 0; i < SIZE-1; i++) {

        swapped = false;

        for(k = 0; k < SIZE - 1 - i; k++) {

            if(array[k] > array[k+1]) {
                swap(&array[k],&array[k+1]);
                swapped = true;
            }

        }

        if (swapped == false) {     //  daca nu a avut loc schimbarea , atunci se iese din bucla
            break;
        }

    }

}

int sumCalc(int vector[]) {     // functie care calculeaza suma termenilor vectorului

    int s = 0;
    for (int idx = 0; idx < SIZE; idx++) 
        s += vector[idx];
    
    return s;
}

void divideFunc(int v[]) {      // functie care verifica si afiseaza care numere sunt divizibile cu 5 si 11

    for (int p = 0; p < SIZE; p++) 
        if ((v[p] % 5 == 0) && (v[p] % 11 == 0))
            if (v[p] != v[p+1])
                printf("%d este divizibil si cu 5 si cu 11\n", v[p]);

}

int main() {

    srand(time(0));     // apelam functia pentru a ne ajuta la introducerea numerelor aleatorii ale vectorului

    int arr[SIZE], arrStart, arrEnd, sum, op;

    printf("Daca vrei sa pui numere de mana apasa 1, daca vrei sa fie puse aleator apasa 2\n");
    scanf("%d", &op);

    if (op == 1) {

        printf("Numerele date : \n");

        for (int n = 0; n < SIZE; n++) {
            scanf("%d", &arr[n]);
        }

    }   else if (op == 2) {

        printf("Introdu doua numere care vor reprezenta intervalul valorilor din  vector\n");
        scanf("%d", &arrStart);
        scanf("%d", &arrEnd);

        for (int i = 0; i < 10; i++) {

        arr[i] = arrayInput(arrStart, arrEnd);
        //printf("%d : %d\n", i, arr[i]);     //  in caz ca vrei sa afisezi vectorul

    }   

    }   else {
        printf("Optiune invalida\n");
        return 0;
    }

    sortArray(arr);

    // for (int j = 0; j < 10; j++) {
    //     printf("%d : %d\n", j, arr[j]);  //  functie de printare vector sortat
    // }
    
    printf("numarul maxim din vector este : %d\n", arr[9]);

    sum = sumCalc(arr);
    printf("Suma tuturor numerelor din vector este : %d\n", sum);

    divideFunc(arr);

    return 0;
}
