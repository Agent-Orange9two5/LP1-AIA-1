#include <iostream>
using namespace std;
int main()
{
   int a[10][10],n,max,min,v[100],m,k,i,j,h=0,b[10][10],vs[10],x=0;
   cout<<"Cate linii/coloane va avea matricea patratica: ";
   cin>>n;
   cout<<"Citim matricea patratica: "<<endl;
   for(i=0;i<n;i++)
    for(j=0;j<n;j++) cin>>a[i][j];
    cout<<endl;
    max=min=a[0][0];
    for(i=0;i<n;i++){
           int s=0;
        for(j=0;j<n;j++){

            if(a[i][j]%3==0) s+=a[i][j];
            if(a[i][j]<min) min=a[i][j];
            if(a[i][j]>max) max=a[i][j];
            k=a[i][j];
            m=0;
            if(a[i][j]>9){
            while(k){
                m=m*10+k%10;
                k/=10;
                }
            if(m==a[i][j]) v[h++]=m;
            }
        }
        vs[x++]=s;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) b[i][j]=a[j][i];

    cout<<endl<<"matricea transpusa: "<<endl;

   for(i=0;i<n;i++){
    for(j=0;j<n;j++) cout<<b[i][j]<<" ";
    cout<<endl;
   }

   cout<<endl<<min<<" "<<max<<endl<<"vector cu numerele palindroame din matrice: ";
   for(i=0;i<h;i++) cout<<v[i]<<" ";

   cout<<endl<<"vector cu suma pe linii a numerelor divizibile cu 3:";
   for(i=0;i<n;i++) cout<<vs[i]<<" ";


}
