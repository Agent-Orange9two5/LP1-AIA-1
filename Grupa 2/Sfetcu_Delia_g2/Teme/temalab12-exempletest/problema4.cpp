#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#define MAX_NUM 100  //daca poti sa imi spui cu ce as putea inlocui asta 

using namespace std;
//declararea fisierului
fstream f("NumereSortate.txt");
int main()
{   
    int n, a[100];
    cout << "Introduceti numarul de elemente: ";
    cin >> n;
    //setarea timpului de generare 0
    srand(time(NULL)); 
    //crearea vectorului cu valori random
    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%MAX_NUM;
        cout << a[i] << " ";
    }
    cout << endl;
    //sortarea vectorului descrescator
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
        { 
            if(a[i] < a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux; 
            }
        }
    //afisarea vectorului sortat in fisier
    for(int i = 0; i < n; i++)
        f << a[i] << " ";
    return 0;
}
}
