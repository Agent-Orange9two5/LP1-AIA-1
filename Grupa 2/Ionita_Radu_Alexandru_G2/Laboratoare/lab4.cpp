#include <iostream>
using namespace std;

int main()
{
    int V[10],i,suimp=0,pare;
    for (i=0; i<=9; i++) {
        cin>>V[i];
        if (V[i]%2==1)
            suimp=suimp+V[i];
    }
    cout<<endl<<"Nr Pare: ";
    for (i=0; i<=9; i++) {
        if (V[i]%2==0)
            cout<<V[i]<<" ";
    }
    cout<<"Suma nr impare: "<<suimp<<endl;
    cout<<"Vectorul inversat este: ";
    for (i=9; i>=0; i--) {
        cout<<V[i]<<" ";
    }

    return 0;
}
