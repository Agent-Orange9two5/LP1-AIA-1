
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;
int main(){
 int a[4][4], i , j , v[8] , aux=0 , pal=0 ,k=0,x , vpal[8],y= 0;
 
 cout<<"se citeste matricea patratica :"<<endl;
 for(i=0 ; i <4 ; i ++)
 for (j=0 ; j<4 ; j ++) cin>>a[i][j]; ///citire matrice
 
 
  cout<<"elementrle de deasupra diag secundare:"<<endl; /// se intelege ce face:)))
  for(i=0 ; i<4 ; i++)
  for(j=0 ; j<4 ; j++)
  if (i+j <3 )     cout<<a[i][j]<< "   " ;
  
  cout << endl;
  
  cout<<" elementele de sub diag principala:"<<endl; /// la fel si aici
   for(i=0 ; i<4 ; i++)
  for(j=0 ; j<4 ; j++)
  if (i>j) cout <<a[i][j]<<"  ";
  
  
  cout<< endl;
  
  if(a[i][j] <0)  aux++ ;
  if((i<j && i+j<3) || (i<j && i+j>3)  || (i>j && i+j>3)  ||(i>j && i+j<3))
   v[k++]= a[i][j];
   
    if((i+1)%2 != 0 && a[i][j]>9){
        x = a[i][j];
        
        
        while (x>0){
            pal =pal*10+x%10;
            x=x/10;
                    }
        if(pal == a[i][j]){
            vpal[y++]=pal;
            pal= 0;
                           }
      
        
                                }
    cout<<endl;
     if(aux!=0){
        cout<<"Numerele negative si pozitiile lor sunt: \n";
        for(i=0;i<4;i++)
         for(j=0;j<4;j++)
          if(a[i][j]<0)
          cout<<a[i][j]<<" linia "<<i+1<<" colosna"<<j+1<<endl;
  
}
else cout<<"nu exista nr neg\n" ;

if(y>0){
    cout<<"nr palindrome pe liniile impare: " << endl;

for(i=0; i<y ; i++)
cout<<vpal[i]<<"  ";
}
else cout <<" nu exista nr palindrome pe liniile impare" ; 


cout<<endl;

cout<<"nr  dintre diagonala principala si secundara sunt: ";
for(i=0;i<8;i++)cout<<v[i]<<" ";

    return 0;
}
/*salut chiar nu pot sa inteleg de ce nu mi se citesc Numerele
dintre diagonale si cele negative (voi veni cu intrebari la laborator)
*/
