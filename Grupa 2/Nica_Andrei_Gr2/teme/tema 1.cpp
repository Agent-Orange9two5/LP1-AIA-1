
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


/*  Conditiile si acoladele nu sunt puse tocmai bine. Incearca sa lucrezi putin mai ordonat si sa rezolvi fiecare cerinta rand pe rand. 
un exemplu de rezolvare corecta ar fi: 

*/

/*
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
*/