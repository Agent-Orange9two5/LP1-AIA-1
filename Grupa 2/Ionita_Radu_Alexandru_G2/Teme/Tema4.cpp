#include <iostream>
using namespace std;

int main()
{
    //Input
    int a[4][4],n=4,i,j,m,k,v[100],h=0,va[2],vb[2],vc[2],vd[2],t=0, u=0,x=0,z=0;
    cout<<">> Introduceti numerele pentru matrice: "<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    system("cls");

    //Matrice output
    cout<<">> Matricea este: <<"<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }

    //Numere de deasupra diag sec
    cout<<endl<<">> Numerele de deasupra diagonala secundara sunt: ";
    for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
        if (i+j!=n-1 && i+j<=2 )
            cout<<a[i][j]<<" ";
      }
    }

    //Numere de sub diag prin
    cout<<endl<<">> Numerele de sub diagonala principala sunt: ";
    for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
        if (i!=j && i>j)
            cout<<a[i][j]<<" ";
      }
    }

    //Numere neg si poz lor
    cout<<endl<<">> Numere negative si pozitia lor: "<<endl;
    for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
        if (a[i][j] < 0) {
            cout<<" Numarul [ "<<a[i][j]<<" ]"<<" (Coloana: "<<j+1<<" si Linia: "<<i+1<<")"<<endl;
        }
      }
    }

    //Palindrome
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i%2==1)
                k=a[i][j];
                m=0;
                if(a[i][j]<-9 || a[i][j]>9){
                while(k){
                    m=m*10+k%10;
                    k/=10;
                    }
                if(m==a[i][j]) v[h++]=m;
                }
        }
    }
    cout<<endl<<">> Vector cu numerele palindrome din matrice cu linile impare: ";
    for(i=0;i<h;i++) cout<<v[i]<<" ";

    //Vectori cu numerele dintre diagonale
    for(i=0;i<n;i++){
        for (j=0 ; j<n; j++) {
            if (i<j && i+j<3)
                va[t++] = a[i][j];
            if (j<i && i+j<3)
                vb[u++] = a[i][j];
            if (i<j && i+j>=4)
                vc[x++] = a[i][j];
            if (i>j && i+j>=4)
                vd[z++] = a[i][j];
        }
    }
    cout<<endl<<endl<<">> Vector 1: ";
    for (i=0;i<2;i++){
        cout<<va[i]<<" ";}
    cout<<endl<<">> Vector 2: ";
    for (i=0;i<2;i++){
        cout<<vb[i]<<" ";}
    cout<<endl<<">> Vector 3: ";
    for (i=0;i<2;i++){
        cout<<vc[i]<<" ";}
    cout<<endl<<">> Vector 4: ";
    for (i=0;i<2;i++){
        cout<<vd[i]<<" "; }
    return 0;
}
