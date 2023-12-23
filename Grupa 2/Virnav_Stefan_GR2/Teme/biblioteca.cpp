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
#include <fstream>
#include <cstdlib>
using namespace std;

//Stiu ca programul ar fi mai eficient  cu un array pentru run time (pentru stergerea de carti)fata de un list dar am realizat asta prea tarziu.
ofstream f("Biblioteca.txt");
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
                cin.ignore();
                cin.getline(biblioteca[stocare].autor,50);
                cout<<"\t|Introduceti numele cartii|"<<endl<<"\t   Raspuns:";
                cin.getline(biblioteca[stocare].titlu,50);
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
    int conditie,i,rasp_2;
    char rasp[50];
    while(cout<<"\t=====================================\n"<<"\t|Selectati dupa ce doriti sa cautati|"<<endl<<"\t|\t[1]Dupa autor\t\t    |"
          <<endl<<"\t|\t[2]Dupa nume\t\t    |"<<endl<<"\t|\t[3]Dupa anul aparitie\t    |"<<endl<<"\t|\t[4]Inapoi\t\t    |"<<endl
          <<"\t=====================================\n"<<endl<<"\t\tRaspuns:" && (!(cin>>conditie) || conditie>4 ||  conditie < 1))
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
                    cout<<"Autor:"<<biblioteca[i].autor<<" || Titlu: "<<biblioteca[i].titlu<<" || An: "<< biblioteca[i].an<<" || Id: "<<biblioteca[i].id<<endl;
            break;
        case 2:
            cout<<"\t|Introduceti numele cartii pe care doriti sa o cautati|"<<endl<<"\t   Raspuns:";
            cin.ignore();
            cin.getline(rasp,50);
            for(int i=0;i<stocare;i++)
                if(strcmp(biblioteca[i].titlu,rasp)==0)
                    cout<<"Autor:"<<biblioteca[i].autor<<" || Titlu: "<<biblioteca[i].titlu<<" || An: "<< biblioteca[i].an<<" || Id: "<<biblioteca[i].id<<endl;
            break;
        case 3:
            cout<<"\t|Introduceti anul in care a aparut cartea:|"<<endl<<"\t   Raspuns:";
            cin>>rasp_2;
            for(int i=0;i<stocare;i++)
                if(biblioteca[i].an==rasp_2)
            cout<<"Autor:"<<biblioteca[i].autor<<" || Titlu: "<<biblioteca[i].titlu<<" || An: "<< biblioteca[i].an<<" || Id: "<<biblioteca[i].id<<endl;
            break;
        case 4:
            system("cls");
            break;
        }


}
void stergere()
{
    int rasp;
    bool loc=false;
  cout<<"\t|Introduceti id-ul cartii pe care doriti sa o stergeti|"<<endl<<"\tRaspuns:";
  cin>>rasp;
  for(int i=0;i<stocare;i++)
    if(biblioteca[i].id==rasp)
    {
    loc=true;
      for(int j=i;j<stocare-1;j++)
        biblioteca[j]=biblioteca[j+1];
      stocare--;
    }
    if(!loc)
        cout<<"\t|Cartea nu exista in biblioteca|"<<endl;

}
void salvare()
{
 for(int i=0;i<stocare;i++)
    f<<biblioteca[i].autor<<" "<<biblioteca[i].titlu<<" "<<biblioteca[i].an<<" "<<biblioteca[i].id;
 cout<<"\tBiblioteca a fost salvate cu succes"<<endl;
 Sleep(1500);
 system("cls");

}
void stergere_f()
{
    ofstream file("biblioteca.txt", ios::trunc);
    if(file.is_open())
        file.close();
    cout<<"\tBiblioteca a fost stearsa cu succes"<<endl;
    Sleep(1500);
    system("cls");
}
void inventar()
{
    for(int i=0;i<stocare;i++)
        cout<<"Autor:"<<biblioteca[i].autor<<" || Titlu: "<<biblioteca[i].titlu<<" || An: "<< biblioteca[i].an<<" || Id: "<<biblioteca[i].id<<endl;

}



int main()
{
    int condition=1;
    int response;
    while(condition)
    {
        cout<< "\t=================================\n";
        cout<< "\t|"<<"Selectati ce doriti sa faceti:\t|"<<endl<<"\t|-------------------------------|"<<endl
        <<"\t|\t[1]Adaugare carti\t|"<<endl<<"\t|\t[2]Cautare carti \t|"<<endl<<"\t|\t[3]Stergere carti\t|"<<endl
        <<"\t|\t[4]Salvare fisier\t|"<<endl<<"\t|\t[5]Stergere fisier\t|"<<endl<<"\t|\t[6]Inventar\t\t|"<<endl<<"\t|\t[7]Iesire\t\t|"<<endl
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
                if(!stocare)//Pt cazul cand nu avem inca nimic in lista
                cautare();
                else    {
                        cout<<"\t|EROARE,IN LIBRARIE NU EXISTA CARTI|"<<endl;
                        Sleep(1500);
                        system("cls");
                        }

                break;
            }
        case 3:
            {
                Sleep(250);
                system("cls");
                if(stocare)//Pt cazul cand nu avem inca nimic in lista
                stergere();
                else    {
                        cout<<"\t|EROARE,IN LIBRARIE NU EXISTA CARTI|"<<endl;
                        Sleep(1500);
                        system("cls");
                        }
                break;
            }
        case 4:
        {
            salvare();
            break;
        }
        case 5:
        {
            stergere_f();
            break;
        }
        case 6:
        {
                Sleep(250);
                system("cls");
                if(stocare)//Pt cazul cand nu avem inca nimic in lista
                inventar();
                else    {
                        cout<<"\t|EROARE,IN LIBRARIE NU EXISTA CARTI|"<<endl;
                        Sleep(1500);
                        system("cls");
                        }
                break;
        }
        case 7:
            system("cls");
            cout<<"\t|PROGRAMUL SE INCHIDE.MULTUMIM PENTRU UTILIZARE|"<<endl;
            Sleep(2000);
            system("cls");
            condition=0;//exist the loop


        }

    }
    f.close();
    return 0;
}
