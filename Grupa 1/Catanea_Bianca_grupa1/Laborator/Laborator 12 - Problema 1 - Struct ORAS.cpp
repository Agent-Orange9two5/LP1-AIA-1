#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    
    int n;
    struct oras{
    char *denumire;
    int nrloc, suprafata, aux;
    char c }*v;
    
    void citire(){
        cin >> n;
    v = (oras *)calloc(n, sizeof(oras));
    for(int i=0;i<n;i++)
    {
        cin.get();
        v[i].denumire = (char *)calloc(50, sizeof(char));
        cin.get(v[i].denumire, 50);
        cin.get();
        cin >> v[i].nrloc;
    }
    }
    void fisier(){
    ifstream f("ORAS.txt");
    ofstream g("ORAS.txt");
    for (i=0;i<n-1;i++)
        for(int j=i+1;j<=n;j++)
            if (v[i].nrloc < v[j].nrloc)
    {
        aux = v[i];
        v[i] = v[j];
        v[j]= aux;
    }  
    }
  

           
   
    return 0;
}
