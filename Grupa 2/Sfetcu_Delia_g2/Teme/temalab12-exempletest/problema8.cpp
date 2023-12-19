#include <iostream>
#include <fstream>

using namespace std;

//declararea fisierului
fstream f("ProdusDiagonalaSecundara.txt");

int main()
{   
    int n, a[100][100], p = 1;
    cout << "Introduceti numarul de linii si de coloane: ";
    cin >> n;
    //citirea matricei
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            //verificarea elementelor de pe diag secundara si adaugarea lor la produs
            if(i + j == n - 1)
                p *= a[i][j];
        }
        //afisarea produsului in fisier
        f << p;

    return 0;
}
