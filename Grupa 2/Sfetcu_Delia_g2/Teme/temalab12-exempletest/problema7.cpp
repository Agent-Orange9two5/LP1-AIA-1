#include <iostream>
#include <fstream>
 
fstream f("PerechiSortate.txt");
using namespace std;

 

int main()
{   
    int n,i,j;
    
    //Structura pentru a retine suma si valorile
     struct Nr {
    int x;
    int y;
    int suma;
     };
    //declararea unei variabile de tipul structurii 
    Nr perechi [100];
    
    cout << "Introduceti numarul de perechi: ";
    cin >> n;
    //citirea perechilor si retinerea sumei 
    for(int i = 0; i < n; i++)
    {
        cin >> perechi[i].x >> perechi[i].y;
        perechi[i].suma=perechi[i].x + perechi[i].y;
        
    }
    //declararea altei variabile de tipul structurii
    Nr aux;
    // Bubblesort
     for (i = 0; i < n - 1; i++)  
  {
        for (j = 0; j < n - i - 1; j++) 
            {  //sortare in functie de suma
              if (perechi[j].suma > perechi[j+1].suma) 
                {
                aux = perechi[j];
                perechi[j] = perechi[j + 1];
                perechi[j + 1] = aux;
                }
            ;}
        
}
 // afisare
for (int i=0;i<n;i++)
{
   f << perechi[i].x << perechi[i].y;
}
           

    return 0;
}
