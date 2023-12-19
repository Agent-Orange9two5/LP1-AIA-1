#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream g("SumaPare.txt");
    int n,suma=0;
    cout<<"Introduceti numarul de elemente ale vectorului: ";
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]: ";
        cin>>v[i];
        if(v[i]%2==0)
            suma+=v[i];
    }
    g<<suma;
    cout<<"Suma elementelor pare a fost scrisa in fisier";
    g.close();
    return 0;
}
