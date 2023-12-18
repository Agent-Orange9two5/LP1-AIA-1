#include<iostream>
using namespace std;

int *citeste_sir(int *);
int min(int,int);
int max(int,int);
int min_max(int,int,int(*)(int,int));

int main()
{
    int n,i;
    int *a;
    int MIN,MAX;
    a=citeste_sir(&n);
    cout<<"sirul este: "<<endl;
    for(i=0; i<n; i++)
        cout<<a[i]<<endl;
    if(a)
    {
        MIN=a[0];
        for(i=0; i<n; i++)
            MIN=min_max(MIN,a[i],min);
        cout<<"minimul este "<<MIN<<endl;
        MAX=a[0];
        for(i=0; i<n; i++)
            MAX=min_max(MAX,a[i],max);
        cout<<"maximul este "<<MAX<<endl;
    }
    return 0;
}

int *citeste_sir(int *nr)
{
    int i;
    int *vect;
    cout<<"citeste nr de elemente";
    cin>>*nr;
    vect=new int[*nr];
    if(!vect)
    {
        cout<<"alocare esuata";
        return(NULL);
    }
    else
    {
        for(i=0; i<*nr; i++)
        {
            cout<<"vect["<<i<<"]=";
            cin>>vect[i];
        }
        return vect;
    }
}

int min_max(int x,int y,int(*func_min_max)(int,int))
{
    return(func_min_max(x,y));
}

int min(int a,int b)
{
    return(a<b ? a:b);
}

int max(int a,int b)
{
    return(a>b ? a:b);
}
