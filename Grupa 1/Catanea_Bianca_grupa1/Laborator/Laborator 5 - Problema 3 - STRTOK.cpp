#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 3.	Se citesc de la tastatură doua siruri de maxim 100 de caractere.
    // Concatenati cele doua siruri de caractere si impartiti sirul astfel format in subsiruri delimitate de spatiu sau “ .”.
  
    char s1[101];
    char s2[101];
    cout << " Primul sir este : ";
    cin.getline(s1, 100);

    cout << " Al doilea sir este : ";
    cin.getline(s2, 100);

    strcat(s1, " ");
    strcat(s1, s2);
    cout << " Sirul concatenat este : " << s1;
    cout << endl;

    //InfoAs
    char separare[] = " ."; // caracterele ce separa in subsiruri. in cazul nostru, spatiu sau punct
    char *p = strtok(s1, separare); // salvăm într-un pointer subșirul (cuvântul) curent.
    // la prima apelare a funcției strtok, dăm șirul s și un șir de caractere ce delimitează cuvintele
    while( p != NULL ) // cat timp avem cuvinte
    {
        cout << p << endl;
        p = strtok(NULL, separare); //de data aceasta, in loc sa dam ca parametru s1, dam NULL, pentru a continua cautarea urmatorului cuvant de unde am ramas
    }
    return 0;
}
