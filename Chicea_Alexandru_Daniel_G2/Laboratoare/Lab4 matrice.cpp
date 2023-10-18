#include <iostream>

using namespace std;

int main()
{
    //se citeste o matrice de 4 pe 4, elementele de pe diag princ, elemn de sub diag sec, suma tuturor nr de 3 cifre din matrice 333
    int a[4][4], i, j, s;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            cin>>a[i][j];
        if(a[i][j]/100>0 && a[i][j]/100<=9)
            s=s+a[i][j];
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j,4;j++)
            if(i==j)
                cout<<a[i][j]<<" ";
        cout<<endl;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j,4;j++)
            if(i+j>4)
                cout<<a[i][j]<<" ";
    }
    cout<<"Suma elm cu 3 cifre este:"<<s;
    return 0;
}
