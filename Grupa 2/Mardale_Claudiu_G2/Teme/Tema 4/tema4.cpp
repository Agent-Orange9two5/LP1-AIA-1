#include <iostream>

using namespace std;

int main()
{
    int m[20][20],i,j,n=4,v[10][10]; //declaram si matricea v, daca nu vrem sa folosim matricea m, dar totusi mai util ar fi sa afisam tot din matricea m
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>m[i][j];
    cout<<"Elementele negative:";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
                if(m[i][j]<0)cout<<m[i][j]<<' ';
    cout<<"Elementele de deasupra diagonalei secundare:";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           if(i + j < n - 1)  cout<<m[i][j]<<' ';
    cout<<"Elementele de sub diagonala principala:";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i>j)cout<<v[i][j]<<' '; //ce contine v[i][j] ? 

}
