#include <iostream>
#include <stdio.h>

using namespace std;
struct stud{
    char nume[50];
    int nota1,nota2;
    float nota_ex,med;
};
int main()
{
    stud student[50],temp;
    int n,i,ok;
    cout<<"Introduceti numarul de studenti: ";cin>>n;
    for (i=0; i<n; i++) {
        cout<<"Introduceti numele studentului: ";
        cin>>student[i].nume;
        cout<<"introduceti nota 1: ";
        cin>>student[i].nota1;
        cout<<"introduceti nota 2: ";
        cin>>student[i].nota2;
        cout<<"introduceti nota examen: ";
        cin>>student[i].nota_ex;
        student[i].med=(student[i].nota1+student[i].nota2)/2*0.4+0.6*student[i].nota_ex;
        cout<<"Elevul: "<<student[i].nume<<" are media: "<<student[i].med;

    }
    return 0;
}
