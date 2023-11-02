#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 2. Se citeste de la tastatura un sir de maxim 50 de caractere. Se dau: s1[20]="ANTERIOR", s2[20]="POSTERIOR".
    // Sa se construiasca un nou sir de caractere care va contine in aceasta ordine: sirul 1(s1), sirul citit de la tastatura,
    // a doua jumatate a sirului 2 (s2) (hint: strlen(s2)/2). Sa se afiseze lungimea sirului final.

    char s1[20] = "ANTERIOR";
    char s2[20] = "POSTERIOR";
    char s3[10];
    int x;

    cout << "Primul sir este: " << sl;
    cout << endl;

    cout << "Al doilea sir este: " << s2;
    cout << endl;

    cout << "Sirul citit este: ";
    cin.getline(s3, 9);
    cout << endl;

    x = strlen(s2) / 2;
    cout << "Sirul complet este: ";
    strcat(s1, s3);
    strcat(s1, s2+x);
    cout << s1 << endl;

    cout << "Lungimea sirului final este: " << strlen(s1);
    return 0;
}
