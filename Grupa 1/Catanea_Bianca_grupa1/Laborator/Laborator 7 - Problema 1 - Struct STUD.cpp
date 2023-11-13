#include <iostream>
#include <cstring>

using namespace std;

struct stud
{
    char nume[50];
    int nota1, nota2;
    float nota_examen, media;
};

int main()
{
    stud student[30], temp;
    int n,i,ok;
    cout << "Introduceti numarul de studenti: ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "Introduceti numele studentului: ";
        cin >> student[i].nume;
        cout << "Introduceti nota 1: ";
        cin >> student[i].nota1;
        cout << "Introduceti nota 2: ";
        cin >> student[i].nota2;
        cout << "Introduceti nota examen: ";
        cin >> student[i].nota_examen;
        student[i].media  =(student[i].nota1+student[i].nota2)/2*0.4+0.6*student[i].nota_examen;
    }
    cout << "Sortare alfabetica: " << endl;
    do
    {
        ok = 1;
        for(i=0;i<n-1;i++)
            if(strcmp(student[i].nume, student[i+1].nume) > 0) //comparam sirurile
            {
                temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
                ok=0;
            }
    }
    while(ok == 0);
    for(i=0;i<n;i++)
        cout << student[i].nume<< " " << student[i].media << endl;
    cout << "Sortare dupa medie: " << endl;
    do
    {
        ok = 1;
        for(i=0;i<n-1;i++)
            if(student[i].media > student[i+1].media)
            {
                temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
                ok=0;
            }
    }
    while(ok ==0 );
    for(i=0;i<n;i++)
        cout << student[i].nume<< " " << student[i].media <<endl;
    return 0;
}
