#include <iostream>
using namespace std;

int v[4][4],p[16],i,j,x,y,a1[16],a2[16],a3[16],a4[16],k,s;
int main()
{  k=s=0;
    for(i=0;i<4;i++)  //citire matrice
    for(j=0;j<4;j++)
    cin>>v[i][j];
    cout<<"Elemente diagonala principala: ";
    for(i=0;i<4;i++){
    cout<<v[i][i]<<" ";
    x=v[i][i]; y=0;  //aici am verificat si daca exista el palindrome si le-am bagat in vectorul p
    while(x){
    y=y*10+x%10;
    x/=10;}
        if(y==v[i][i])
        p[k++]=y;
    }
    
    cout<<endl;
    cout<<"Elementele palindrome de pe diag principala sunt: ";
    for(i=0;i<k;i++)
    cout<<p[i]<<" ";
    cout<<endl;
    
    cout<<"Elementele diagonala secundara: ";
    for(i=3;i>=0;i--)
    cout<<v[i][4-i-1]<<" ";
    cout<<endl;
    
    cout<<"Suma elementelor aflate deasupra diagonalei secundare este: ";
    for(i=0;i<4;i++)
    for(j=0;j<3-i;j++)
    s+=v[i][j];
    cout<<s<<endl;
                                         //zonele am ales sa le afisez ca sa se vada ca sunt corect facute (fara diagnoale incluse)
    cout<<"El din partea I: ";  //zona de sus
    for(i=0;i<4/2-1;i++)
    for(j=i+1;j<4-i-1;j++)
    cout<<v[i][j]<<" ";
    cout<<endl;
    
     cout<<"El din partea II: ";  //zona de jos
    for(i=4/2+1;i<4;i++)
    for(j=4-i;j<i;j++)
    cout<<v[i][j]<<" ";
    cout<<endl;
    
    cout<<"El din partea III: ";  //zona din stanga
    for(j=0;j<4/2-1;j++)
    for(i=j+1;i<4-j-1;i++)
    cout<<v[i][j]<<" ";
    cout<<endl;
    
    cout<<"El din partea IV: ";  //zona din dreapta
    for(j=4/2;j<4;j++)
    for(i=4-j;i<j;i++)
    cout<<v[i][j]<<" ";
    cout<<endl;
    
    return 0;
}
