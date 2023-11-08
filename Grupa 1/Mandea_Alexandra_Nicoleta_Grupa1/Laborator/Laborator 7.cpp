#include <iostream>
#include <cstring>

using namespace std;

/*

struct stud
{
    char nume[50];
    int nota1,nota2;
    float nota_ex,med;
};

*/

enum Culoare
{
    NEGRU,
    BEJ,
    ALB,
    VERDE,
    ALBASTRU,
    ROSU
};

struct Masina
{
    char marca[500],mode[50];
    unsigned short anFabricatie;
    char numarInmatriculare[8];
    enum Culoare color;
};

struct Masina citesteMasina()
{
    struct Masina masina;
    printf("Care este marca masinii? ");
    fgets(masina.marca,100,stdin);
    printf("Care este marca masinii? ");
    fgets(masina.marca,50,stdin);
    printf("Care este numarul de imatriculare al masinii? ");
    fgets(masina.numarInmatriculare,8,stdin);
    masina.color=ROSU;
    printf("Care este anul de fabricatie a masinii? ");
    scanf("%hu",&masina.anFabricatie);
    return masina;
};

void afiseazaMasina(struct Masina masina)
{
    printf("Masina marca %s si modelul %s are numarul de inmatriculare ");
}

int main()
{
    /*
    stud student[30],temp;
    int n,i,ok;
    cout<<"Introduceti numarul de studenti: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        //cin.get();
        cout<<"Introduceti numele de studenti: ";
        cin>>student[i].nume;
        cout<<"Introduceti nota 1: ";
        cin>>student[i].nota1;
        cout<<"Introduceti nota 2: ";
        cin>>student[i].nota2;
        cout<<"Introduceti nota examen: ";
        cin>>student[i].nota_ex;
        student[i].med=(student[i].nota1+student[i].nota2)/2*0.4+0.6*student[i].nota_ex;
    }
    cout<<"Sortarea alfabetica"<<endl;
    do
    {
        ok=1;
        for(i=0;i<n-1;i++)
            if(strcmp(student[i].nume,student[i+1].nume)>0)
        {
            temp=student[i];
            student[i]=student[i+1];
            student[i+1]=temp;
            ok=0;
        }
    }while(ok==0);
    for(i=0;i<n;i++)
        cout<<student[i].nume<<" "<<student[i].med<<endl;
    cout<<"Sortare dupa medie"<<endl;
    do
    {
        ok=1;
         for(i=0;i<n-1;i++)
            if(student[i].med>student[i+1].med)
        {
            temp=student[i];
            student[i]=student[i+1];
            student[i+1]=temp;
            ok=0;
        }
    }while(ok==0);
    for(i=0;i<n;i++)
        cout<<student[i].nume<<" "<<student[i].med<<endl;

    */

    struct Masina parcAuto[10];
    parcAuto[0]=citesteMasina();
    afiseazaMasina(parcAuto[0]);

    return 0;
}
