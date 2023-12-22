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
                cout<<"Introduceti numele autorului: ";
                cin>>biblioteca[stocare].autor;
                cout<<"Introduceti numele cartii: ";
                cin>>biblioteca[stocare].titlu;
                //Aici am incercat sa adug un type checker in cazul in care utilizatorul introduce altceva inafara de un numar intreg"
                while(cout<<"Introduceti anul aparatie: " && (!(cin>>biblioteca[stocare].an) || biblioteca[stocare].an>2024))
                {
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cout<<"Input incorect,va rog reintroduceti\n";
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
    while(condition)
    {
        cout<<
    }
    return 0;
}
