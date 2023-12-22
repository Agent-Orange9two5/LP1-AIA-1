/* Să se creeze un program care gestionează o bibliotecă digitală. Programul ar trebui să utilizeze alocare dinamică pentru a gestiona diferitele cărți din bibliotecă.
Fiecare carte trebuie să fie reprezentată de o structură de date care să conțină următoarele informații: titlu, autor, anul publicării și un identificator unic.

În plus, programul ar trebui să ofere următoarele funcționalități:

- Adăugarea de cărți: Utilizatorul poate introduce informațiile despre o nouă carte (titlu, autor, anul publicării) și aceasta va fi adăugată în bibliotecă.
Identificatorul unic al cărții va fi generat în mod dinamic.

- Căutarea cărților: Utilizatorul poate căuta cărți în bibliotecă după titlu, autor sau anul publicării și programul va afișa toate cărțile care corespund căutării.

- Ștergerea cărților: Utilizatorul poate șterge o carte din bibliotecă, introducând identificatorul unic al cărții.

- Salvarea și stergerea bibliotecii în/din fișier: Programul ar trebui să permită salvarea bibliotecii într-un fișier text și stergerea acesteia din fișier.
*/
#include <iostream>
#include <windows.h>
using namespace std;



const int marime_maxima=100;
struct carte
{
 char autor[50];
 char titlu[50];
 int an;
 int id;
};
int stocare=0,counter=0;
carte biblioteca[marime_maxima];
void adaugare(int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       if(stocare<marime_maxima)
            {
                //adaugare carte
                cout<<"\t|Introduceti numele autorului|"<<endl<<"\t   Raspuns:";
                cin>>biblioteca[stocare].autor;
                cout<<"\t|Introduceti numele cartii|"<<endl<<"\t   Raspuns:";
                cin>>biblioteca[stocare].titlu;
                //Aici am incercat sa adug un type checker in cazul in care utilizatorul introduce altceva inafara de un numar intreg"
                while(cout<<"\t|Introduceti anul aparatiei|" && (!(cin>>biblioteca[stocare].an) || biblioteca[stocare].an>2024))
                {
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cout<<"\n\n\t\|INPUT INCORECT.REINTRODUCETI|\n";
                    Sleep(1500);
                    system("cls");
                }
                //generare id unic
                biblioteca[stocare].id=counter;
                counter++;
                if(n>1)
                cout<<"Cartea nr"<<i+1<<" a fost adaugata cu succes!"<<endl<<endl;
                else
                cout<<"Cartea a fost adaugate cu succes!";
            }
        else
        {
            cout<<"Max size reached.Delete old books before trying again"<<endl;
            break;
        }

   }
}
void cautare()
{
    cout<<"Selectati dupa ce doriti sa cautati:"<<endl
    <<"1)Dupa nume"<<endl<<"2)Dupa autor"<<endl<<"3)Dupa anul aparitie"<<endl;
    int condition;
    while(!cin>>condition || condition>0 || condition <4)
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"Eroare.Va rog introduceti o varianta valida"<<endl;
    }
}
void stergere();
void salvare();



int main()
{
    bool condition=true;
    int response;
    while(condition)
    {
        cout<< "\t=================================\n";
        cout<< "\t|"<<"Selectati ce doriti sa faceti:\t|"<<endl<<"\t|-------------------------------|"<<endl
        <<"\t|\t[1]Adaugare carti\t|"<<endl<<"\t|\t[2]Cautare carti \t|"<<endl
        <<"\t|\t[3]Stergere carti\t|"<<endl<<"\t|\t[4]Salvare fisier\t|"<<endl
        <<"\t|\t\t\t\t|"<<endl<<"\t=================================\n"<<endl<<"\t\t   Raspuns:";
        cin>>response;
        switch(response)
        {
        case 1:
            Sleep(250);
            system("cls");
            cout<<"\t|Cate carti doriti sa adaugati?|"<<endl;
            cout<<"\t\t   Raspuns:";
            int n;
            cin>>n;
            adaugare(n);
        }
    }
    return 0;
}
