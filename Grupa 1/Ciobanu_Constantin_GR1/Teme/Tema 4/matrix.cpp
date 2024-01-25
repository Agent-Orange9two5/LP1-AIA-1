#include <iostream>
#include <cstdlib>
#define SIZE 4

using namespace std;

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

    int matrix[SIZE][SIZE], op, min, max, i, j, sum = 0, up[2], down[2], left[2], right[2], posU = 0, posD = 0, posL = 0, posR = 0;

    
    cout << "Apasa 1 pentru a introduce nr de la tastatura si 2 pentru a fi introduse random" << endl;

    cin >> op;

    if (op == 1) {      //  blocul de cod in care are loc introducerea valorilor in matrice

        printf("Introdu valorile : \n");

        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {

                cin >> matrix[i][j];

            }
        }

    }   else if (op == 2) {

        cout << "da minimul si maximul care vor fi intervalele valorilor din matrice" << endl;
        cin >> min >> max;

        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {

                matrix[i][j] = matrixInput(min,max);

            }
        }

    }   else cout << "Operator invalid" << endl;

    cout << endl;

    for (int i = 0; i < SIZE; i++) {        //  afisarea matricii
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Diagonala principala : "; 

    for (i = 0; i < SIZE; i++) {        //  afisarea diagonalei principale
        for (j = 0; j < SIZE; j++) {

            if (i == j) cout << matrix[i][j] << " ";

        }
    }

    cout << endl << "Diagonala secundara in ordine inversa : ";

    for (i = SIZE; i >= 0; i--) {       //  afisarea diagonalei secundare in ordine inversa
        for (j = SIZE; j >= 0; j--) {
            if ((i + j) == (SIZE - 1))  printf("%d ", matrix[i][j]);
        }
    }

    cout << endl << "Suma elementelor aflate deasupra diagonalei secundare : ";

    for (i = 0; i < SIZE; i++) {        //  afisarea sumei elementelor de deasupra diagonalei secundare
        for (j = 0; j < SIZE; j++) {
            if ((i + j) < (SIZE - 1))   sum += matrix[i][j];
        }
    }

    cout << sum << endl;

    cout << "Numerele Palindrome de pe diagonala principala : ";

    for (i = 0; i < SIZE; i++) {        //  afisarea numerelor palindrome de pe diagonala principala
        for (j = 0; j < SIZE; j++) {

            if (i == j) {
                if (isPalindrome(matrix[i][j]) == true) cout << matrix[i][j] << " ";
            }
        }
    }

    cout << endl;

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

    cout << endl << "vectorul up : ";   //  afisarea vectorului din partea de sus dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", up[i]);
    }

    cout << endl << "vectorul right : ";     //  afisarea vectorului din dreapta dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", right[i]);
    }

    cout << endl << "vectorul down : ";      //  afisarea vectorului de jos dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", down[i]);
    }

    cout << endl << "vectorul left : ";      //  afisarea vectorului din stanga dintre diagonale
    for (i = 0; i < 2; i++) {
        printf("%d ", left[i]);
    }

    printf("\n");

    return 0;
}
