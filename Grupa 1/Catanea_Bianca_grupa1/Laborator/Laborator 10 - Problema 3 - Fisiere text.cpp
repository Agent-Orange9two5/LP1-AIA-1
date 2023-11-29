#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    float n1,n2,n3,n4,t;
    float mo,mf;
    
    //Deschide fisierul note.txt pentru citire
    ifstream f("note.txt");
    
    //Deschide fisierul media.txt pentru scriere
    ofstream g("media.txt");
    
    //Citeste si afiseaza nota 1
    f >> n1;
    cout << "Nota 1: " << n1 << endl;
    
     //Citeste si afiseaza nota 2
    f >> n2;
    cout << "Nota 2: " << n2 << endl;
    
     //Citeste si afiseaza nota 3
    f >> n3;
    cout << "Nota 3: " << n3 << endl;
    
     //Citeste si afiseaza nota 4
    f >> n4;
    cout << "Nota 4: " << n4 << endl;
    
    //Calculeaza media notelor
    mo = (float)(n1 + n2 + n3 + n4) / 4;
    
    // Citeste so afiseaza nota la teza
    f >> t;
    cout << "Nota la teza: " << t << endl;
    
    //Afiseaza media notelor
    cout << "Media notelor este: " << mo << endl;
    
    //Calculeaza media finala
     mf = ( mo * 3 + t) / 4;
    
    //Afiseaza media finala
    cout << "Media finala este: " << mf << endl;
    
    // Scrie media finala in fisierul media.txt
    g << "Media finala este: " << mf << endl;
    
    //Inchide fisierele
    f.close();
    g.close();
    return 0;
}
