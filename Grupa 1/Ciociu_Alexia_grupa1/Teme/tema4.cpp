//inversarea unui vector
#include <iostream>
#include<fstream>
using namespace std;
ofstream fout("NumereSortate.txt");
int main()
{
    int v[100],n,i;
    cout<<"Marimea vect este: ";
    cin>>n;
    cout<<endl<<"Introduceti numerele din vector:";
    for(i=0;i<n;i++)
        cin>>v[i];
    
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
          if(v[i]<v[j])
            {
                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    }
    fout<<"Vectorul sortat descrescator este: ";
     for(i=0;i<n;i++)
        fout<<v[i]<<" ";
    return 0;
}
