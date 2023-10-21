#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define SIZE 4

int matrixInput (int minVal, int maxVal) {   //  O functie care returneaza valori random intre un numar minim si un numar maxim

    int val = (rand() % (maxVal - minVal + 1)) + minVal;

    return val;
}

bool isPalindrome (int num) {       // functie care verifica daca un numar e palindrom sau nu

    int reverse = 0, intialNum = num;
    bool result = false;

    while(num){
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (intialNum == reverse) result = true;

    return result;
}

int main () {

    srand(time(0));

    int matrix[SIZE][SIZE], op, min, max, i, j, sum = 0, up[2], down[2], left[2], right[2], posU = 0, posD = 0, posR = 0, posL = 0;

    printf("Apasa 1 pentru a introduce nr de la tastatura si 2 pentru a fi introduse random\n");

    scanf("%d", &op);

    if (op == 1) {      //  blocul de cod in care are loc introducerea valorilor in matrice

        printf("Introdu valorile : \n");

        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {

                scanf("%d", &matrix[i][j]);

            }
        }

    }   else if (op == 2) {

        printf("da minimul si maximul care vor fi intervalele valorilor din matrice\n");
        scanf("%d %d", &min, &max);

        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {

                matrix[i][j] = matrixInput(min,max);

            }
        }

    }   else printf("Operator invalid\n");

    printf("\n");

    for (int i = 0; i < SIZE; i++) {        //  afisarea matricii
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonala principala : ");

    for (i = 0; i < SIZE; i++) {        //  afisarea diagonalei principale
        for (j = 0; j < SIZE; j++) {

            if (i == j) printf("%d ", matrix[i][j]);

        }
    }

    printf("\nDiagonala secundara in ordine inversa : ");

    for (i = SIZE; i >= 0; i--) {       //  afisarea diagonalei secundare in ordine inversa
        for (j = SIZE; j >= 0; j--) {
            if ((i + j) == (SIZE - 1))  printf("%d ", matrix[i][j]);
        }
    }

    printf("\nSuma elementelor aflate deasupra diagonalei secundare : ");

    for (i = 0; i < SIZE; i++) {        //  afisarea sumei elementelor de deasupra diagonalei secundare
        for (j = 0; j < SIZE; j++) {
            if ((i + j) < (SIZE - 1))   sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);

    printf("Numerele Palindrome de pe diagonala principala : ");

    for (i = 0; i < SIZE; i++) {        //  afisarea numerelor palindrome de pe diagonala principala
        for (j = 0; j < SIZE; j++) {

            if (i == j) {
                if (isPalindrome(matrix[i][j]) == true) printf("%d ", matrix[i][j]);
            }
        }
    }

    printf("\n");

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if ((i < j) && (i + j < SIZE - 1)) {
                up[posU++] = matrix[i][j];
            }
            else if ((i > j) && (i + j < SIZE - 1)) {
                left[posL++] = matrix[i][j];
            }
            else if ((i < j) && (i + j > SIZE - 1)) {
                right[posR++] = matrix[i][j];
            }
            else if ((i > j) && (i + j > SIZE - 1)) {
                down[posD++] = matrix[i][j];
            }
        }
    }

    printf("\nvectorul up : ");     //  afisarea vectorului din partea de sus dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", up[i]);
    }

    printf("\nvectorul right : ");      //  afisarea vectorului din dreapta dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", right[i]);
    }

    printf("\nvectorul down : ");       //  afisarea vectorului de jos dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", down[i]);
    }

    printf("\nvectorul left : ");       //  afisarea vectorului din stanga dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", left[i]);
    }

    printf("\n");

    return 0;
}
