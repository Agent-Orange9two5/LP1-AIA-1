
//se citeste o matrice de dimensiune 4

//sa se afiseze: 

//elementele de pe diagonala principala, elementele diag secundara in ordine inversa

//suma elementelor aflate deasupra diagonalei secundare, elementele palindrome de pe diag principala

//sa se stocheze in 4 vectori toate triunghiurile dintre cele 2 diagonale


#include <iostream>

using namespace std;

void triunghiuri(int a[2]) {
    int i;

    for(i = 0; i < 2; i++)
        cout << a[i] << " ";
    
    cout << endl;
}

int main() {
    int a[4][4], i, j, suma = 0, cop, m, palindrom[10], p = 0;

    int nord[10], n = 0, est[10], e = 0, sud[10], s = 0, vest[10], v = 0;

    cout << "Introduceti elementele matricei patratice: " << endl;

    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            cin >> a[i][j];

    cout << "Elementele de pe diagonala principala: ";

    for(i = 0; i < 4; i++)
        cout << a[i][i] << " ";

    cout << endl;

    cout << "Elementele diagonalei secundare in ordinde inversa: ";

    for(i = 3; i >= 0; i--)
        cout << a[i][4 - i - 1] << " ";
    
    cout << endl;

    cout << "Suma elementelor deasupra diagonalei secundare: ";

    for(i = 0; i < 4; i++) 
        for(j = 0; j < 4; j++) {

            cop = a[i][j];

            m = 0;

            if(i + j < 3)
                suma = suma + a[i][j];

            if(a[i][j] > 9) {
                while(cop){
                    m = m * 10 + cop % 10;

                    cop = cop / 10;
                }

                if(m == a[i][j])
                    palindrom[p++] = m;
            }
        }

    cout << suma << endl;

    cout << "Elementele palindrome de pe diagonala principala: ";

    for(i = 0; i < p; i++)
        cout << palindrom[i] << " ";

    cout << endl;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++)
        {
            if(i < j && i + j < 3)
                nord[n++] = a[i][j];

            if(i < j && i + j > 3)
                est[e++] = a[i][j];

            if(i > j && i + j > 3)
                sud[s++] = a[i][j];

            if(i > j && i + j < 3)
                vest[v++] = a[i][j];
        }
    }

    cout << "Triunghiurile dintre diagonale sunt: " << endl;

    cout << "nord: "; triunghiuri(nord); 

    cout << "est: "; triunghiuri(est); 

    cout << "sud: "; triunghiuri(sud); 

    cout << "vest: "; triunghiuri(vest);

    return 0;
}
