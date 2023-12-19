/*
Problema 3
a) Creați o structură pentru a reprezenta un
contact în agenda telefonică, conținând numele,
numărul de telefon și adresa de e-mail.

b) Citirea a n contacte de la tastatură (n ≤ 20),
stocarea acestora într-un vector și afișarea acestora
pe ecran și într-un fișier numit "Agenda.txt".

*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ofstream g("Agenda.txt");

struct Agenda{
    string nume;
    string numar_telefon;
    string email;
};

int main(){
    int n,i;
    Agenda v[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Nume: ";
        cin>>v[i].nume;
        cout<<"Numar de telefon: ";
        cin>>v[i].numar_telefon;
        cout<<"Email: ";
        cin>>v[i].email;
    }
        for(i=0;i<n;i++)
        {
            g<<v[i].nume<<" "<<v[i].numar_telefon<<" "<<v[i].email<<endl;
        }
    g.close();
    return 0;
}



