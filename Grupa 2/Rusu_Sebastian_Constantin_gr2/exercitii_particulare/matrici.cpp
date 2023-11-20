#include <iostream>

using namespace std;

int main()
{
    int a[100][100],b[100][100], i, j, n, min, max;
    cout << "Introduceti numarul de linii si coloane ale matricei: ";
    cin >> n;
    cout << "Introduceti numerele din matrice: ";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    min = a[0][0];
    max = a[0][0];
    cout << "Matricea introdusa este: " << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << a[i][j] << " ";
            if (min > a[i][j]) {
                min = a[i][j];
            }
            if (max < a[i][j]) {
                max = a[i][j];
            }
        }
        cout << endl;
    }
    cout << "Transpusa este: " << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout<<b[i][j]<<" ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] % 3 == 0) {
                cout << a[i][j] <<" este divizor a lui 3"<<endl;
            }
            if (a[i][j] % 4 == 0) {
                cout << a[i][j] << " este divizor a lui 4" << endl;
            }
            if (a[i][j] % 5 == 0) {
                cout << a[i][j] << " este divizor a lui 5" << endl;
            }
        }
    }
        cout << "Cel mai mic numar din matrice este: " << min << endl;
        cout << "Cel mai mare numar din matrice este: " << max << endl;
        return 0;
}
