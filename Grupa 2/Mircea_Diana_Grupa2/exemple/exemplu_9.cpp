/*Creați un program care primește de la tastatură un număr n și apoi citește n numere întregi. Alocați dinamic un vector pentru aceste numere și
calculați suma lor.
b) Scrieți suma calculată într-un fișier numit "SumaNumere.txt".*/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    int n,i,s=0,*v;
    cin>>n;
    ofstream g("SumaNumere.txt");
    v=(int *)malloc(n*sizeof(int ));
    if(v==NULL){
        cout<<"Nu pot aloca memorie";
    }
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    g<<"Suma este "<<s;
    free(v);
    return 0;
}
