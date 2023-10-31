#include <iostream>

using namespace std;

int main()
{
   /* 2. Scrieti un program care cere utilizatorului un numar natural intreg si si va determina numarul de cifre al acestuia. */
  
   int a,ok=0;
   cout << " Introduceti un numar intreg: ";
   cin >> a ;
   while(a > 0)
   {
       a /=10;
       ok++;
   }
   cout << "Numarul are " << ok << " cifre.";
    return 0;
}
