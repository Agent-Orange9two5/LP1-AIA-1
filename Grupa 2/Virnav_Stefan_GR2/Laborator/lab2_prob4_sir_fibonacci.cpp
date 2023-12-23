#include <iostream>

using namespace std;
void fib(int n)
{
  int i=3,a=1,b=1,c;
  while(i<=n)
  {
    c=a+b;
    a=b;
    b=c;
    i++;
    cout<<c<<" ";
  }
}
int main()
{
     // 4.	Scrieti un program care realizeaza generarea a sirului lui Fi
     int n;
     cout << " Pentru cate elemente se genereaza sirul Fibonacci? ";
     cin>>n;
     cout << "Sirul Fibonacci: "<< 1 << " " << 1 << " ";
     fib(n);
     
    return 0;
}

