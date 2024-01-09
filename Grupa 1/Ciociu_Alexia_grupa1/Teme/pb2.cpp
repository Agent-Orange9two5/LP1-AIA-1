#include <iostream>
#include<fstream>
using namespace std;
int n,i,j;
int main()
{int **mat=new int*[n];
cout<<"Introduceti nr de linii si coloane ";
cin>>n;
for(i=0;i<n;i++)
{
    mat[i]=new int[n];
}
if(mat==NULL)
{
    cout<<"Alocarea dinamica nu s-a putut efectua";
    return 0;

}

cout<<"Introduceti elementele matricei"<<endl;
int sump=0,sums=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
     cin>>mat[i][j];}
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(i==j) sump+=mat[i][j];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(i+j==n-1) sums+=mat[i][j];
delete [] mat;
ofstream g("matrice.in");
cout<<endl<<sums<<" "<<sump;
g.close();
    return 0;
}
