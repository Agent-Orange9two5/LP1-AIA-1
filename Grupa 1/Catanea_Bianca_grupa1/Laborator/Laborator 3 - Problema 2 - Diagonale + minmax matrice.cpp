#include <iostream>

using namespace std;

int main()
{
    /* 2.	Se citeste de la tastatura un tablou bidimensional cu n linii si n coloane (n<=100). Sa se afiseze matricea si sa se calculeze urmatoarele:
	         valorile de pe diagonala principala si diagonala secundara, minimul si maximul din matrice */

    int a[100][100],i,j,n,min,max;
    cout << "Introduceti numarul de linii si coloane a matricii patratice: ";
    cin>>n;
    cout << "Introduceti valorile corespunzatoare fiecarei linii/coloane: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    cout << "Elementele de pe diagonala principala a matricii sunt : ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j) cout << a[i][j]<< " ";
    cout << endl;

    cout << "Elementele de pe diagonala secundara a matricii sunt : ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i+j==n-1) cout <<a[i][j]<< " ";
    cout << endl;

    min=max=a[0][0];
    cout << "Minimul si maximul din matrice sunt : " ;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j] < min )
                min = a[i][j];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j] > max )
                max = a[i][j];

    cout << min << " " << "si" <<" " << max << " ";
    return 0;
}
