#include <iostream>

using namespace std;
struct stud
{
    char nume[50];
    int nota1, nota2;
    float nota_ex, med;
};
int main()
{
    stud student[30],temp;
    int n, i, ok;
    cout<<"Introduceti nr de studenti: ";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Introduceti numele studentului: ";
        cin<<student[i].nume;
        cout<<"Introduceti nota 1: ";
        cin>>student[i].nota1;
        cout<<"Introduceti nota 2: ";
        cin>>student[i].nota2;
        cout<<"Introduceti nota examen: ";
        cin>>student[i].nota_ex;
        student[i].med=(student[i].nota1+student[i].nota2)/2*0.4+0.6*student[i].nota_ex;
    }
    return 0;
}
