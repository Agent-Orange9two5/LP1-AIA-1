#include <iostream>
using namespace std;


int main()
{
   /* 2. Scrieti un program care cere utilizatorului un numar natural intreg si si va determina numarul de cifre al acestuia. */
  
   int ok=0,b;
   cout << " Introduceti un numar intreg: ";
   cin >> b ;
   while(b>0)
   {
       b /=10;
       ++ok;
   }
   cout << "Numarul are " << ok << " cifre.";
    return 0;
}

