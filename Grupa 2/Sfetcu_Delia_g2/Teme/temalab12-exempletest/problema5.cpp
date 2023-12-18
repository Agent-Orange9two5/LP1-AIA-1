#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//declararea fisierului
fstream f("SiruriSortate.txt");

int main()
{   
    int n;
    //declararea vectorului de cuvinte
    char cuv[100][50];
    cout << "Introduceti numarul de siruri: ";
    cin >> n;
    //crearea vectorului de cuvinte
    for(int i = 0; i < n; i ++)
    {   
        char cuvant[50];
        cin >> cuvant;
        strcpy(cuv[i], cuvant);
    }
    //sortarea vectorului de cuvinte
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(cuv[i], cuv[j]) > 0)
            {
                char aux[50];
                strcpy(aux, cuv[i]);
                strcpy(cuv[i], cuv[j]);
                strcpy(cuv[j], aux);
            }
            
        }
    //afisarea vectorului in fisier
    for(int i = 0; i < n; i++)
        f << cuv[i] << endl;
   
    return 0;
}
}
