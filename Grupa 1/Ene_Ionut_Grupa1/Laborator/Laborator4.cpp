#include <iostream>

using namespace std;

int main()
{

    int v[10],i,s;
        cout<<"Elementele vectorului sunt: ";
        for (i=0; i<10; i++) cin>>v[i];
        for (i=0; i<10; i++) if (v[i]%2==1) s=s+v[i];

        cout<<"Suma cifrelor impare este: "<<s<<endl;
        cout<<"Numerele pare sunt: ";
        for (i=0; i<10; i++){
            if (v[i]%2==0)
                cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<"Vectorul inversat este: ";
        for (i=9; i>=0; i--){
            cout<<v[i]<<" ";
        }

return 0;
}
