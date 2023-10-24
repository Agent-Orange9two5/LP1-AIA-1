#include <iostream>

using namespace std;
int a[4][4], x, y, i, j, v1[16], v2[16], v3[16], v4[16], v5[16], p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, ds[6], dp[6];
int main()
{
    for (i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            y=0;
            cout<<"a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
            x=a[i][j];
            if(a[i][j]>9)
                while(x)
                {
                    //aici am verificat daca e palindrom
                    y=y*10+x%10;
                    x=x/10;
                }
            if(i%2!=0 && a[i][j]==y)
            {
                //aici am memorat numere palindrome
                v5[p7]=a[i][j];
                p7++;
            }
            if(i>j)
            {
                //elemente sub diag princ
                dp[p5]=a[i][j];
                p5++;
            }
            if(i+j<3)
            {
                //elemente deasupra diag sec
                ds[p6]=a[i][j];
                p6++;
            }
            //aici is memorariile de vectori in functie de pozitia lor in matrice
            if(i<j && i+j<3)
            {
                v1[p1]=a[i][j];
                p1++;
            }
            if(i>j && i+j>3)
            {
                v2[p2]=a[i][j];
                p2++;
            }
            if(i<j && i+j>3)
            {
                v3[p3]=a[i][j];
                p3++;
            }
            if(i>j && i+j<3)
            {
                v4[p4]=a[i][j];
                p4++;
            }
        }
    }
    for (i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]<0)
                cout<<"a["<<i<<"]["<<j<<"]:"<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Numerele care se afla deasupra diag sec sunt:";
    for(i=0;i<6;i++)
        cout<<ds[i]<<" ";
    cout<<endl;
    cout<<"Numerele care se afla sub diag princp sunt:";
    for(i=0;i<6;i++)
        cout<<dp[i]<<" ";
    cout<<endl;
    cout<<"Numerele palindrome sunt:";
    for(i=0;i<p7;i++)
        cout<<v5[i]<<" ";
    cout<<endl;
    return 0;
}