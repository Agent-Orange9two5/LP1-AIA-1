#include <iostream>
#define SIZE 10

using namespace std;

int main() {

    int v[10], sumEven = 0, sumOdd = 0;

    cout << "Dati valorile vectorului" << endl;

    for (int x = 0; x < SIZE; x++) {
        cin >> v[x];
    }

    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            sumEven += v[i];
        }   else {
            sumOdd += v[i];
        }
    }

    cout << "suma para : " << sumEven << endl;
    cout << "suma impara : " << sumOdd << endl;

    for (int j = SIZE - 1; j >= 0; j--) {
        cout << j << " : " << v[j] << endl;
    }

    return 0;
}
