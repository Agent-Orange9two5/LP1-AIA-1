#include <iostream>

using namespace std;
int fact_interativ(int n) {
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact *=i;
    }
    return fact;
}
int fact_recursiv(int n)
{
    //Cazul de baza pt recussivitaate  0! este 1
    if(n==0)
        return 1;
    else //formula recursiva n! = n*(n-1)!
    return n * fact_recursiv(n-1);
}
int main()
{
    int n;
    cout << "Dati n: ";
    cin>>n;
    cout<<"N! cu metoda iterativa este ="<< fact_interativ(n)<<endl;
    cout<<"N! cu metoda recursiva este ="<< fact_recursiv(n)<<endl;
    return 0;
}
