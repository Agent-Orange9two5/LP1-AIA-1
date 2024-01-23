#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ofstream db("elevi.txt", ios::app);
ofstream ele_n6("note_peste_6.txt", ios::app);

struct elev{
    char nume[100], prenume[100], adresa[100], cnp[20];
    float n_1, n_2, n_3, medie;
}bd;

float Calculator_medie(float x,float y,float z){
    return (x+y+z)/3;

}
bool ValidareCNP(const char* cnp) {
    if (strlen(cnp)!=13) {
        return false;}
    for (int j=0;j<strlen(cnp);++j) {
        if (!isdigit(cnp[j])) {
            return false;}}
    return true;
}
int main()
{
    int n,i;
    char con;
    cout<<" >> Introduceti cati elevi doriti sa adaugati: "; cin>> n;
    for (i=0; i<n; i++) {
        system("cls");
        cin.ignore();
        cout<<"| Nume: | Prenume: | Adresa: | CNP: | Nota 1: | Nota 2: | Nota 3: | Medie: |"<<endl<<endl;
        cout<<" >> Introduceti numele elevului cu numarul "<<i+1<<" : ";
        cin.getline(bd.nume, 100);
        system("cls");
        cout<<"| Nume: "<<bd.nume<<" | Prenume: | Adresa: | CNP: | Nota 1: | Nota 2: | Nota 3: | Medie: |"<<endl<<endl;
        cout<<" >> Introduceti prenumele elevului cu numarul "<<i+1<<" : ";
        cin.getline(bd.prenume, 100);
        system("cls");
        cout<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: | CNP: | Nota 1: | Nota 2: | Nota 3: | Medie: |"<<endl<<endl;
        cout<<" >> Introduceti adresa elevului cu numarul "<<i+1<<" : ";
        cin.getline(bd.adresa, 100);
        system("cls");
        cout<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: | Nota 1: | Nota 2: | Nota 3: | Medie: |"<<endl<<endl;
        do {
            cout << " >> Introduceti CNP-ul elevului cu numarul " << i + 1 << " : ";
            cin >> bd.cnp;

            if (!ValidareCNP(bd.cnp)) {
                cout << " >> CNP-ul este invalid! Te rugam sa incerci din nou" << endl;
            }
        } while (!ValidareCNP(bd.cnp));
        system("cls");
        cout<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: "<<bd.cnp<<" | Nota 1: | Nota 2: | Nota 3: | Medie: |"<<endl<<endl;
        do {
            cout << " >> Introduceti prima nota a elevului cu numarul " << i + 1 << " : ";
            cin >> bd.n_1;
            if (bd.n_1 < 1 || bd.n_1 > 10) {
                cout << " >> Nota trebuie sa fie intre 1 si 10." << endl;
            }
        } while (bd.n_1 < 1 || bd.n_1 > 10);
        system("cls");
        cout<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: "<<bd.cnp<<" | Nota 1: "<<bd.n_1<<" | Nota 2: | Nota 3: | Medie: |"<<endl<<endl;
        do {
            cout << " >> Introduceti a doua nota a elevului cu numarul " << i + 1 << " : ";
            cin >> bd.n_2;

            if (bd.n_2 < 1 || bd.n_2 > 10) {
                cout << " >> Nota trebuie sa fie intre 1 si 10." << endl;
            }
        } while (bd.n_2 < 1 || bd.n_2 > 10);
        system("cls");
        cout<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: "<<bd.cnp<<" | Nota 1: "<<bd.n_1<<" | Nota 2: "<<bd.n_2<<" | Nota 3: | Medie: |"<<endl<<endl;
        do {
            cout << " >> Introduceti a treia nota a elevului cu numarul " << i + 1 << " : ";
            cin >> bd.n_3;

            if (bd.n_3 < 1 || bd.n_3 > 10) {
                cout << " >> Nota trebuie sa fie intre 1 si 10." << endl;
            }
        } while (bd.n_3 < 1 || bd.n_3 > 10);
        system("cls");
        cout<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: "<<bd.cnp<<" | Nota 1: "<<bd.n_1<<" | Nota 2: "<<bd.n_2<<" | Nota 3: "<<bd.n_3<<" | Medie: |"<<endl<<endl;
        bd.medie = Calculator_medie(bd.n_1, bd.n_2, bd.n_3);
        do {
            cout << " >> Esti sigur ca vrei sa adaugi aceste date in fisier? Y/N: ";
            cin >> con;
            con = toupper(con);
        } while (con != 'Y' && con != 'N');

        if (con == 'Y') {
            if (bd.medie > 6) {
                ele_n6<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: "<<bd.cnp<<" | Nota 1: "<<bd.n_1<<" | Nota 2: "<<bd.n_2<<" | Nota 3: "<<bd.n_3<<" | Medie: "<<bd.medie<<" |"<<endl;
                ele_n6.close();
        }
         db<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: "<<bd.cnp<<" | Nota 1: "<<bd.n_1<<" | Nota 2: "<<bd.n_2<<" | Nota 3: "<<bd.n_3<<" | Medie: "<<bd.medie<<" |"<<endl;
        db.close();
        system("cls");
         cout<<"| Nume: "<<bd.nume<<" | Prenume: "<<bd.prenume<<" | Adresa: "<<bd.adresa<<" | CNP: "<<bd.cnp<<" | Nota 1: "<<bd.n_1<<" | Nota 2: "<<bd.n_2<<" | Nota 3: "<<bd.n_3<<" | Medie: "<<bd.medie<<" |"<<endl;
        cout << " >> Ai adaugat datele in fisier" << endl;
    } else {
           cout << " >> Nu ai adaugat datele in fisier" << endl;
       }

    }
    system("cls");
    system("color a");
    cout<<" >> Notele elevilor cu media peste 6 au fost adaugati in fisierul (ele_n6.txt)! "<<endl;
    cout<<" >> Toti elevii : Fisier elevi.txt<<"<<endl;
    cout<<" >> Elevii cu media peste 6 : Fisier note_peste_6<<"<<endl;
    return 0;
}
