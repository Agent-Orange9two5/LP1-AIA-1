#include <iostream>
#include <fstream>

using namespace std;

//declararea fisierului
fstream f("SumaNumere.txt");

int main()
{   
    int n, s = 0, *p;
    cin >> n;
    //alocarea dinamica a memoriei pentru vector
    p = (int*)malloc(n*sizeof(int));
    //verificarea pentru a vedea daca memoria a fost alocata
    if (p == nullptr) {
        cout << "Alocarea memoriei a esuat!" << endl;
        return 1;
    }
    //citirea vectorului si adaugarea elem sale in suma
    for(int i = 0; i < n; ++i)
    {    cin >> p[i];
         s += p[i];
    }
    //afisarea sumei in fisier
    f << s;
    //eliberarea memoriei alocate pentru vector
    free(p);
    return 0;
}
