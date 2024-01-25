// // a) Creați un program care primește de la tastatură un număr n și apoi citește n numere întregi.
// Alocați dinamic un vector pentru aceste numere și calculați suma lor.
// b) Scrieți suma calculată într-un fișier numit "SumaNumere.txt".

#include <iostream>
#include <fstream>
using namespace std;
ofstream g("SumaNumere.txt");
int main()
{
    int n, i, s=0, *v;
    cout << "Introduceti numarul de elemente al vectorului: ";
    cin >> n;
    
    v=(int *)malloc(n*sizeof(int));
    if(v == NULL )
    {
        cout << "Nu se poate aloca memorie.";

    }
    
    cout << "Introduceti elementele vectorului: ";
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        s+=v[i];
    }
    
    g << "Suma elementelor vectorului este: " << s;

    return 0;
}
