#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream g("stelute1.txt");
    ofstream d("stelute2.txt");
    int n,i,j,v=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        j=1;
        while(j<=i)
        {
            g<<"*";
            j++;
        }
        g<<endl;
    }
        for(i=n;i>=1;i--)
    {
        j=1;
        while(j<=i)
        {
            if(j>v && j<=n-v)
                d<<"*";
            else
                d<<" ";
            j++;
        }
        d<<endl;
        v++;
    }



    return 0;
}
//Stefan Virnav
