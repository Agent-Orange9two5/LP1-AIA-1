#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f("Sumapare.txt");
    int n,v[100],s=0,i;
    cout<<"Introduceti dimensiunea vectorului: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=0;i<n;i++){
            if(v[i]%2==0)
            s+=v[i];
        }
        f<<s;
        cout<<"suma nr pare este: "<<s;
        f.close();
        return 0;
    }
