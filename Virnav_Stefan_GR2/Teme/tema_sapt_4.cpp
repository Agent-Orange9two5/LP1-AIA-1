/*
Se citeste o matrice 4x4 nr reale sa se afis nr neg din matrice si poz lor
Sa se afis taote elem deasupra diag secundare
Toate elm de sub diag principala
Toate nr palindrome de pe linile impare
Sa se creeze 4 vectori:
  Fiecare vector memoreaza fiecare triunghi format dintre cele 2 diagonale sec si principala
*/
#include <iostream>

using namespace std;
bool palindrom(int n)
    {
        int x,inv=0;
        x=n;
        while(x)
            {
             inv=inv*10+x%10;
             x/=10;
            }
        if(n==inv)
            return true;
        else
            return false;
    }
int main()
{
 int v[4][4],i,j,a[2],b[2],c[2],d[2],k=0;


 for(i=0;i<4;i++)
    for(j=0;j<4;j++)
        {
            cin>>v[i][j];
        }


    cout<<"Elemente deasupra diagonalei secundare:";
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(j<3-i)
                cout<<v[i][j]<<" ";


    cout<<endl<<"Elemente sub diagonala principala:";
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i>j)
                cout<<v[i][j]<<" ";


    cout<<endl<<"Elemente palindroam de pe linii impare:";
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i%2==0 && palindrom(v[i][j])==true)
                cout<<v[i][j]<<" ";
//Am zis sa fac cu formule ca rezolvarea sa fie mai generalizata chiar daca pe 4x4 puteam sa o fac cu volori direte la fiecare triunghi
    //Triunghiul din stanga
    cout<<endl<<"Elemente din triunghiul stanga:";
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i>j && j<3-i)
                {
                    cout<<v[i][j]<<" ";
                    a[k]=v[i][j];
                    k++;
                }
    k=0;
    cout<<endl<<"Elemente din triunghiul sus:";
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i<j && j<3-i)
                {
                    cout<<v[i][j]<<" ";
                    b[k]=v[i][j];
                    k++;
                }
    k=0;
    cout<<endl<<"Elemente din triunghiul dreapta:";
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i<j && j>3-i)
                {
                    cout<<v[i][j]<<" ";
                    b[k]=v[i][j];
                    k++;
                }
    cout<<endl<<"Elemente din triunghiul jos:";
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i>j && j>3-i)
                {
                    cout<<v[i][j]<<" ";
                    b[k]=v[i][j];
                    k++;
                }
 return 0;
}
