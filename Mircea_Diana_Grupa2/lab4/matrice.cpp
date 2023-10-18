#include <iostream>
using namespace std;
int main()
{
    int a[10][10],n,i,j,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++) cin>>a[i][j];
    cout<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
            if(a[i][j]>99 && a[i][j]<1000) //suma elem cu 3 cifre
                s+=a[i][j];
                 if(i==j)
            cout<<a[i][j]<<" "; //afisare diag princi
        }
    }
    cout<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
            if(i+j>n-1)
                cout<<a[i][j]<<" "; //afisare elem sub diag sec
        }
    }
    cout<<endl;
    cout<<s;
    return 0;
}

