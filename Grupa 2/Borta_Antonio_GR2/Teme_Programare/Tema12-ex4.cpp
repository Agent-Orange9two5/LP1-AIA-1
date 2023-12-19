#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#define MAX_NUM 100

using namespace std;

int main()
{
    ofstream file("NumereSortate.txt");
    int n, i, j, c, a[100];
    cout << "Introduceti numarul de elemente: ";
    cin >> n;
    srand(time(NULL));
    for(i = 0; i < n; i++)
    {
        a[i] = rand()%MAX_NUM;
        cout << a[i] << " ";
    }
    cout << endl;

    for( i = 0; i < n - 1; i++ )
        for( j = i + 1; j < n; j++)
        {
            if( a[i] < a[j] )
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    for( i = 0; i < n; i++ )

        file << a[i] << ", ";


    file.close();

    return 0;
}
