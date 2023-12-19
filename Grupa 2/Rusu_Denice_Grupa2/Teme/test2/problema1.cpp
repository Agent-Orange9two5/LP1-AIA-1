#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream g("SumaPare.txt");
    int n,sum=0,v[100];
    cout<<"Introduceti dimensiunea vectorului: ";
    cin>>n;
    cout<<endl<<"Introduceti "<<n<<" numere intregi:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<endl<<"Suma numerelor pare din vector este: "<<endl;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)sum+=v[i];
    }
    g<<sum;
    return 0;
}
