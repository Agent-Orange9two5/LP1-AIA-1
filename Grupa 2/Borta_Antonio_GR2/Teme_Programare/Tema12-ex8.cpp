#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("ProdusDiagonalaSecundara.txt");
    int a[100][100], i, j, n, pds = 1;
    cout << "Introduceti numarul de linii si coloane: ";
    cin >> n;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
    {    cin >> a[i][j];
        if(i + j == n - 1)
        pds *= a[i][j];
    }
    cout << "Produsul elementelor diagonalei secundare este: " << pds << endl;

    file << "Produsul elementelor diagonalei secundare este: " << pds <<endl;

    file.close();

    return 0;
}
