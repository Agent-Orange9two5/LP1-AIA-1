#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ofstream g("SiruriInvers.txt");
    int n,i;
    char **s;
    cout<<"Introduceti numarul de siruri de caractere: ";
    cin>>n;
    cin.ignore();
    char m[n][100];
    s=(char**)malloc(n*sizeof(char));
    if(!s)
    {
        cout<<"Eroare la alocarea de memorie";
        return -1;
    }
    for(i=0;i<n;i++)
    {
        s[i]=(char*)malloc(100*sizeof(char));
        if(!s[i])
        {
            cout<<"Eroare la alocarea de memorie";
            return -1;
        }
        cout<<"Introduceti sirul "<<i+1<<": ";
        cin.getline(s[i],100);
        strcpy(m[i],s[i]);
    }
    for(i=0;i<n;i++)
    {
        free(s[i]);
        g<<strrev(m[i])<<endl;
    }
    cout<<"Sirurile inversate au fost scrise in fisier";
    free(s);
    g.close();
    return 0;
}
