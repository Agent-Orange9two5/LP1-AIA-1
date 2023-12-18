/* Se cistesc dintr-un fisier 4 note de laborator ale unui elev si nota de la teza.
Se cere media sa anuala, aceasta va fi salvata in fisierul media.txt*/

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Declarațiile variabilelor
    float n1, n2, n3, n4, t;
    float mo, mf;

    // Deschide fișierul note.txt pentru citire
    ifstream f("note.txt");

    // Deschide fișierul media.txt pentru scriere
    ofstream g("media.txt");

    // Citeste și afiseaza nota 1
    f >> n1;
    cout << "Nota 1: " << n1 << endl;

    // Citeste și afiseaza nota 2
    f >> n2;
    cout << "Nota 2: " << n2 << endl;

    // Citeste și afiseaza nota 3
    f >> n3;
    cout << "Nota 3: " << n3 << endl;

    // Citeste și afiseaza nota 4
    f >> n4;
    cout << "Nota 4: " << n4 << endl;

    // Calculeaza media notelor
    mo = (float)(n1 + n2 + n3 + n4) / 4;

    // Citeste și afiseaza nota la teza
    f >> t;
    cout << "Nota la teza: " << t << endl;

    // Afiseaza media notelor
    cout << "Media notelor este: " << mo << endl;

    // Calculeaza media finala
    mf = (mo * 3 + t) / 4;

    // Afiseaza media finala
    cout << "Media finala este: " << mf << endl;

    // Scrie media finala in fisierul media.txt
    g << "Media finala este: " << mf << endl;

    // Inchide fișierele
    f.close();
    g.close();
    return 0;
}
