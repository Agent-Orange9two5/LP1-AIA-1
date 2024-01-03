/* sa se creeze un struct elev care sa contina nume prenume cnp note(note contine nota 1 2 3,medie).
Sa se scrie intr un fisier in ordine alfabetica toti elevii cu medie mai mare decat 6*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>

using namespace std;

struct elev {
string nume;
string prenume;
int CNP;

struct {
    int n1;
    int n2;
    int n3;
    float medie;
 }note;
};

    bool sortaredupanume(elev a, elev b){
        return a.nume < b.nume;
        }

int main()
{
 int i,n;
 ofstream fout("elevi.txt");

   cout <<"Cati elevi doriti sa introduceti in fisier? : ";
   cin >> n;
  for (i=0; i<n; i++){
        elev elev;

     cout << "Numele elevului "<<i+1<<": ";
     cin >> elev.nume;
          cout << "Prenumele elevului "<<i+1<<": ";
       cin >> elev.prenume;
             cout << "CNP-ul elevului "<<i+1<<": ";
           cin >> elev.CNP;
              cout << "Cele 3 note ale elevului "<<i+1<<": ";
                cin >> elev.note.n1 >> elev.note.n2 >> elev.note.n3;
      elev.note.medie = (elev.note.n1 + elev.note.n2 + elev.note.n3) / 3.00;
                cout << "Media elevului "<<i+1<<": "<<setprecision(3) <<elev.note.medie;
           cout<<endl;


  if (elev.note.medie > 6){
  fout <<"Elevul "<<i+1<<"\n"<<"Nume: "<< elev.nume <<"\n"<<"Prenume: "<< elev.prenume <<"\n"<<"CNP: "<< elev.CNP << "\n" <<"Media notelor: "<< elev.note.medie <<endl;
  fout << endl;
    }
    else;
  }


  if (!fout.is_open()){
    cout <<"Eroare la scrierea elevilor in fisier!";}
    else{
        cout <<"Elevii au fost scrisi in fisier cu succes! Verificati fisierul \"elevi.txt\". ";}
fout.close();

  return 0;
}
/* Nu am finalizat sortarea alfabetica*/
