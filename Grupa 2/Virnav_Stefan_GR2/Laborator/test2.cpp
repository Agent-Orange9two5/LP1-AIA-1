#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,i;
    ofstream g("elevi.txt");
    cout<<"Nr elevi :";
    cin>>n;
    struct
    {
        char nume[50];
        char prenume[50];
        int varsta;
        int an;
    }v[25];
    for(i=0;i<n;i++)
    {
        cout<<"ELEV NR "<<i+1<<endl;
        cout<<"Numele elevului este: ";
        cin>>v[i].nume;
        cout<<"Prenumele elevului este: ";
        cin>>v[i].prenume;
        cout<<"varsta elevului este: ";
        cin>>v[i].varsta;
        cout<<"Anul elevului este: ";
        cin>>v[i].an;
    }
    for(i=0;i<n;i++)
    {
        cout<<"ELEV NR "<<i+1<<endl;
        cout<<"Numele elevului este: ";
        cout<<v[i].nume<<endl;
        cout<<"Prenumele elevului este: ";
        cout<<v[i].prenume<<endl;
        cout<<"varsta elevului este: ";
        cout<<v[i].varsta<<endl;
        cout<<"Anul elevului este: ";
        cout<<v[i].an<<endl;
                cout<<"ELEV NR "<<i+1<<endl;
        g<<"Numele elevului este: ";
        g<<v[i].nume<<endl;
        g<<"Prenumele elevului este: ";
        g<<v[i].prenume<<endl;
        g<<"varsta elevului este: ";
        g<<v[i].varsta<<endl;
        g<<"Anul elevului este: ";
        g<<v[i].an<<endl;
    }
    g.close();
    return 0;
}
