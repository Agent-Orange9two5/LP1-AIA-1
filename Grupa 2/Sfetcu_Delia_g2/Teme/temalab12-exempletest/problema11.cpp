#include <iostream>
#include <fstream>

using namespace std;

//declararea fisierului
fstream f("SiruriInvers.txt");

int main()
{   
    int n, i, j;
    char **s;
    cout << "Introduceti numarul de siruri dorit: ";
    cin >> n;
    cout << "Introduceti sirurile in ordine: " << endl;
    //alocarea dinamica a memoriei pentrur "matricea de cuvinte"
    s = (char**)malloc(n*sizeof(char*));
    if(s == nullptr)
    {
        cout << "Alocare de memorie esuata!";
        return 1;
    }
    //citirea cuvintelor pe rand
    for(int i = 0; i < n; i++)
    {
        char s1[101];
        cout << "Introduceti sirul cu numarul " << i + 1 << ": ";
        cin >> s1;
        cout << endl;
    //alocare dinamica de memorie pentru vectorul de cuvinte
    s[i] = (char *)malloc((strlen(s1) + 1)* sizeof(char));
    //verificare daca memoria a fost alocata cu succes si eroare in caz contrar
    if(s[i] == nullptr)
    {
        cout << "Alocarea dinamica a esuat pentru sirul " << i + 1 << endl;
        for(j = 0; j < i; j++){
            free(s[j]);
        }
        free(s);
        return 1;

    }
        strcpy(s[i], s1);
    }
    //sortarea vectorului de cuvinte
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++)
        {
            if(strlen(s[j]) > strlen(s[i]))
            {
                char *aux = s[i];
                s[i] =  s[j];
                s[j] = aux;
            }
        }
    }
    //afisarea cuvintelor in ordine inversa lungimii lor
    for(i = 0; i < n; i++)
        f << s[i] << endl;
    //eliberarea memoriei alocata vectorului de cuvinte
    for(i = 0; i < n; i++){
        free(s[i]);
    }
    //inchiderea fisierului
    f.close();
    //eliberarea memoriei alocata pentru "matricea de cuvinte"
    free(s);
    return 0;
}
