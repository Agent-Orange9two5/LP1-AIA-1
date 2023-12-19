// a) Citirea unei matrice pătratice de dimensiune n (n ≤ 10) și calcularea sumei elementelor de pe diagonala principală și a celei secundare.
// b) Scrierea sumelor calculare într-un fișier numit "SumeDiagonale.txt".

#include <iostream>
#include <fstream>
using namespace std;
ofstream g("SumeDiagonale.txt");
int main()
{
   int a[10][10],i,j,s1=0,s2=0,n,m;
   cin >> n;
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
        cin >> a[i][j];
   cout << endl;

   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(i==j)
            s1+=a[i][j];
  // for(i=0;i<n;i++)
    //for(j=0;j<n;j++)
        g << s1;
        g << endl;


   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(i+j == n-1)
            s2+=a[i][j];
   // for(i=0;i<n;i++)
      //   for(j=0;j<n;j++)
            g << s2;

    return 0;
}
