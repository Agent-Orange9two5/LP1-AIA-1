#include <iostream>
#include <fstream>

using namespace std;

//declararea fisierului
fstream f("SumaDiag.txt");

int main()
{   
    int n, a[101][101], s = 0;
    cout << "Introduceti numarul de linii si de coloane a matricei patratice: ";
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {   //citirea matricei
            cin >> a[i][j];
            //verificarea daca elementele apartin diagonalei principale si adaugarea lor in suma
            if(i == j)
                s += a[i][j];
        }
    //afisarea sumei in fisier
    f << s;
    return 0;
}
}
