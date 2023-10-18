#include <iostream>

using namespace std;
//sa se afiseze elem de pe diag princ, elem de sub diag sec,si suma nr de 3 cif
int main()
{
    int a[5][5],i,j,s=0,n;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
            cin>>a[i][j];
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
            {
                if(i==j)
                {
                    cout<<endl<<a[i][j]<<" ";
                }
                if(i+j>n-1&&i>j)
                {
                    cout<<a[i][j];
                }
                if(a[i][j]>99&&a[i][j]<1000)
                {
                    s=s+a[i][j];
                }
            }
    }
    cout<<s;
    return 0;
}

