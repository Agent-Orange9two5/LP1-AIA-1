#include <iostream>
using namespace std;

void fib(int n, int x, int y)
{
    if(n)
    {
        cout<<x+y<<" ";
        fib(n-1, y, x+y);
    }
}

int main()
{
    int n, x, y;
    cin>>n;
    x=y=1;
    cout<<x<<" "<<y<<" ";
    fib(n-2, x, y);
    return 0;
}
