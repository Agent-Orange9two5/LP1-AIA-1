#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

fstream f("elevi.txt");

struct elev{
    int long CNP;
    char nume[50];
    char prenume[50];
    char adresa[100];
        struct note{
            int nota1;
            int nota2;
            int nota3;
    }n;
    float media;
};

int main()
{   elev e[100];
    int n, k = 1;
    cout << "Introduceti numarul de elevi: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {

        cout << "Introduceti datele pentru elevul " << i + 1 << " ";
        cout << endl;
        cout << "Cnp-ul este: ";
        cin >> e[i].CNP;
        cout << "Numele este: ";
        cin >> e[i].nume;
        cout << "Prenumele este : ";
        cin >> e[i].prenume;
        cout << "Adresa este: ";
        cin >> e[i].adresa;
        cout << "Nota 1 este: ";
        cin >> e[i].n.nota1;
        cout << "Nota 2 este: ";
        cin >> e[i].n.nota2;
        cout << "Nota 3 este: ";
        cin >> e[i].n.nota3;
        e[i].media = (e[i].n.nota1 + e[i].n.nota2 + e[i].n.nota3) / 3.0;
         
        cout << "Media este: " << e[i].media;
        cout << endl;
        
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(e[i].nume, e[j].nume) > 0) {
                swap(e[i], e[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        {
            if(e[i].media > 6)
            {   
                f << k << ". " << e[i].CNP << " " << e[i].nume << " " << e[i].prenume << " " << e[i].adresa << " " << e[i].media;
                f << endl;
                k++;
            }
                } 

    f.close();

    return 0;
}
