/*
//Sa se construiasca o structura care sa contina numele studentului,2 note de
//laborator intregi, o nota de examen reala,media 40% din media lab.+60% media
//nota din examen
//Sa se afiseze tabloul studentilor
//Sa se sorteze in ordine alfabetica
// Sa se sorteze dupa medie
//
#include<iostream>
#include<string.h>

using namespace std;
struct stud
{
 char nume[50];
 int nota1,nota2;
 float nota_ex,med;
};

int main()
{
 stud student[30],temp;
 int n,i,ok;
 cout<<"Introduceti numarul de studenti: "; cin>>n;
 for(i=0;i<n;i++)
 {
  //cin.get();
  cout<<"Introduceti numele studentului: ";
  cin >> student[i].nume;
  cout<<"Introduceti nota 1: ";
  cin>>student[i].nota1;
  cout<<"Introduceti nota 2: ";
  cin>>student[i].nota2;
  cout<<"Introduceti nota examen: ";
  cin>>student[i].nota_ex;
  student[i].med=(student[i].nota1+student[i].nota2)/2*0.4+0.6*student[i].nota_ex;
 }

 cout<<"Sortare alfabetica"<<endl;
 do
 {
  ok=1;
  for(i=0;i<n-1;i++)
  if(strcmp(student[i].nume,student[i+1].nume)>0)
  {
   temp=student[i];
   student[i]=student[i+1];
   student[i+1]=temp;
   ok=0;
  }
 }
 while(ok==0);
 for(i=0;i<n;i++)
 cout<<student[i].nume<<" "<<student[i].med<<endl;

 cout<<"Sortare dupa medie"<<endl;
do
 {
  ok=1;
  for(i=0;i<n-1;i++)
  if(student[i].med>student[i+1].med)
  {
   temp=student[i];
   student[i]=student[i+1];
   student[i+1]=temp;
   ok=0;
  }
 }
 while(ok==0);

 for(i=0;i<n;i++)
    cout<<student[i].nume<<" "<<student[i].med<<endl;

 return 0;
}