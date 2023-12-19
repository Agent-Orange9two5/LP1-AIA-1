#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ofstream g("SiruriSortate.txt");
    int n,i;
    char s[200],aux[200];
    cout<<"Introduceti numarul de siruri de caractere: ";
    cin>>n;
    cin.get();
    char m[n][200];
    for(i=0;i<n;i++)
    {
        cout<<"Introduceti sirul "<<i+1<<": ";
        cin.getline(s,100);
        strcpy(m[i],s);
    }
    for(i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(m[i],m[j])>0)
            {
                swap(m[i],m[j]);
            }
    for(i=0;i<n;i++)
        g<<m[i]<<endl;
    cout<<"Sirurile sortate au fost scrise in fisier";
    g.close();
    return 0;
}
