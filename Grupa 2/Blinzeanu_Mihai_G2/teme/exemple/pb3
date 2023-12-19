#include <iostream>
#include <fstream>

using namespace std;
int n,i;
struct contact{
    char nume[50];
    int tel;
    char email[50];
};
contact v[20];
void citire(){
cout<<"Cate contacte vreti sa adaugati? "<<endl;
cin>>n;
ofstream f("Agenda.txt");
for(i=0;i<n;i++){
    cout<<"Introduceti numele: ";
    cin>>v[i].nume;
    cout<<"Introduceti nr de telefon: ";
    cin>>v[i].tel;
    cout<<"Introduceti emailul: ";
    cin>>v[i].email;
    cout<<"nume:"<<v[i].nume<<endl<<"telefon:"<<v[i].tel<<endl<<"email:"<<v[i].email<<endl;
    f<<v[i].nume<<endl<<v[i].tel<<endl<<v[i].email<<endl;
}
f.close();
}
int main()
{
    citire();
    return 0;
}
