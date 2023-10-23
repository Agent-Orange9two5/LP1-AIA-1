#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int v[4][4],i,j,n=4,k,m,a[1],b[1],c[1],d[1];

    //citire matrice
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
                         cout<<"v["<<i<<"]["<<j<<"]=";
                         cin>>v[i][j];
                         }
        }
    //nr negative + pozitia lor
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) {
                           if (v[i][j]<0) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este negativ"<<endl;
                         }

    //elementele de deasupra diagonalei secundare
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) { if (i==0 && j<3) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este deasupra diagonalei secundare"<<endl;
                         else if (i==1 && j<2) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este deasupra diagonalei secundare"<<endl;
                         else if (i==2 && j<1) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este deasupra diagonalei secundare"<<endl;
                         }
    //elementele de sub diagonala secundara
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) { if (i==1 && j>2) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este sub diagonala secundara"<<endl;
                           else if (i==2 && j>1) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este sub diagonala secundara"<<endl;
                           else if (i==3 && j>0) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este sub diagonala secundara"<<endl;
                         }
    //elemente palindrome pe linii impare
     for(i=0;i<n;i++)
        for(j=0;j<n;j++) {
            k=v[i][j];
            m=0;
            if(i==0 || i==2){
            if (v[i][j]>9)
                          while(k!=0){
                                      m=m*10+k%10;
                                      k=k/10;
                                     }
            if(m==v[i][j]) cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<<" este element palindrom"<<endl;

        }

       }

    //triunghiul de sus
    a[0]=v[0][1];
    a[1]=v[0][2];
    cout<<"Triunghiul de sus contine: ";
    for(i=0;i<2;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    //triunghiul din dreapta
    b[0]=v[1][3];
    b[1]=v[2][3];
    cout<<"Triunghiul din dreapta contine: ";
    for(i=0;i<2;i++) {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    //triunghiul de jos
    c[0]=v[3][1];
    c[1]=v[3][2];
    cout<<"Triunghiul de jos contine: ";
    for(i=0;i<2;i++) {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    
    //triunghiul din stanga
    d[0]=v[1][0];
    d[1]=v[2][0];
    cout<<"Triunghiul din stanga contine: ";
    for(i=0;i<2;i++) {
        cout<<d[i]<<" ";
    }

}

