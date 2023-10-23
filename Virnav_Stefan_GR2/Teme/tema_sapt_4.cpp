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
 int v[4][4],i,j,a[2],;
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
            if(i%2==0&& palindrom(v[i][j])==true)
                cout<<v[i][j]<<" ";

 return 0;
}
