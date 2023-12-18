#include <iostream>
#include <fstream>
using namespace std;
    struct Contact{
        int long nrtel;
        char nume[25];
        char adresamail[50];
    }c;
int main(){
    int n, k = 1;
    //declararea fisierului
    fstream f("Agenda.txt");
    cout << "Introduceti numarul de contacte: ";
    cin >> n;
    //stocarea contactelor intr un vector
    cout << "Introduceti datele contactelor: "<< endl;
    for(int i = 1; i <= n; i++)
    {   
        cout << k << ". ";
        cin >> c.nume >> c.nrtel >> c.adresamail;
        cout << endl;
        //afisarea datelor in fisier
        f << k << c.nume << " " << c.nrtel << " " << c.adresamail << endl;
        k++;
    }
    return 0;
}
