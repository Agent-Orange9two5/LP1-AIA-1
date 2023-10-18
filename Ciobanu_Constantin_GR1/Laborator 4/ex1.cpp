#include <iostream>
#define SIZE 10

using namespace std;

int main() {

    int v[10], sumPar = 0, sumImpar = 0, i, j;

    for (i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            sumPar += v[i];
        }   else {
            sumImpar += v[i];
        }
    }

    for (j = SIZE; j > 0; j--) {
        cout << v[j] << endl;
    }


    return 0;
}
