#include <iostream>

using namespace std;

int main()
{
   int v[10], i, suma=0 ;
   cout << " Numerele pare sunt: " ;
   for ( i = 0 ; i < 10 ; i++ )
     {
         v[i] = i+1;

            if ( v[i] % 2 == 0)
         cout << " " << v[i] ;
       }
       cout << endl;
   for ( i = 0 ; i < 10; i++ )
        if ( v[i] % 2 == 1)
            suma+=v[i];
   cout << "Suma numerelor impare este: " << " " << suma << endl;

    cout << " Vectorul inversat este: " << " ";
   for ( i = 9 ; i >= 0; i--)
    cout << v[i] << " ";


    return 0;
}
