#include <iostream>

using namespace std;
int fact_iterativ(int n)
{
    int fact=1;
    for (int i= 1;i<=n;i++)
        fact *= i;
    return fact;
}
int fact_recursiv(int n)
{
    if(n==0)
        return 1;
    else
        return n * fact_iterativ(n-1);
}
int main()
{
    int n;
    cout<<"Dati N:";
    cin>>n;
    cout<<"N! cu metoda iterativa este egal cu:"<<fact_iterativ(n)<<endl;
    cout<<"N! cu metoda recursiva este egal cu:"<<fact_recursiv(n)<<endl;
    return 0;
}
