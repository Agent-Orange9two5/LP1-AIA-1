#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,d;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;

    if (a)
    {
        d=b*b-4*a*c;
        if (d>=0)
        {
            cout<<"x1=";
            cout<<((-b+sqrt(d))/(2*a));
            cout<<" x2="<<((-b-sqrt(d))/(2*a));
        }
        else
            cout <<"x1 si x2 nu sunt reale";
    }
    else if (b)
        cout<<"x="<<(-c/b);
    else if(c==0)
        cout<<"infinitate de solutii";
    else
        cout<<" ecuatia nu are solutii";

    return 0;
}
