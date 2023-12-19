#include <iostream>
#include <fstream>

using namespace std;

int a[10][10],n,i,j,sprin=0,ssecund=0;
void citire(){
    cout<<"Cate linii/coloane va avea matricea? ";
    cin>>n;
    cout<<"Introduceti elementele matricei: ";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    cout<<"Matricea introdusa este: "<<endl;
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cout<<a[i][j]<<" ";
        }
        cout<<endl;
        }
}
void diagonale(){
    ofstream f("Sumediagonale.txt");
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(i==j){
                    sprin+=a[i][j];
                }
                if(i+j==n-1){
                    ssecund+=a[i][j];
                }
}
}
cout<<"Suma de pe diagonala principala este: "<<sprin<<endl;
cout<<"SUma de pe diagonala secundara este: "<<ssecund<<endl;
f<<sprin<<endl;
f<<ssecund;
}
int main()
{
    citire();
    diagonale();
    return 0;
}
