/* sa se creeze un struct elev care sa contina nume prenume cnp note(note contine nota 1 2 3,medie).
Sa se scrie intr un fisier in ordine alfabetica toti elevii cu medie mai mare decat 6*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

struct Elev {
string nume;
string prenume;
long long int CNP;

struct {
    int n1;
    int n2;
    int n3;
    float medie;
 }note;
};

    bool sortaredupanume(const Elev &a, const Elev &b){
        return a.nume < b.nume;
        }

int main()
{
 int i,n;
 ofstream fout("elevi.txt");

   cout <<"Cati elevi doriti sa introduceti in fisier? : ";
   cin >> n;
   vector <Elev> elevi;
  for (i=0; i<n; i++){
        Elev elev;

     cout << "Numele elevului "<<i+1<<": ";
     cin >> elev.nume;
          cout << "Prenumele elevului "<<i+1<<": ";
       cin >> elev.prenume;
             cout << "CNP-ul elevului "<<i+1<<": ";
           cin >> elev.CNP;
              cout << "Cele 3 note ale elevului "<<i+1<<": ";
                cin >> elev.note.n1 >> elev.note.n2 >> elev.note.n3;
      elev.note.medie = (elev.note.n1 + elev.note.n2 + elev.note.n3) / 3.00;
                cout << "Media elevului "<<i+1<<": "<<setprecision(3) <<elev.note.medie<<endl;
           cout<<endl;
           elevi.push_back(elev);
       }

  sort(elevi.begin(), elevi.end(), sortaredupanume);
  bool found = false;

  for (const auto &elev:elevi){
  if (elev.note.medie > 6){
  fout <<"Elevul: "<<"\n"<<"Nume: "<< elev.nume <<"\n"<<"Prenume: "<< elev.prenume <<"\n"<<"CNP: "<< elev.CNP << "\n" <<"Media notelor: "<< elev.note.medie <<endl;
  fout << endl;
  found = true;
    }
  }
  if (!fout.is_open()){
    cout <<"Eroare la scrierea elevilor in fisier!";}
    else{
        cout <<"Fisierul a fost deschis cu succes!\n";}
  fout.close();
  if (!found) {
        cout << "Nu exista elevi cu media mai mare decat 6." << endl;
    } else {
        cout << "Elevii cu media > 6 au fost scrisi in fisier !" << endl;
        ifstream readfile("elevi.txt");
        string line;

        if (readfile.is_open()) {
            while (getline(readfile, line)) {

            }
            readfile.close();
        }
    }


    return 0;
    }
