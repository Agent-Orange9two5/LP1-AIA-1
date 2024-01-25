#include <iostream>
#include <new>

using namespace std;

int main()
{
    int i,j;
    int linii = 3;
    int coloane = 4;

    int** matrice = new (nothrow) int*[linii];
    for(i=0;i<linii;i++)
    {
        matrice[i] = new int[coloane];
    }

    for(i=0;i<linii;i++)
        for(j=0;j<coloane;j++)
            cin>>matrice[i][j];

        for(i=0;i<linii;i++){
        for(j=0;j<coloane;j++)
            cout<<matrice[i][j]<<" ";
            cout<<endl;
        }
        delete[] matrice;
        return 0;
}
