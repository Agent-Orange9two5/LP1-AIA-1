#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream g("SumaNumere.txt");
    int n,*a,suma=0;
    cout<<"Introduceti numarul de numere: ";
    cin>>n;
    a=(int*)malloc(n*sizeof(int));
    if(!a)
    {
        cout<<"Eroare la alocarea memoriei";
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Introduceti elementul "<<i+1<<": ";
        cin>>a[i];
        suma+=a[i];
    }
    g<<suma;
    cout<<"Suma numerelor a fost scrisa in fisier";
    free(a);
    g.close();
    return 0;
}
