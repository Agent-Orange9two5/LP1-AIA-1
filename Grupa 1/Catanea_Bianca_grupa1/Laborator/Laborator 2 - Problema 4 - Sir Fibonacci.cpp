#include <iostream>

using namespace std;

int main()
{
     // 4.	Scrieti un program care realizeaza generarea a sirului lui Fibonacci.
  
     long f0=1, f1=1;
     long fc;
     int i=1,n;
     cout << " Pentru cate elemente se genereaza sirul Fibonacci? ";
     cin>>n;
     cout << "Sirul Fibonacci este: "<< f0 << " " << f1 << " ";
     while (i<=n)
     {
         fc=f0+f1;
         f0=f1;
         f1=fc;
         i++;
     cout << fc << " ";
     }
    return 0;
}
