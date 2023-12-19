#include <iostream>
#include <fstream>

using namespace std;

struct pereche
{
    int x,y;
};

int main()
{
    pereche a[100];
    int s[100], i, j, n, c, k;
    ofstream file("PerechiSortate.txt");
    cout << "Introduceti numarul de perechi: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cout << "Citim x: ";
        cin >> a[i].x;
        cout << "Citim y: ";
        cin >> a[i].y;
        s[i]=a[i].x+a[i].y;
    }
    for( i = 0; i < n - 1; i++ )
        {
        for( j = i + 1; j < n; j++ )
            {
            if( s[i] > s[j] )
               {
                c = a[i].x;
                a[i].x = a[j].x;
                a[j].x = c;
                k = a[i].y;
                a[i].y = a[j].y;
                a[j].y = k;
               }

             }

        }

    file << "Perechile sortate în ordine crescătoare a sumei sunt : " << endl;
    for( i = 0; i < n; i++ )
    {
      file << a[i].x << "; " << a[i].y <<endl;
    }

    file.close();

    return 0;
}
