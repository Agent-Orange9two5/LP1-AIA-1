#include <iostream>

using namespace std;

int main()
{
    int a[4][4],i,j,n[10],v[10],s[10],e[10],c,r,sds=0,k=0;
    cout<<"Intruduceti valorile matricei cu 4 linii si 4 coloane"<<endl;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            cin>>a[i][j];
            if(i+j<3)
                sds=sds+a[i][j];
        }
    cout<<"Elementele de pe diagonala principala sunt: ";
    j=0;
    for(i=0;i<4;i++)
    {
        r=0;
        cout<<a[i][i]<<" ";
        c=a[i][i];
        while(c)
        {
            r=r*10+c%10;
            c/=10;
        }
        if(a[i][i]==r)
            n[j++]=a[i][i];
    }
    cout<<endl<<"Elementele de pe diagonala secundara in ordine inversa sunt: ";
    for(i=0;i<4;i++)
        cout<<a[4-i-1][i]<<" ";
    cout<<endl<<"Suma elementelor deasupra diagonalei secundare este "<<sds<<endl<<"Elementele palindrom de pe diagonala principala sunt ";
    for(i=0;i<j;i++)
        cout<<n[i]<<" ";
    c=0;r=0;sds=0;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            if(i<j && i+j<3)
                n[c++]=a[i][j];
            if(i<j && i+j>3)
                e[k++]=a[i][j];
            if(i>j && i+j>3)
                s[r++]=a[i][j];
            if(i<j && i+j<3)
                v[sds++]=a[i][j];
        }
    cout<<endl<<"Elementele din zona de nord a matricei sunt: ";
    for(i=0;i<c;i++)
        cout<<n[i]<<" ";
    cout<<endl<<"Elementele din zona de est a matricei sunt: ";
    for(i=0;i<k;i++)
        cout<<e[i]<<" ";
    cout<<endl<<"Elementele din zona de sud a matricei sunt: ";
    for(i=0;i<r;i++)
        cout<<s[i]<<" ";
    cout<<endl<<"Elementele din zona de vest a matricei sunt: ";
    for(i=0;i<sds;i++)
        cout<<v[i]<<" ";
    return 0;
}
