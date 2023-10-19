//se citeste o matrice patratica de 4/4 sa se afiseze
//elem de pe diag principala
//de sub diag secundara
//suma tuturor numerelor de 3 cifre din matrice

#include <iostream>
using namespace std;
int main()
{
    int a[5][5], s = 0, n;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        cin >> a[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
    {
        if(i == j)
            cout << a[i][j] << " ";
        if(i + j > n - 1)
            cout << a[i][j] << " ";
        if(a[i][j] > 99)
            s = s + a[i][j];
    }
    cout << endl << s;
}
