#include <iostream>

using namespace std;

int main()
{
    int nrcif,cif;
    cout<<"Cifra este: ";
    cin>>cif;
    cout<<endl;
    nrcif=0;
    if (cif!=0)
        {
    while (cif>=9) {
        cif=cif/10;
        nrcif++;
    }
        }
    else cout<<"Nr are 0 cifre";
    if (cif<9 & cif!=0) cout<<"Nr are "<<nrcif+1<<" cifre";
    return 0;
}
