/*Problema 3
a) Creați o structură pentru a reprezenta un contact în agenda telefonică, conținând numele, numărul de telefon și adresa de e-mail.
b) Citirea a n contacte de la tastatură (n ≤ 20), stocarea acestora într-un vector și afișarea acestora pe ecran și într-un fișier numit "Agenda.txt".
*/
#include <fstream>
#include <iostream>
using namespace std;
ofstream g("Agenda.txt");
struct agenda{string nume,telefon,email;};

int main(){
int n;
cout<<"Cate contacte in agenda?"<<endl;
cin>>n;
agenda* v=new agenda[n];

if(v==NULL)
 cerr<<"Eroare alocare memorie";

for(int i=0;i<n;i++){
cout<<"Adaugare contact "<<i+1<<':'<<endl;
cout<<"Nume: ";cin>>v[i].nume;
cout<<"\nTelefon: ";cin>>v[i].telefon;
cout<<"\nEmail: ";cin>>v[i].email;
}
for(int i=0;i<n;i++){
    g<<"\nInformatii contact "<<i+1<< "\n Nume: "<<v[i].nume<<"\n Telefon: "<<v[i].telefon<<"\n Email: "<<v[i].email;
     cout<<"\nInformatii conntact "<<i+1<< "\n Nume: "<<v[i].nume<<"\n Telefon: "<<v[i].telefon<<"\n Email: "<<v[i].email;
}
g.close();
delete[] v;
    return 0;
}
