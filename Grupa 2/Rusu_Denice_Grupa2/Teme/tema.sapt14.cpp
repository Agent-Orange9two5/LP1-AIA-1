/* Sa se defineasca o structura elev: nume, prenume, cnp, adresa, note. Sa se defineasca struct note nota 1, nota 2, nota 3,
medie. Sa se afiseze in fisier toti elevii cu medie mai mare decat 6.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct elev
{
    string nume,cnp;
    struct
    {
        int nota1, nota2, medie;
    } note;
};
int main()
{
    int n;
    cout<<"Introduceti nr de elevi: ";
    cin>>n;
    elev e[10];
    for(int i=0; i<n; i++)
    {
        cout<<"Introduceti numele elevului "<<i+1<<": ";
        cin>>e[i].nume;
        cout<<"Introduceti CNP-ul elevului "<<i+1<<": ";
        cin>>e[i].cnp;
        cout<<"Introduceti prima nota a elevului "<<i+1<<": ";
        cin>>e[i].note.nota1;
        cout<<"Introduceti a doua nota a elevului "<<i+1<<": ";
        cin>>e[i].note.nota2;
        cout<<"Introduceti media elevului "<<i+1<<": ";
        cin>>e[i].note.medie;
    }
    ofstream g("Elevi.txt");
    for(int i=0;i<n;i++)
    {
        if(e[i].note.medie>6)
        {
            g<<e[i].nume<<endl;
        }
    }
    g.close();
    return 0;
}
