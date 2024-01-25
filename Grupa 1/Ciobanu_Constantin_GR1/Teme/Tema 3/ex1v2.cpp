#include <iostream>
#include <cstdlib>
#define SIZE 10

using namespace std;

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
                cout << v[p] << " e divizibil si cu 5 si cu 11" << endl;

}

int main() {

    int arr[SIZE], arrStart, arrEnd, sum, op;

    cout << "Daca vrei sa pui numere de mana apasa pe 1, dava vrei sa fie date random apasa pe 2" << endl;
    cin >> op;

    if (op == 1) {

        cout << "Numerele date : " << endl;

        for (int n = 0; n < SIZE; n++) {
            scanf("%d", &arr[n]);
        }

    }   else if (op == 2) {

        cout << "Introdu doua numere care vor reprezenta intervalul valorilor din  vector" << endl;
        cin >> arrStart;
        cin >> arrEnd;

        for (int i = 0; i < 10; i++) {

        arr[i] = arrayInput(arrStart, arrEnd);
        //printf("%d : %d\n", i, arr[i]);     //  in caz ca vrei sa afisezi vectorul

    }

    }   else {
        cout << "Optiune invalida" << endl;
        return 0;
    }

    sortArray(arr);

    // for (int j = 0; j < 10; j++) {
    //     printf("%d : %d\n", j, arr[j]);  //  functie de printare vector sortat
    // }

    cout << "Numarul maxim din vector este : " << arr[9] << endl;

    sum = sumCalc(arr);
    cout << "Suma tuturor numerelor din vector este : " << sum << endl;

    divideFunc(arr);

    return 0;
}
