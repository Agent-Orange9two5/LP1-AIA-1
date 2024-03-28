#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
using namespace std;

ofstream f("users.txt");
ifstream v("users.txt");
const int marime_maxima=100;
struct user
{
 char username[50];
 char password[50];
 int cash;
 int id;
};
int stocare=0,counter=0;//counter=Nr users maxim
user biblioteca[marime_maxima];
void regist()
{
       if(stocare<marime_maxima)
            {
                //adaugare user
                cout<<"\t|Introduceti username-ul|"<<endl<<"\t   Raspuns:";
                cin.ignore();
                cin.getline(biblioteca[stocare].username,50);
                f<<biblioteca[stocare].username<<" ";
                cout<<"\t|Introduceti parola dorita|"<<endl<<"\t   Raspuns:";
                cin.getline(biblioteca[stocare].password,50);
                f<<biblioteca[stocare].password<<" ";
                biblioteca[stocare].cash=0;
                f<<biblioteca[stocare].cash;
                f<<endl;
                //generare id unic
                biblioteca[stocare].id=counter;
                counter++;
                stocare++;
                cout<<"\t|User has been added succesfully|";
                Sleep(1500);
                system("cls");
            }
        else
        {
            cout<<"Max size reached.Data base is full"<<endl;
        }

}
void login()
{
    string line;
    if (v.is_open()) {
        while (getline(v, line)) {
            cout << line << "\n";
        }
    Sleep(1500);
    system("cls");
}
}
int main()
{
    int condition=1;
    int response;
    while(condition)
    {
        cout<< "\t=================================\n";
        cout<< "\t|"<<"Selectati ce doriti sa faceti:\t|"<<endl<<"\t|-------------------------------|"<<endl
        <<"\t|\t[1]Register user\t|"<<endl<<"\t|\t[2]Cautare carti \t|"<<endl<<"\t|\t[3]Stergere carti\t|"<<endl
        <<"\t|\t[4]Salvare fisier\t|"<<endl<<"\t|\t[5]Stergere fisier\t|"<<endl<<"\t|\t[6]Inventar\t\t|"<<endl<<"\t|\t[7]Iesire\t\t|"<<endl
        <<"\t|\t\t\t\t|"<<endl<<"\t=================================\n"<<endl<<"\t\t   Raspuns:";
        cin>>response;
        switch(response)
        {
        case 1:
            {
                Sleep(250);
                system("cls");
                regist();
                break;
            }
        case 2:
            {
                Sleep(250);
                system("cls");
                login();
                break;
            }

        /*
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
    */
    }
    }
    f.close();
    return 0;
}

