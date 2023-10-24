#include <iostream>

using namespace std;

int main()
{
    int i, j, n, a[20][20], b[20][20];


    cout<<"Numarul de linii / coloane: ";
    cin>>n;

     for (i=0; i<n; i++)
        for (j=0; j<n; j++)
         {
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
         }

    for (i=0; i<n; i++)
    {
        cout<<endl;
        for (j=0; j<n; j++)
            cout<<a[i][j]<< " ";
    }

    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
         {
             b[i][j] = a[j][i];
         }
    cout<<endl;
    for (i=0; i<n; i++)
    {
        cout<<endl;
        for (j=0; j<n; j++)
            cout<<b[i][j]<< " ";
    }

    return 0;
}
