#include <iostream>

using namespace std;
int palindrom(int n)
{
    int m=0,cn=n;
    while(cn)
    {
        m=m*10+cn%10;
        cn/=10;
    }
    if(n==m)return 1;
    else return 0;
}
int main()
{
    float a[4][4];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
        {
            cin>>a[i][j];
        }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(a[i][j]<0)cout<<a[i][j]<<" se afla pe linia "<<i<<", coloana "<<j<<" "<<endl;
        }
    }
    cout<<"Elementele aflate deasupra diagonalei secundare sunt: "<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i+j<3)cout<<a[i][j]<<" ";
        }
    }
    cout<<endl<<"Elementele aflate sub diagonala principala sunt: "<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i>j)cout<<a[i][j]<<" ";
        }
    }
    cout<<endl<<"Numerele palindrome de pe liniile impare sunt: "<<endl;
    for(int i=1; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i%2!=0 && palindrom(a[i][j]))cout<<a[i][j]<<" ";
        }
    }
    return 0;
}
