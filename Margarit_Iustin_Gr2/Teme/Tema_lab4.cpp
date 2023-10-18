#include <iostream>
using namespace std;
int m[4][4];

int main(){

int v[8],i,j,a=0,x,pal=0,vp[8],ok=0,k=0;

cout<<"Introduceti elemntele matricii 4x4:";
 for(i=0;i<4;i++)
  for(j=0;j<4;j++){
      cin>>m[i][j];

    if(m[i][j]<0)
        ok++;

    if ((i < j && i + j < 3) || (i < j && i + j > 3) || (i > j && i + j > 3) || (i > j && i + j < 3))
        v[a++] = m[i][j];

    if((i+1)%2!=0 && m[i][j]>9){      
     x=m[i][j];

    while(x>0)
      {pal=pal*10+x%10;
       x=x/10;}

    if(pal==m[i][j])
       vp[k++]=pal;
    pal=0;} }

  cout<<endl;
  if(ok!=0){
        cout<<"Numerele negative si pozitiile lor sunt: \n";
        for(i=0;i<4;i++)
         for(j=0;j<4;j++)
          if(m[i][j]<0)
            cout<<m[i][j]<<" pe linia "<<i+1<<" si coloana "<<j+1<<endl;
          }
       else 
         cout<<"Nu ati introdus niciun numar negativ\n";

  if(k>0){
       cout<<"Numerele palindrom de pe linile impare: ";
     for(i=0;i<k;i++)
      cout<<vp[i]<<" ";} 
      

cout<<endl;
cout<<"Numerele deasupra diagonalei secundare:";
for(i=0;i<4;i++)
  for(j=0;j<4;j++)
  if(i+j<3)cout<<m[i][j]<<" ";

cout<<endl;
cout<<"Numerele sub diagonala principala:";
for(i=0;i<4;i++)
  for(j=0;j<4;j++)
   if(i>j)cout<<m[i][j]<<" ";

cout<<endl;
cout<<"Numerele din triunghiurile delimitate de diagonala principala si secundara sunt: ";
for(i=0;i<8;i++)cout<<v[i]<<" ";

    return 0;
}
