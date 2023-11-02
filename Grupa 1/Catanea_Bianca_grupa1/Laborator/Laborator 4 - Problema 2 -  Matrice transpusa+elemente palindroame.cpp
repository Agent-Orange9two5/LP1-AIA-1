#include <iostream>
using namespace std;
int main()
{
   int a[10][10],n,max,min,v[100],s=0,pal=0,copiemat,i,j,h=0,b[10][10],vs[10],x=0;
   cout << "Introduceti numarul de linii / coloane a matricii patratice: ";
   cin >> n;

   cout<<"Introduceti valorile matricii: "<<endl;
   for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
    cout << endl;

    max = min = a[0][0];
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++){

            if(a[i][j] % 3 ==0) s += a[i][j];
            if(a[i][j] < min) min = a[i][j];
            if(a[i][j] > max) max = a[i][j];

            copiemat = a[i][j];
            if(a[i][j]>9){
            while(copiemat > 0)
                {
                pal = pal * 10 + copiemat%10;
                copiemat /= 10;
                }
            if(pal == a[i][j]) v[h++]=pal;
            }
        }
        vs[x++]=s;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            b[i][j]=a[j][i];

    cout<<endl<<"Matricea transpusa este: "<<endl;

    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        cout << b[i][j] << " ";
        cout << endl;
   }

   cout << endl << min <<" "<< max << endl;
   cout << "Vectorul cu numerele palindroame din matrice este: ";
   for(i=0;i<h;i++)
    cout << v[i] << " ";

   cout << endl << "Vectorul cu suma pe linii a numerelor divizibile cu 3 este:";
   for(i=0;i<n;i++)
        cout << vs[i] << " ";


}
