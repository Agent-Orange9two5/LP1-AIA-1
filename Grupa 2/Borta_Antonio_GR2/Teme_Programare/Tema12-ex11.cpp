#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int n, i, j;
    char **s;
    ofstream file("SiruriInvers.txt");
    cout << "Introduceti numarul de siruri: ";
    cin >> n;
    cout << "Introduceti sirurile in ordine: " << endl;
    s = (char**)malloc(n*sizeof(char*));
    if(s == nullptr)
    {
        cout << "Eroare la alocarea memoriei!";
        return 1;
    }
    for(i = 0; i < n; i++)
    {
        char s1[101];
        cout << i + 1 << ": ";
        cin >> s1;
        cout << endl;
    s[i] = (char *)malloc((strlen(s1) + 1)* sizeof(char));
    if(s[i] == nullptr)
    {
        cout << "Eroare la alocarea dinamica pentru sirul " << i + 1 << endl;
        for(j = 0; j < i; j++){
            free(s[j]);
        }
        free(s);
        return 1;

    }
        strcpy(s[i], s1);
    }
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++)
        {
            if(strlen(s[j]) > strlen(s[i]))
            {
                char *c = s[i];
                s[i] =  s[j];
                s[j] = c;
            }
        }
    }
    for(i = 0; i < n; i++)
        file << s[i] << endl;
    for(i = 0; i < n; i++){
        free(s[i]);
    }
    file.close();
    free(s);
    return 0;
}
