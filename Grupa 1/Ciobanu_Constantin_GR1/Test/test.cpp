#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int matrixInput (int minVal, int maxVal) {   

    int val = (rand() % (maxVal - minVal + 1)) + minVal;

    return val;
}

int main() {

    int m, n;
    cout << "Dati numarul de linii" << endl;
    cin >> n;
    cout << "Dati numarul de coloane" << endl;
    cin >> m;

    int **matrix;

    matrix = new int *[n];

    cout << "Dati valorile matricei" << endl;

    for (int i = 0; i < n; i++) {
        matrix[i] = new int [m];
        for (int j = 0; j < m; j++) {
            //  cin >> matrix[i][j];
            matrix[i][j] = matrixInput(-500,500);
        }
    }

    ofstream f("MATRICE.txt");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            cout <<  " | " << matrix[i][j] << " ";
            if (i > j) {
                f << matrix[i][j] << " ";

            }

        }
        cout << endl;
    }

    f.close();

    return 0;
}
