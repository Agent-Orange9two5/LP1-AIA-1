#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fp("SumaDiag.txt");
    int a[101][101], i, j, n, m, sdiagp = 0, sdiags = 0;
    //introduceti numarul de linii si coloane
    cin >> n >> m;
    //citirea matricei
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {    cin >> a[i][j];
            //verificarea elem pt a vedea daca sunt pe diag principala si adaugarea lor in suma
            if(i == j)
            sdiagp += a[i][j];
            //verificarea elem de pe diag secundara si adaugarea lor in suma 
            if(i + j == n - 1)
            sdiags += a[i][j];
            }
    //afisarea in fisier a sumelor
    fp << sdiagp << endl;
    fp << sdiags;
    return 0;
}
