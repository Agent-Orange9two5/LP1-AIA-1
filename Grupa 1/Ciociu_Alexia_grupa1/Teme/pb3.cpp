#include <iostream>
#include<fstream>
using namespace std;

struct contact{
    char nume[30];
    char nrtelefon[15];
    char email[30];
}agenda[20];
int main()
{int n,i;
cout<<"Introduceti numarul de contacte:";
cin>>n;
if(n<=0 || n>20) {
    cout<<"Numarul de contacte gresit"<<endl;
    return 1;
}
contact agenda[n];
ofstream g("agenda.txt");
for(i=0;i<n;i++)
{
    cout<<"CONTACT"<<i+1<<":"<<endl;
    cout<<"Nume:";
    cin.getline(agenda[i].nume,30);
    cout<<"Numar de telefon : ";
    cin.getline(agenda[i].nrtelefon,15);
    cout<<"Email: ";
    cin.getline(agenda[i].email,30);
    cout<<endl;
    g<<"Contact"<<i+1<<endl;
    g<<"Nume"<<agenda[i].nume<<endl;
    g<<"Numar de telefon"<<agenda[i].nrtelefon<<endl;
    g<<"Email"<<agenda[i].email<<endl;
}
g.close();
for(i=0;i<n;i++)
{cout<<"Contact"<<i+1<<endl;
    cout<<"Nume"<<agenda[i].nume<<endl;
    cout<<"Numar de telefon"<<agenda[i].nrtelefon<<endl;
    cout<<"Email"<<agenda[i].email<<endl;
}


    return 0;
}
