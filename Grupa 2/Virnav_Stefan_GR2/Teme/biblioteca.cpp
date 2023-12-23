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
#include <cstring>
#include <windows.h>
using namespace std;

//Stiu ca programul ar fi mai eficient  cu un array pentru run time (pentru stergerea de carti)fata de un list dar am realizat asta prea tarziu.

const int marime_maxima=100;
struct carte
{
 char autor[50];
 char titlu[50];
 int an;
 int id;
};
int stocare=0,counter=0;//counter=Nr carti totale generate vreodata si stocare=Nr carti actuale in sistem
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
                while(cout<<"\t|Introduceti anul aparatiei|"<<endl<<"\t   Raspuns:" && (!(cin>>biblioteca[stocare].an) || biblioteca[stocare].an>2024))
                {
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cout<<"\n\n\t\|INPUT INCORECT.REINTRODUCETI|\n";
                    Sleep(1500);//Am adaugat sleep pentru a da timp utilizatoruli sa citeasca eroarea inainte de clear
                    system("cls");
                }
                //generare id unic
                biblioteca[stocare].id=counter;
                counter++;
                stocare++;
                if(n>1)
                cout<<"\t|Cartea NR"<<i+1<<" a fost adaugata cu succes!|"<<endl<<endl;
                else
                cout<<"\t|!Cartea a fost adaugate cu succes!|";
                Sleep(1500);
                system("cls");
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
    int conditie,i;
    char rasp[50];
    while(cout<<"Selectati dupa ce doriti sa cautati:"<<endl<<"1)Dupa autor"<<endl<<"2)Dupa nume"
            <<endl<<"3)Dupa anul aparitie"<<endl && (!(cin>>conditie) || conditie>3 ||  conditie < 1))
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"Eroare.Va rog introduceti o varianta valida"<<endl;
        Sleep(750);
        system("cls");
    }
        switch(conditie)
        {
        case 1:
            cout<<"\t|Introduceti numele autorului pe care doriti sa il cautati|"<<endl<<"\t   Raspuns:";
            cin.ignore();
            cin.getline(rasp,50);
            for(i=0;i<stocare;i++)
                if(strcmp(biblioteca[i].autor,rasp)==0)
                    cout<<biblioteca[i].autor<<" || "<<biblioteca[i].titlu<<" || "<< biblioteca[i].an<<" || "<<biblioteca[i].id<<endl;
            break;
        case 2:
            cout<<"\tIntroduceti numele cartii pe care doriti sa o cautati|"<<endl<<"\t   Raspuns:";
            cin.ignore();
            cin.getline(rasp,50);
            for(int i=0;i<stocare;i++)
                if(strcmp(biblioteca[i].titlu,rasp)==0)
                    cout<<biblioteca[i].autor<<" || "<<biblioteca[i].titlu<<" || "<< biblioteca[i].an<<" || "<<biblioteca[i].id<<endl;
            break;
        }


}
void stergere();
void salvare();



int main()
{
    int condition=1;
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
        {
            Sleep(250);
            system("cls");
            int n;
            cout<<"\t|Cate carti doriti sa adaugati?|"<<endl<<"\t\t   Raspuns:";
            cin>>n;
            adaugare(n);
            break;
        }


        case 2:
        {
            Sleep(250);
            system("cls");
            if(stocare)//Pt cazul cand nu avem inca nimic in lista
            cautare();
            break;
        }

        }

    }
    return 0;
}
