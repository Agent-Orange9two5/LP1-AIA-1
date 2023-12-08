/* Biblioteca Digitala

 Functionalitati:
  - O structura de tip Carte, care sa contina urmatoarele info: titlu, autor, anul publicarii si un identificator unic
    // Pentru aceasta functionalitate vom crea un struct care sa contina toate tipurile de date necesare ✔
 
  - Adaugarea de carti: Utilizatorul poate introduce informatiile despre o carte noua si aceasta va fi adaugata in biblioteca
  // Pentru aceaste functionalitate vom cere utilizatorului sa introduca, in ordine, toate datele necesare ( titlu, autor, anul publicarii )
  
  - Cautarea cartilor: Utilizatorul poate cauta carti in biblioteca dupa titlu, autor sau anul publicarii.
  // Prima idee - Cautare folosind strchr
  
  - Stergerea cartilor: Utilizatorul poate sterge o carte din biblioteca, introducand identificatorul unic al cartii.
  // Aceasta functionalitate va functiona asemanator cu cea de adaugare, avand la final o verificare - in cazul in care toate datele sunt 100% corecte, cartea va fi stersa.
  
  - Salvarea si stergerea bibliotecii in / din fisier: Programul ar trebui sa permita salvarea bibliotecii intr-un fisier text si stergerea acesteia din fisier.
  
  User Flow: Se ruleaza programul. 
 */
 
 

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream f("library.in");
ofstream g("library.out");


struct Biblioteca
{
    Carte* carti;
    int nrCarti;
};

struct Carte{
char titlu[51];
char autor[51];
int an_publicare;
int isbn;
};

void AdaugareCarte
{
        
}

void CautareCarti(int nrCarti)
{
    for(int i = 0; i < nrCarti; i++ )
    {
        bool k = false;
        
    }
    
}

void StergereCarti
{
    
}

void SalvareStergereFisier
{
    
}

void Afisare
{
    g<<"Titlul cartii este: "<<carte.titlu;
    g<<"Autorul cartii este: "<<carte.autor;
    g<<"Anul in care a fost publicata cartea este: "<<carte.an_publicare;
    g<<"Codul unic de identificare al cartii este: "<<carte.isbn;
    
}

int main()
{
        
}


