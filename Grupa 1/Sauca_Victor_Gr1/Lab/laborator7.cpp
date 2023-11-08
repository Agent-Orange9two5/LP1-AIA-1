#include <iostream>
#include <cstring>
using namespace std;

struct stud{
    char nume[50];
    int nota1,nota2;
    float nota_ex,med;
};

int main(){
    int n;
    cout<<"Nr de studenti: ";
    cin>>n;
    cout<<endl;
    stud v[n];
    for(int i=0;i<n;++i){
        cin.get();
        cout<<"Numele studentului: ";
        cin.get(v[i].nume,50);
        cin.get();
        cout<<"Nota 1: ";
        cin>>v[i].nota1;
        cout<<"Nota 2: ";
        cin>>v[i].nota2;
        cout<<"Nota examen: ";
        cin>>v[i].nota_ex;
        v[i].med=0.4*((float)(v[i].nota1+v[i].nota2)/2)+0.6*v[i].nota_ex;
        cout<<"Media: "<<v[i].med<<endl<<endl;
    }

    cout<<endl<<"Tablou de studenti: "<<endl;
    for(int i=0;i<n;++i){
        cout<<"Studentul "<<i+1<<" : "<<endl<<"   - Nume: "<<v[i].nume<<endl<<"   - Nota1: "<<v[i].nota1<<endl<<"   - Nota2 "<<v[i].nota2<<endl<<"   - Nota examen: "<<v[i].nota2<<endl<<"   - Medie: "<<v[i].med<<endl<<endl ;
    }
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(strcmp(v[i].nume,v[j].nume)==1){
                swap(v[i],v[j]);
            }
        }
    }
    cout<<endl<<"Tablou de studenti actualizat ordonat alfabetic: "<<endl;
    for(int i=0;i<n;++i){
        cout<<"Studentul "<<i+1<<" : "<<v[i].nume<<endl;
    }
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(v[i].med>v[j].med){
                swap(v[i],v[j]);
            }
        }
    }
    cout<<endl<<"Tablou de studenti actualizat ordonat dupa medie crescator: "<<endl;
    for(int i=0;i<n;++i){
        cout<<"Studentul "<<i+1<<" : "<<v[i].nume<<" , medie: "<<v[i].med<<endl;
    }
    return 0;
}
