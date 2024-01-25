/*se citesc 4 numere naturale de la tastatura.
Se cer: 
aflarea maximului si minimului dintre cele 4 numere 
calcularea sumei si diferentei dintre minim si maxim 
suma tuturor cifrelor celor 4 numere
radacina patrata a numerelor aflate intre minimul si maximul gasite.
toate rezultate obtinute se vor afisa cu zecimale.*/


#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void swap(int *a, int *b) {     // functia care schimba doua elemente intre ele folosint o variabila temporara

    int temp = *a;
    *a = *b;
    *b = temp;

}

void sortArray(int array[]) {   //  functia de sortare prin bubble sort

    int i, k;   //  variabilele folosite pentru buclele for
    bool swapped;   //  variabila care e folosita pentru a vedea daca a avut loc schimbarea intre 2 termeni

    for (i = 0; i < 3; i++) {

        swapped = false;

        for(k = 0; k < 3 - i; k++) {

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

void sqrtList (int minN, int maxN) {      //    functie de afisare a radacinilor intre minim si maxim

    double sq;

    for (int i = minN; i < maxN+1; i++) {
        sq = sqrt(i);
        printf("%lf\n", sq);
    }

}

int main() {

    int arr[4];     //  din cerinte stim ca avem doar 4 elemente introduse de la tastatura

    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);       //  citim   cele 4 numere de la tastatura
    }

    sortArray(arr);     //  sortam array-ul

    // for (int j = 0; j < 4; j++) {
    //     printf("%d : %d\n", j,arr[j]);       // Functie de printare array
    // }

    double min = arr[0], max = arr[3];
    double twoSum = min + max;
    double diff = max - min;
    double charSum = 0;    //  variabila pentru suma cifrelor tuturor numerelor

    printf("Minimul numerelor este : %2lf\n", min);
    printf("Maximul numerelor este : %2lf\n", max);
    printf("Suma dintre minim si maxim este : %lf\n", twoSum);
    printf("Diferenta dintre minim si maxim este : %lf\n", diff);

    for (int j = 0; j < 4; j++) {

        int tempVal = arr[j];

        while(tempVal != 0) {
            charSum += (tempVal % 10);   
            tempVal = tempVal / 10;
        }

    }
    printf("suma cifrelor : %lf\n", charSum);

    sqrtList(min,max);

    return 0;

}
