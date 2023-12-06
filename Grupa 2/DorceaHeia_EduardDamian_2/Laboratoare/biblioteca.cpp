#include <iostream>

using namespace std;
int i=0;

int biblioteca( int n){
    int anp[50],idunic[50],m,m2,c,c2,c3;
    char titlu[50][50],autor[50][50];
    for(i=0;i<n;i++) {
        cout<<"Cartea "<<i+1<<" are urmatoarele informatii:";
        cout<<"Titlul este "; cin>>titlu[i];
        cout<<endl;
        cout<<"Autorul este "; cin>>autor[i];
        cout<<endl;
        cout<<"Anul publicarii este "; cin>>anp[i];
        cout<<endl;
        cout<<"Id-ul unic este ";cin>>idunic[i];
        cout<<endl;

    }

    cout<<"Daca vrei sa cauti o carte introdu 1 altfel introdu 0"<<endl;
    cin>>c; cout<<endl;
    if (c==0) {
            cout<<"Daca vrei sa stergi o carte introdu 1 altfel introdu 0 pt a inchide programul"<<endl;
            cin>>m;
            if (m==1) {
                cout<<"Introdu ID-ul cartii care vrei sa fie sterse"<<endl;
                cin>>m2;
                for(i=0;i<n;i++) if(m2==idunic[i]) {
                    titlu[i][i]='0';
                    autor[i][i]='0';
                    anp[i]=0;
                    cout<<"Cartea a fost stearsa. ";

                }
            }

        else if (c==1) {
            cout<<"Introdu 1 pt a cauta dupa titlu, 2 pt a cauta dupa autor, 3 pt a cauta dupa anul publicarii"<<endl;
            cin>>c2;
            if(c2=1) {cout<<"Introduce titlu ";cin>>c3;}
               else if(c2==2) {cout<<"Introduce autor";cin>>c3;}
               else if(c2==3) {cout<<"Introduce anul publicarii";cin>>c3;}
            for(i=0;i<n;i++) {
                if (c3==titlu[i][i] || c3==autor[i][i] || c3==anp[i] ) {
        cout<<"Titlul este "; cout<<titlu[i][i];
        cout<<"Autorul este "; cout<<autor[i][i];
        cout<<"Anul publicarii este "; cout<<anp[i];
        cout<<"Id-ul unic este"; cout<<idunic[i];
                              }
                 }
        }
     }
}

int main(){
    int n;
    cout<<"Numarul de carti este ";cin>>n;
    cout<<biblioteca(n);
}
