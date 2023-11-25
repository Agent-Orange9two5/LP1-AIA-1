#include <iostream>

using namespace std;

int main()
{
    int a[100], n,i,j,temp;
    int lim_i, lim_s, gasit,x, mijloc;

    cout<<"n=";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }

    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    } //ordonez crescator

    for(i=0; i<n; i++)
    cout<<'\n'<<"a["<<i<<"]="<<a[i];

    cout<<'\n'<<"\nIntroduceti numarul de cautat: ";
    cin>>x;

    for(lim_i=0, lim_s=n-1, gasit=0; !gasit && lim_i<=lim_s;)
    {
        mijloc=(lim_i + lim_s)/2;
        if(a[mijloc]==x)
        gasit=1;
        else
        if(a[mijloc]<x)
        lim_i = mijloc+1; // caut in a 2-a jumatate
        else 
        lim_s=mijloc-1; // caut in prima jumatate

    }
    if(gasit)
    cout<<x<<"se gaseste pe pozitia"<<mijloc;
    else
    cout<<x<<"nu se afla in vector";

    return 0;
}
