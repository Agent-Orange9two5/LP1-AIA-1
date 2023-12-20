#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int f0=1,f1=1;
    long fc;
    int i=1,n;
    cout<<"Nr de termeni din sirul fiboncci:";cin>>n;
    cout<<f0;
    cout<<f1;
    while (i<=n)
    {
        fc=f0+f1;
        f0=f1;
        f1=fc;
        i++;
        cout<<" "<<fc;
    }

}
