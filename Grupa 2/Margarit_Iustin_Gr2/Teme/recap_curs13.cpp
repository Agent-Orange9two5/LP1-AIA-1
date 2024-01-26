#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <fstream>
using namespace std;

ofstream g("procesate.txt");

struct note{float n1,n2,medie;};

struct dataa{int zi,luna,an;};

struct cursanti{
dataa dn;
note no;
string nume,prenume;
char CNP[14];};

vector<cursanti> c;

void date_cursanti(){
int n;
cout<<"Numarul de cursanti: "; 
cin>>n;
cin.ignore();
c.resize(n);

for(int i=0;i<c.size();i++){
    
  cout<<"Cursant "<<i+1<<"\nNume: ";
  getline(cin,c[i].nume);
  cout<<"Prenume: ";
  getline(cin,c[i].prenume);
  cout<<"Anul nasterii: ";
  cin>>c[i].dn.an;
  cout<<"Luna nasterii: ";
  cin>>c[i].dn.luna;
  cout<<"Ziua nasterii: ";
  cin>>c[i].dn.zi;
  cout<<"Doua note: ";
  cin>>c[i].no.n1>>c[i].no.n2;
  c[i].no.medie=(c[i].no.n1+c[i].no.n2)/2;
  cin.ignore();
  cout<<"CNP: ";
  cin.getline(c[i].CNP,14);}
}

int alfa(const cursanti& A , const cursanti& B){return A.nume<B.nume;}

void ordonat_alfabetic(){

   sort(c.begin(),c.end(),alfa);

   cout<<"\n\nDate cursanti ordonati alfabetic dupa nume: \n";

   for(int i=0;i<c.size();i++)
    cout<<c[i].nume<<" "<<c[i].prenume<<" ,nascut in data de "<<c[i].dn.zi<<"."<<c[i].dn.luna<<"."<<c[i].dn.an<<" are notele "<<c[i].no.n1<<" si "<<c[i].no.n2<<" ,iar medie este "<<c[i].no.medie<<endl;
}

void CNP(){

char s[14];

for(int i=0;i<c.size();i++){
  strcpy(s,"");
 strncat(s,c[i].CNP+5,2);
 strcat(s,".");
 strncat(s,c[i].CNP+3,2);
 strcat(s,".");
 strncat(s,c[i].CNP+1,2);

cout<<"Data nasterii a lui "<<c[i].nume<<" "<<c[i].prenume<<" pe baza informatiilor din CNP este "<<s<<endl;}
}


void rezultate(){
char re[8];

for(int i=0;i<c.size();i++){
  strcpy(re,"RESPINS");

  if(c[i].no.medie>=5)
   strcpy(re,"ADMIS");

cout<<"\n"<<c[i].nume<<" "<<c[i].prenume<<" este "<<re<<" cu media "<<c[i].no.medie<<endl;
g<<c[i].nume<<" "<<c[i].prenume<<" este "<<re<<" cu media "<<c[i].no.medie<<endl;}
}

int main(){

date_cursanti();
ordonat_alfabetic();
CNP();
rezultate();
g.close();

return 0;}
