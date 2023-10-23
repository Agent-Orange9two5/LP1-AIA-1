#include <iostream>

using namespace std;

int main()
{
    int a[6][6],i,j,ogl,cop,v1[3],v2[3],v3[3],v4[3],x=0,y=0,z=0,h=0,n;
    n=4;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(a[i][j]<0) cout<<"Numar negativ"<<a[i][j]<<" pe linia "<<i<<" si coloana "<<j<<endl;

        }
        }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i<j && i+j<n+1)
            {
                v1[x]=a[i][j];
                x++;
            }
            if(i>j && i+j<n+1)
            {
                v2[y]=a[i][j];
                y++;
            }
            if(i<j && i+j>n+1)
            {
                v3[z]=a[i][j];
                z++;
            }
            if(i>j && i+j>n+1)
            {
                v4[h]=a[i][j];
                h++;
            }
        }
    }

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i+j<n+1) cout<<a[i][j]<<endl;
        }
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i>j) cout<<a[i][j]<<endl;
        }
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i%2==1)
            {
                ogl=0;
                if(a[i][j]>9) {
                cop=a[i][j];
                while(cop!=0)
                {
                ogl=ogl*10+cop%10;
                cop=cop/10;
                }
                if(ogl==a[i][j])
                {
                    cout<<"Nr palindrom :"<<a[i][j]<<endl;
                }
                }
        }
    }
    }
    for(i=0;i<=1;i++)
    {
        cout<<"Primul vector "<<v1[i]<<endl;
    }
        for(i=0;i<=1;i++)
    {
        cout<<"Al doilea vector "<<v2[i]<<endl;
    }
        for(i=0;i<=1;i++)
    {
        cout<<"Al treila vector "<<v3[i]<<endl;
    }
        for(i=0;i<=1;i++)
    {
        cout<<"Al patrulea vector "<<v4[i]<<endl;
    }
    return 0;
}

