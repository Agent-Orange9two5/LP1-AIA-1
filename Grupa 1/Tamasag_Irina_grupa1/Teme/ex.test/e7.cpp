#include <iostream>
#include<string.h>
#include<fstream>
using namespace std;
ofstream fout("tema.txt");
int main()
{
    int n, j, i;
    cout<<"introduceti numarul de perechi: ";
    cin>>n;
    int** mat= new int* [n];
    for(i=0;i<n;i++)
    {
         mat[i]=new int[2];
    }
    if(mat==NULL )
    {
        cout<<"Alocare dinamica nereusita";
        return -1;
    }
    cout<<"Introduceti perechile: ";
    for(i=0;i<n;i++)
    {
        cin>>mat[i][0]>>mat[i][1];
    }
    for(i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(mat[i][0]+mat[i][1]>mat[j][0]+mat[j][1])
        {
           int aux1=mat[i][0];
           mat[i][0]=mat[j][0];
           mat[j][0]=aux1;
           int aux2=mat[i][1];
           mat[i][1]=mat[j][1];
           mat[j][1]=aux2;
        }
    }
     for(i=0;i<n;i++)
    {
        fout<<"("<<mat[i][0]<<" "<<mat[i][1]<<")"<<endl;
    }
    delete[]mat;

    return 0;
}
