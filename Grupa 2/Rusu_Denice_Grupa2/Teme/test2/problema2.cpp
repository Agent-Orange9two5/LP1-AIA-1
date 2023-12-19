#include <iostream>
using namespace std;

int main()
{
    FILE *g=fopen("SumeDiagonale.txt","w");
    int a[11][11],s1=0,s2=0,n;
    cout<<"Introduceti dimensiunea matricei: ";
    cin>>n;
    cout<<endl<<"Introduceti elementele matricei: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)s1+=a[i][j];
            if(i+j==n-1)s2+=a[i][j];
        }
    }
    fprintf(g,"Suma elementelor de pe diagonala principala este: %d\n",s1);
    fprintf(g,"Suma elementelor de pe diagonala secundara este: %d",s2);
    fclose(g);
    return 0;
}
