#include <iostream>

using namespace std;
int fact_interativ(int n){

int fact=1;
for(int i=1;i<=n;i++)
{
fact*=i;}
return fact;
}
int fact_recursiv(int n){
//cazul de baza pentru recursivitate:0! este 1
if(n==0)
    return 1;
    else
    return n*fact_recursiv(n-1);
}
int main()
{
    int n;
    cout<<"dati n:";
    cin>>n;
    //afisarea rezulatului cu metoda iterativa
    cout<<"n! cu metoda iterativa este egal cu:"<<fact_interativ(n);
    cout<<endl;
    //afisarea rezulatului cu metoda recursiva
    cout<<"n! cu metoda recursiva este egal cu:"<<fact_recursiv(n);

    return 0;
}
