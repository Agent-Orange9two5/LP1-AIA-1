#include <iostream>

using namespace std;

int main() 
{
    unsigned nr = 0;
    long x, x_init;
    cout<<"Introduceti un numar natural: ";
    cin>> x;
    x_init = x;

if(x)
{
    while(x)
    {
        x/=10; nr ++;
    }
    cout<<"Numarul natural" << x_init << "are" << nr << "cifre.";
}
else
cout<<"Numarul natural 0 are o cifra.";
return 0;
}
