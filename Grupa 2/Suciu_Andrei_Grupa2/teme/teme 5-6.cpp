#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

int main() {
    int n;
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
    int suma = 0, produs_1 = 1, produs_2 = 1;
    cout << "Introduceti dimensiunea matricelor (maxim " << MAX_SIZE << "): ";
    cin >> n;
    
    n = (n > MAX_SIZE) ? MAX_SIZE : (n <= 0) ? 2 : n;
    cout << "Introduceti elementele matricei A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
            suma += A[i][j];
        }
    }
    cout << "Introduceti elementele matricei B:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
            suma += B[i][j];
        }
    }
    cout << "Maximele dintre elementele corespunzatoare din matrici:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << max(A[i][j], B[i][j]) << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                produs_1 *= A[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                produs_2 *= B[i][j];
            }
        }
    }
    cout << endl << "Suma celor doua matrice este: " << suma << endl;
    cout << "Produsul matricei A sub diagonala secundara este: " << produs_1 << endl;
    cout << "Produsul matricei B sub diagonala secundara este: " << produs_2 << endl;

    return 0;
}
