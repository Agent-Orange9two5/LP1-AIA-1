#include <iostream>

using namespace std;

struct stud
{
    char nume[50];
    int nota1,nota2;
    float nota_ex, med;
};

int main()
{
    stud student[30], temp;
    int n, i, ok;
    cout<<"introduceti nr de studenti: ";
    for(i=0;i<n;i++)
    {
        cout<<"ïntroduceti numele studentului ";
        cin>>student[i].nume;
        cout<<"nota1 ";
        cin>>student[i].nota1;
        cout<<"nota2 ";
        cin>>student[i].nota2;
        cout<<"nota examen ";
        cin>>student[i].nota_ex;
        student[i].med=(studenet[i].nota1+student[i].nota2)/2;
    }
    return 0;
}
