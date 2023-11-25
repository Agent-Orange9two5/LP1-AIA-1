#include <iostream>
#include "problema3.cpp"
#include "problema1.cpp"
#include "problema2.cpp"

using namespace std;

int main ()
{
    int tip;
    cout<<"Alegeti tipul de problema: ";
    cin>> tip;

    if(tip==1)
        problema1;
    else if(tip==2)
        problema2;
    else if(tip==3)
        problema3;

    return 0;

}
