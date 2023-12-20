#include <iostream>
#include <fstream>
using namespace std;
ofstream t("bsabsafb.txt");

int main()
{
   int n,i,j;
   cout<<"Dimensiune matrice";
   cin>>n;n++;
  string H[n][n];

   for(i=0;i<n;i++){
    for(j=0;j<n;j++)
     H[i][j]="*";}


     for(i=0;i<n;i++){
      for(j=0;j<i;j++)
       {cout<<H[i][j];
        t<<H[i][j];
       }
      cout<<endl;
      t<<endl;}
n--;
     for(i=0;i<n;i++)
        for(j=0;j<n;j++)
             if(i+j>n-1 || i>j)
               H[i][j]=" ";

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            cout<<H[i][j]<<" ";
            t<<H[i][j]<<" ";}
            cout<<endl;
            t<<endl; }
 return 0;
}
