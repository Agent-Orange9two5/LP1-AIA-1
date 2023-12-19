/*Creați un program care primește de la tastatură un număr n și apoi citește n perechi de numere întregi (x, y). Stocați aceste perechi într-un vector și
sortați-le în funcție de suma lor (x + y).
b) Afișați perechile sortate în ordine crescătoare a sumei într-un fișier numit "PerechiSortate.txt".*/
#include <iostream>
#include <fstream>

using namespace std;

struct pereche{
    int x,y;
};
int main()
{
    int n,i,s[100];
    pereche v[100];
    cin>>n;
    ofstream g("PrechiSortate.txt");
    for(i=0;i<n;i++)
    {
        cout<<"Citim x ";
        cin>>v[i].x;
        cout<<"Citim y ";
        cin>>v[i].y;
        s[i]=v[i].x+v[i].y;
    }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                int aux=v[i].x;
                v[i].x=v[j].x;
                v[j].x=aux;
                int aux2=v[i].y;
                v[i].y=v[j].y;
                v[j].y=aux2;
        }

    }

}
for(i=0; i<n; i++)
{
    g<<v[i].x<<" "<<v[i].y<<endl;
}
return 0;
}
