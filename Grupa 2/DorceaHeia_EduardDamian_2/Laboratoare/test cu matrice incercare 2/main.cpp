#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

ifstream fin("intrare.txt");
ofstream fout("MATRICE.txt");

int main()
{
    int n,m,i=0,j=0,V[50][50];
    int *p1=&n,*p2=&m;
    fout<<"n=";fin>>n;
    fout<<n;
    fout<<endl;
    fout<<"m=";fin>>m;
    fout<<m;
    fout<<endl;
    p1=(int *)malloc(50*sizeof(int));
    if(p1==NULL) fout<<"Nu exista destul spatiu in memorie";
    p2=(int *)malloc(50*sizeof(int));
    if(p2==NULL) fout<<"Nu exista destul spatiu in memorie";
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) {
            fout<<"V["<<i<<"]["<<j<<"]=";
            fin>>V[i][j];
            fout<<V[i][j];
            if (V[i][j]>500 || V[i][j]<-500) fout<<"Valoarea introdusa nu este corecta";
            fout<<endl;
        }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) if(i>j) fout<<"V["<<i<<"]["<<j<<"]="<<V[i][j];

    free(p1);
    free(p2);
    fin.close();
    fout.close();
    return 0;
}
