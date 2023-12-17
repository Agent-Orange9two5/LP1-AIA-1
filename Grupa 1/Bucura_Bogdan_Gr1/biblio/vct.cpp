#include<iostream>
#include<stdlib.h>
#include<vector>
#include<fstream>
#include<string.h>
#include<time.h>
using namespace std;
  
 struct bib{
 char aut[35];
 char tit[35];
 char an[4];
 int iden;
 };
 struct poezie{
 char aut[35];
 char tit[35];
 char an[4];
 int iden;
 };

bib* v=(bib*)calloc(0, sizeof(bib));
poezie* a=(poezie*)calloc(0, sizeof(poezie));
int i=0,z=0;

 int adauga()
 {
cout<<"Autor:";cin.get();
cin.get(v[i].aut,35);
cin.get();
cout<<"Titlu:";cin.get(v[i].tit,35);
cin.get();
cout<<"An aparitie:";cin.get(v[i].an,4);cin.get();

v[i].iden=100000+rand()%100001+rand()%1001;
cout<<"Identificator:"<<v[i].iden;
i++;cout<<endl;
return 0;
 }


 int adauga_p()
 {
cout<<"Autor:";cin.get();
cin.get(a[z].aut,35);
cin.get();
cout<<"Titlu:";cin.get(a[z].tit,35);
cin.get();
cout<<"An aparitie:";cin.get(a[z].an,4);cin.get();

a[z].iden=100000+rand()%100001+rand()%100001*10;
cout<<"Identificator:"<<a[z].iden;
z++;
cout<<endl;
return 0;
 }


 void erade(int l)
 {int m=l;
    for(int j=0;j<i;j++)
 {
 if(l==v[j].iden)
    {
    swap(v[i-1],v[j]);
    i--;
 }}
 for(int k=0;k<z;k++)
 {
 if(m==a[k].iden)
    {
    swap(a[z-1],a[k]);
    z--;
 }}}

void scrierefis(){
  ofstream f("Carti oarecare.txt");

for(int j=0;j<i;j++){
    f<<"---------- CARTEA: "<<j+1<<" ----------"<<endl;
    f<<"Autor:"<<v[j].aut<<endl;
    f<<"Titlu:"<<v[j].tit<<endl;
    f<<"An aparitie:"<<v[j].an<<endl;
    f<<"Identificator:"<<v[j].iden<<endl;

} f.close();
}

void scrierefis_p(){
  ofstream g("poezie.txt");

for(int k=0;k<z;k++){
    g<<"---------- CARTEA POEZIE: "<<k+1<<" ----------"<<endl;
    g<<"Autor:"<<a[k].aut<<endl;
    g<<"Titlu:"<<a[k].tit<<endl;
    g<<"An aparitie:"<<a[k].an<<endl;
    g<<"Identificator:"<<a[k].iden<<endl;

} g.close();
}


 void cautare()
 {char d[35];
cout<<endl<<"Autor sau Titlu sau An:";
cin.get();cin.get(d,35);cin.get();
    for(int j=0;j<i;j++)
 {
 if(strcmp(d,v[j].aut)==0||strcmp(d,v[j].tit)==0||strcmp(d,v[j].an)==0)
    {
  cout<<"Autor:"<<v[j].aut<<endl;
    cout<<"Titlu:"<<v[j].tit<<endl;
    cout<<"An aparitie:"<<v[j].an<<endl;
    cout<<"Identificator:"<<v[j].iden<<endl;
 }}
for(int j=0;j<z;j++)
 {
 if(strcmp(d,a[j].aut)==0||strcmp(d,a[j].tit)==0||strcmp(d,a[j].an)==0)
    {
  cout<<"Autor:"<<a[j].aut<<endl;
    cout<<"Titlu:"<<a[j].tit<<endl;
    cout<<"An aparitie:"<<a[j].an<<endl;
    cout<<"Identificator:"<<a[j].iden<<endl;
 }}
 }

int main()
{srand((unsigned) time (0));
int u, x=1,y;
cout<<"Actiune 1: Adauga o carte"<<endl;
cout<<"Actiune 2: Sterge o carte folosind identificatorul"<<endl;
cout<<"Actiune 3: Scrierea bazei de date intr un fisier txt"<<endl;
cout<<"Actiune 4: Scrierea bazei de date (poezie) intr un fisier txt"<<endl;
cout<<"Actiune 5: Cautare carte dupa autor/titlu/an"<<endl;
cout<<"Actiune 0: INCHIDERE PROGRAM"<<endl;

while(x)
    {
        cout<<"Actiune:";cin>>x;

     switch(x){
    case 1:
    cout<<endl<<"Tipul cartii(1=carte cu poezii sau 2=alt tip de carte)";
cin>>y;

if(y==1)
        {v = (bib *) realloc(v, i+1);
         if(v==NULL){
        cout<<"EROARE LA ALOARE.";break;}
     adauga_p();break;}
     else
     {a = (poezie *) realloc(a, z+1);
         if(a==NULL){
        cout<<"EROARE LA ALOARE.";break;}
     adauga();break;}

    case 2:

        {cout<<endl<<"Identificator:";cin>>u;;
        erade(u);;
        break;}

    case 3:

        {scrierefis();break;}

    case 4:
        {scrierefis_p();break;}
        
    case 5:
    {cautare();}

   }
}
}
