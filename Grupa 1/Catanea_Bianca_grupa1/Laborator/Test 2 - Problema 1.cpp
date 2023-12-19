#include <iostream>
#include <fstream>
using namespace std;
// ifstream f("SumaPare.txt");
ofstream g("SumaPare.txt");

int main()
{
    int v[100],i,s=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
            s+=v[i];
    }
    g << s;
    return 0;
}
