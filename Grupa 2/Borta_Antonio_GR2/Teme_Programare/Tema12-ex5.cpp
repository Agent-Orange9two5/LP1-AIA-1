#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream file("SiruriSortate.txt");
    int n, i, j;
    char c[100], a[100][100];
    cout << "Introduceti numarul de siruri: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        char cuvant[100];
        cin >> cuvant;
        strcpy(a[i], cuvant);
    }
    cout << endl;

    for( i = 0; i < n - 1; i++ )
        for( j = i + 1; j < n; j++)
        {
            if(strcmp(a[i], a[j]) > 0)
            {
                strcpy(c, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], c);
            }
        }
    for( i = 0; i < n; i++ )

        file << a[i] << ", ";


    file.close();

    return 0;
}
