#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("SumeDiagonale.txt");
    int a[100][100], i, j, n, sdp = 0, sds = 0;
    cout << "Introduceti numarul de linii si coloane: ";
    cin >> n;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
    {    cin >> a[i][j];
        if(i == j)
        sdp += a[i][j];
        if(i + j == n - 1)
        sds += a[i][j];
    }
    cout << "Suma elementelor diagnalei principale este: " << sdp << endl;
    cout << "Suma elementelor diagnalei secundare este: " << sds;

    file << "Suma elementelor diagnalei principale: " << sdp <<endl;
    file << "Suma elementelor diagnalei secundare: " << sds;

    file.close();

    return 0;
}
