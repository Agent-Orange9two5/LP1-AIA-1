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
#include <fstream>
#include <string>

using namespace std;

// Structura pentru reprezentarea unei cărți
struct Carte {
    string titlu;
    string autor;
    int anPublicare;
    int id; // Identificator unic pentru fiecare carte
};

// Definirea dimensiunii maxime a bibliotecii
const int DIMENSIUNE_MAXIMA = 100;

// Structura pentru stocarea informațiilor despre cărți
Carte biblioteca[DIMENSIUNE_MAXIMA];
int numarCarti = 0; // Numărul de cărți în bibliotecă

// Functie pentru adaugarea unei carti in biblioteca
void adaugaCarte() {
    if (numarCarti >= DIMENSIUNE_MAXIMA) {
        cout << "Biblioteca este plina. Nu se mai pot adauga carti." << endl;
        return;
    }

    cout << "Introduceti titlul cartii: ";
    cin.ignore();
    getline(cin, biblioteca[numarCarti].titlu);

    cout << "Introduceti autorul cartii: ";
    getline(cin, biblioteca[numarCarti].autor);

    cout << "Introduceti anul publicarii: ";
    cin >> biblioteca[numarCarti].anPublicare;

    // Generare identificator unic pentru carte (puteti folosi un contor sau un generator random)
    biblioteca[numarCarti].id = numarCarti + 1;

    numarCarti++;

    cout << "Cartea a fost adaugata cu succes in biblioteca!" << endl;
}

// Functie pentru cautarea cartilor dupa anul publicarii
void cautaCartiDupaAn(int anCautat) {
    cout << "Cartile publicate in anul " << anCautat << " sunt:" << endl;
    bool gasit = false;

    for (int i = 0; i < numarCarti; ++i) {
        if (biblioteca[i].anPublicare == anCautat) {
            cout << "ID: " << biblioteca[i].id << " | Titlu: " << biblioteca[i].titlu << " | Autor: " << biblioteca[i].autor << endl;
            gasit = true;
        }
    }

    if (!gasit) {
        cout << "Nu s-au gasit carti publicate in anul " << anCautat << "." << endl;
    }
}

// Functie pentru stergerea unei carti din biblioteca
void stergeCarte(int idStergere) {
    bool gasit = false;
    for (int i = 0; i < numarCarti; ++i) {
        if (biblioteca[i].id == idStergere) {
            // Eliminarea cartii prin deplasarea informatiilor pentru a suprascrie cartea curenta
            for (int j = i; j < numarCarti - 1; ++j) {
                biblioteca[j] = biblioteca[j + 1];
            }
            numarCarti--;
            gasit = true;
            break;
        }
    }

    if (gasit) {
        cout << "Cartea cu ID-ul " << idStergere << " a fost stearsa din biblioteca." << endl;
    } else {
        cout << "Nu s-a gasit nicio carte cu ID-ul " << idStergere << "." << endl;
    }
}

// Functie pentru salvarea bibliotecii in fisier
void salveazaInFisier(const char* numeFisier) {
    ofstream file(numeFisier);
    if (file.is_open()) {
        for (int i = 0; i < numarCarti; ++i) {
            file << "ID: " << biblioteca[i].id << " | Titlu: " << biblioteca[i].titlu << " | Autor: " << biblioteca[i].autor << " | An: " << biblioteca[i].anPublicare << endl;
        }
        file.close();
        cout << "Biblioteca a fost salvata in fisierul '" << numeFisier << "'." << endl;
    } else {
        cout << "Eroare la deschiderea fisierului." << endl;
    }
}

// Functie pentru stergerea continutului unui fisier
void stergeContinutFisier(const char* numeFisier) {
    ofstream file(numeFisier, ios::trunc);
    if (file.is_open()) {
        file.close();
        cout << "Continutul fisierului '" << numeFisier << "' a fost sters." << endl;
    } else {
        cout << "Eroare la deschiderea fisierului." << endl;
    }
}


int main() {
    // Exemplu de utilizare a funcțiilor definite mai sus
    adaugaCarte();
    adaugaCarte();
    adaugaCarte();

    cautaCartiDupaAn(2005);

    stergeCarte(2);

    salveazaInFisier("biblioteca1.txt");

    //stergeContinutFisier("biblioteca1.txt");

    return 0;
}



/*
Atunci când se deschide un fișier în modul ios::trunc, orice conținut existent în fișier este șters înainte de a începe să se scrie în el.
Dacă fișierul există deja, conținutul său este golit. Dacă fișierul nu există, este creat unul nou.

În contextul în care se folosește funcția "stergeContinutFisier" din codul dat anterior, ios::trunc este utilizat pentru a asigura că conținutul fișierului "biblioteca1.txt" este
șters înainte de a începe să se scrie în el, asigurând că fișierul va fi golit înainte de a fi folosit pentru a salva date noi.

Să presupunem că există conținut în fișierul "biblioteca1.txt" și utilizăm ios::trunc pentru a deschide fișierul în modul de scriere
în acest caz, conținutul anterior al fișierului va fi eliminat și fișierul va fi golit pentru a permite scrierea de date noi sau actualizate.
*/
