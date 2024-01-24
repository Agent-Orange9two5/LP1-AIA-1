#include <iostream>
#include <fstream>
#include <math.h>
#define b b*b;
using namespace std;
/*Se considera un punct P0 (x0, y0) in plan si o multime A cu n puncte. Coordonatele punctului P0,
a punctelor din multimea A si n se citesc de la tastatura.
Sa se realizeze un program care determina cel mai apropiat punct de P0 din multimea A si
calculeaza distanta corespunzatoare. Datele de intrare sunt stocate intr-un fisier. Rezultatele sunt
apoi afisate la ecran.
Programul foloseste:
- tipul de date struct pentru reprezentarea punctului;
- o functie pentru citirea datelor de intrare si stocarea lor in fisier;
- o functie pentru calculul distantei dintre doua puncte in plan;
- o functie pentru determinarea celui mai apropiat punct de P0;
- o macroinstructiune care determina patratul unui numar;
Programul principal afiseaza la ecran rezultatele.
Sa se creeze un proiect in care functiile mentionate mai sus sunt stocate intr-o biblioteca statica de
tip .lib, iar programul principal foloseste aceasta biblioteca.
*/
int n, p[1], i, m[2];
float v[100];
ofstream f("coordonate.txt");

struct multime{
    int x;
    int y;
}A[100];
void citire()
{
    cout<<"Citim coordonatele punctului P0: ";
    cin>>p[0]>>p[1];
    f<<"Coordonatele punctului P0:"<<p[0]<<" - "<<p[1]<<endl;
    cout<<"Numarul de puncte este:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Pentru punctul A "<<i+1<<" coordonatele x si y sunt:";
        cin>>A[i].x>>A[i].y;
        f<<"Pentru punctul A "<<i+1<<" coordonatele x si y sunt:"<<A[i].x<<" "<<A[i].y<<endl;
    }
}
void distanta()
{
    for(i=0;i<n;i++)
    {
        v[i]=sqrt((A[i+1].x-A[i].x)^2+(A[i+1].y-A[i].y)^2);
    }
}
void distanta_P0()
{
    m[0]=A[0].x;
    m[1]=A[0].y;
    for(i=0;i<n;i++)
    {
        v[i]=sqrt((p[0]-A[i].x)^2+(p[1]-A[i].y)^2);
        if(sqrt((p[0]-m[0])^2+(p[1]-m[1])^2) > v[i])
        {
            m[0]=A[i].x;
            m[1]=A[i].y;
            m[2]=i;
        }
    }
    f<<"Punctul cel mai apropiat de P0 este: A["<<m[2]+1<<"]";

}






int main()
{
    citire();
    distanta();
    distanta_P0();
    f.close();
    ifstream g("coordonate.txt");
    char c;
    while (g.get(c))
    {
        cout<<c;
    }
    g.close();
    return 0;
}
//Nu te uita la linia 4.
