#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, m, i, j, c, **a;
    ofstream file("MatriceInmultita.txt");
    cout << "Introduceti numarul de linii si numarul de coloane: ";
    cin >> n >> m;
    cout << "Introduceti constanta cu care va fii inmultita matricea: ";
    cin >> c;
    a = (int**)malloc(n*sizeof(int *));
    if (a == nullptr)
    {
        cout << "Eroare la alocarea memoriei!" << endl;
        return 1;
    }
    a[0] = (int *)malloc(n * m * sizeof(int));
    if (a[0] == nullptr) {
        cout << "Eroare la alocarea memoriei!" << endl;
        free(a);
        return 1;
    }
    for (i = 1; i < n; i++)
    {
        a[i] = a[0] + i * m;
    }
    for(i = 0; i < n; ++i)
        for(j = 0; j < n; j++)
    {
        cin >> a[i][j];
        a[i][j] *= c;
    }
    for(i = 0; i < n; ++i)
    {  for(j = 0; j < n; j++)
        {
            file << a[i][j] << " ";
        }
        file << endl;
    }
    free(a[0]);
    free(a);
    return 0;
}
