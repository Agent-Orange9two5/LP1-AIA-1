#include <iostream>
#include<cstring>
using namespace std;
struct oras{
char denumire[30];
int nrloc;
float suprafata;
char indice;}x[25];
int main()
{ int n,i,j,aux;
cout<<"Introduceti numarul de orase: ";
cin>>n;
oras x[n];
for(i=0;i<n;i++){
    cout<<endl<<"Orasul"<<" "<<i+1<<" "<<"este: "<<endl;
    cin>>x[i].denumire;
    cout<<"Numarul de locuitori este: "<<endl;
    cin>>x[i].nrloc;
    cout<<"Suprafata este : "<<endl;
    cin>>x[i].suprafata;
    cout<<"Indicele de apreciere generala este: "<<endl;
    cin>>x[i].indice;
}
cout<<"Localitatile sunt: "<<endl;
for(i=0;i<n;i++)
    cout<<x[i].denumire<<" ";
    cout<<endl;
for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
if(x[i].nrloc>x[j].nrloc) {aux=x[i].nrloc;
                        x[i].nrloc=x[j].nrloc;
                        x[j].nrloc=aux;}
cout<<"Sortarea acestora:"<<endl;
for(i=0;i<n;i++)
   cout<<x[i].denumire<<" "<<x[i].nrloc<<" ";
   cout<<endl;
    return 0;
}
