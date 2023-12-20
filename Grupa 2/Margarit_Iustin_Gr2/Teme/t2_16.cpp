#include <iostream>
#include <fstream>
using namespace std;

ofstream g("elevi.txt");

struct elevi {
string nume,prenume;
int varsta,anstudiu;};

void afisare(elevi v[],int n){
for(int i=0;i<n;i++)
   {

    cout<<"Elevul "<<i+1<<" se numeste "<<v[i].nume<<" "<<v[i].prenume<<" are "<<v[i].varsta<<" ani"<<" si e in anul "<<v[i].anstudiu<<" de studiu" <<endl;
    g<<"Elevul "<<i+1<<"se numeste "<<v[i].nume<<" "<<v[i].prenume<<" are"<<v[i].varsta<<" ani"<<" si e in anul"<<v[i].anstudiu<<endl;
}}

int main()
{
    int n;
    cout<<"Cati elevi?";
    cin>>n;
    elevi* v=new elevi[n];
    for(int i=0;i<n;i++)
       {
        cout<<"Pentru elevul "<<i+1;
        cout<<"\nNumele:";cin>>v[i].nume;
        cout<<"\nPrenume:";cin>>v[i].prenume;
        cout<<"\nVarsta:";cin>>v[i].varsta;
        cout<<"\nAnul de studiu";cin>>v[i].anstudiu;
       }
afisare(v,n);
delete[]v;
    return 0;
}
