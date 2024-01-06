#include <iostream>
#include <fstream>
using namespace std;

ofstream g("medie_elevi.txt");

struct elevi{
  string nume,prenume,CNP,adresa;
  struct note {float n1,n2,n3,medie;}m;
            };

int date_elevi(elevi e[],int n){

        for(int i=0;i<n;i++){

        cout<<"INTRODUCETI DATE PENTRU ELEVUL "<<i+1<<endl<<"Nume: ";
        cin.ignore();
          
        getline(cin, e[i].nume); 
        cout<<endl;

        cout<<"Prenume: ";        
        getline(cin, e[i].prenume);
        cout << endl;

        cout<<"CNP: ";      
        getline(cin, e[i].CNP);
        cout<<endl;

        cout<<"Adresa: ";       
        getline(cin, e[i].adresa);
        cout << endl;

        cout<<"Trei note: ";cin>>e[i].m.n1>>e[i].m.n2>>e[i].m.n3;
        e[i].m.medie=(e[i].m.n1+e[i].m.n2+e[i].m.n3)/3;  
    }
}

void sort_afisare(elevi e[],int n){

string v[n],aux;
int i,j,k=0;

    for(i=0;i<n;i++)
        if(e[i].m.medie>6)
          v[k++]=e[i].nume+" "+e[i].prenume;
        
        
for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
   if(v[i]>v[j])
     { aux=v[i];
      v[i]=v[j];
      v[j]=aux; }
  
  g<<v[0];
  for(i=1;i<n;i++)
  g<<", "<<v[i];

}

int main(){
    int n;
    cout<<"Cati elevi?";
    cin>>n;
    elevi* e=new elevi[n];
    date_elevi(e,n);
    sort_afisare(e,n);

delete[] e;
return 0;}
