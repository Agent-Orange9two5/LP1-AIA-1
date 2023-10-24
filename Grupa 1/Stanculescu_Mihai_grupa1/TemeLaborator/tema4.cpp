#include <iostream>
using namespace std;

int main(){
    int i,j,n,m[100][100],nr=0,v[100],suma=0,ogl=0,cln,n1,tr1[100],tr2[100],tr3[100],tr4[100],cnt=0;
    cout<<"Introduceti numarul de linii si coloane al matricii:";
    cin>>n;
    n1=n;
    cout<<"Introduceti termenii din matrice:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    cout<<"Elementele de pe diagonala principala sunt:";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<m[i][j]<<" ";
            }   
        }
    }
    cout<<endl;
    cout<<"Elementele de pe diagonala secundara sunt:";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j==n-1){
                v[nr]=m[i][j];
                nr++;
            }   
        }
}
while(n1-1>=0){
    cout<<v[nr-1]<<" ";
    nr--;
    n1--;
}
cout<<endl;
cout<<"suma elementelor de deasupra diagonalei principale este:";
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i<j){
            suma +=m[i][j];
        }
    }
}
cout<<suma;

cout<<endl;
 cout<<"Numerele palindrom de pe diagonala principala sunt:";
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
            cln=m[i][j];
            while(cln!=0){
                ogl=ogl*10 +cln%10;
                cln=cln/10;
            }
            if(ogl==m[i][j]){
                cout<<m[i][j]<<" ";//nu inteleg dc nu merge
                ogl=0;
                cln=0;
            }
        }
    }
}
cout<<endl;
cout<<"Numerele din triunghiul de sus sunt:";
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i<j && i+j <n-1){
            tr1[cnt]=m[i][j];
            cnt++;
        }
    }
 }
 for(i=0;i<cnt;i++){
    cout<<tr1[i]<<" ";
 }
 cnt=0;
 cout<<endl;
cout<<"Numerele din triunghiul din dreapta sunt:";
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
if(i<j && i+j>n-1){
    tr2[cnt]=m[i][j];
    cnt++;
}
}
 }

for(i=0;i<cnt;i++){
    cout<<tr2[i]<<" ";
 }
 cnt=0;
cout<<endl;

cout<<"Numerele din triunghiul de jos sunt:";
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
if(i>j && i+j>n-1){
    tr3[cnt]=m[i][j];
    cnt++;
}
}
 }
 for(i=0;i<cnt;i++){
    cout<<tr3[i]<<" ";
 }
 cnt=0;
cout<<endl;
 
 cout<<"Numerele din triunghiul din stanga sunt:";
 
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i>j && i+j<n-1){
            tr4[cnt]=m[i][j];
            cnt++;
        }
}
  }

for(i=0;i<cnt;i++){
    cout<<tr4[i]<<" ";
 }

  return 0;
}