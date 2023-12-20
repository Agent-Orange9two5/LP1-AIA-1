/*
a) Creați o structură pentru a reprezenta un contact în agenda telefonică, conținând numele, numărul de telefon și adresa de e-mail.
b) Citirea a n contacte de la tastatură (n ≤ 20), stocarea acestora într-un vector și afișarea acestora pe ecran și într-un fișier numit "Agenda.txt".
*/

#include <iostream>
#include <fstream>

using namespace std;

struct contact{
    char nume[100];
    long nr_tel;
    char email[100];
}c[20];

int main(){
    ofstream f("Agenda.txt");

    int n;

    cout << "Cate contacte vreti sa adaugati in agenda? ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Introduceti numele, numarul de telefon si e-mailul contactului " << i + 1 << ": ";
        cin >> c[i].nume >> c[i].nr_tel >> c[i].email;
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << "Numele contactului " << i + 1 << ": " << c[i].nume << endl;
        cout << "Numarul de telefon al contactului " << i + 1 << ": " << c[i].nr_tel << endl;
        cout << "E-mailul contactului " << i + 1 << ": " << c[i].email << endl;
    }

    for(int i = 0; i < n; i++){
        f << "Numele contactului " << i + 1 << ": " << c[i].nume << endl;
        f << "Numarul de telefon al contactului " << i + 1 << ": " << c[i].nr_tel << endl;
        f << "E-mailul contactului " << i + 1 << ": " << c[i].email << endl;
    }

    f.close();
    return 0;
}