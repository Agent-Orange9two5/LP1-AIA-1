#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
struct Oras{
string nume;
int nr_loc;
double suprafata;
char* indice_economic;
};

int main()
{
    int i,n;
    ofstream fout("orase.txt");
    cout << "Introduceti numarul de orase: ";
    cin >> n;
    vector <Oras> orase*;
    for (i=0; i<n; i++){
         orase* = (vector*)malloc(n*sizeof(vector));
    }

    for (i=0; i<n; i++){
        Oras orase;
        cout << "Numele orasului " << n << ": ";
        cin >> orase.nume;

        cout << "Numarul de locuitori: "<< n << ": ";
        cin >> orase.nr_loc;

        cout << "Suprafata: "<< n << ": ";
        cin >> orase.suprafata;

        cout << "Indicatorul economic " << n <<"(Rang intre A-E; A=minim, E=maxim)"<< ": ";
        cin >> orase.indice_economic;
    }
 fclose("orase.txt");
}
/*de continuat*/
