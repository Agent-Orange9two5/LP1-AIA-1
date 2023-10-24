
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int a[4][4] , i,j, s ;
  cout<<"se citeste matricea:";
  for(i=0 ; i<4 ; i++)
   for(j=0 ; j<4 ; j++) cin>> a[i][j];


   cout<<"diagonala principala"<<endl;
    for(i=0 ; i<4 ; i++)
   for(j=0 ; j<4 ; j++)
   if(i ==j)
   cout<< a[i][j]<<" ";

  cout<<"elementele de sub diagonala sec"<<endl;
   for(i=0 ; i<4 ; i++)
   for(j=0 ; j<4 ; j++)
   if(i +j >=4)
   cout<< a[i][j]<<" ";

   for(i=0 ; i<4 ; i++)
   for(j=0 ; j<4 ; j++)
   if(a[i][j]>>99 && a[i][j]<<1000)
  s+=a[i][j];
  cout<<" suma este  " << s ;
}
