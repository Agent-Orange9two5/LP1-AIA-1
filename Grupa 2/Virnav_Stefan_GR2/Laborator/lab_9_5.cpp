#include <iostream>
using namespace std;

void fib(int n,int a,int b)
{
    if(n==2)
        return;
    else
    {   cout<<a+b<<" ";
        return fib(n-1,b,a+b);
    }
}
int main()
{
 int n;
 cin>>n;
 cout<<"1"<<" 1 ";
 fib(n,1,1);
 return 0;
}
