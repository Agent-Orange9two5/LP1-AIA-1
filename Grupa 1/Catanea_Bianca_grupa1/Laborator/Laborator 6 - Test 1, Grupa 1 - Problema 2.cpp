#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 2. Se citesc doua propozitii de la tastatura. Sa se concateneze aceste propozitii astfel incat sa se afiseze fraza formata de cele doua siruri
    //in ordinea citirii acestora. Sa se afiseze lungimea sirului final.

    char s1[51];
    char s2[51];
    cout << "Primul sir : ";
    cin.getline(s1, 50);
    cout << endl;

    cout<< "Al doilea sir : ";
    cin.getline(s2, 50);
    cout << endl;

    strcat (s1, " ");
    strcat (s1, s2);
    cout << "Sirul concatenat este : " << s1 << endl;

    cout << "Lungimea sirului final este : " << strlen(s1);
    return 0;
}
