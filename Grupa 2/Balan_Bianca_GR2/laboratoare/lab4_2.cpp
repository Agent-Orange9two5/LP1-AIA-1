#include <iostream>

using namespace std;
//n=4.sa se afiseze elementele de pe diag principala de sub diagonala pricipala suma nr de 3 cifre
int main()
{
  int a[4][4],n,i,j;
   for(i=0;i<4;i++)
    for(j=0;j<4;j++)
        cin>>a[i][j];
  for(i=0;i<4;i++)
    for(j=1;j<4;j++)
    {
    if(i==j)
    cout<<a[i][j];
    }

}
