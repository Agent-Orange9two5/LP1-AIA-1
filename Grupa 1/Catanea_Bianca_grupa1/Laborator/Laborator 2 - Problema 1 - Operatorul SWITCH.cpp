#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    /* 1.	Sa se realizeze un program care cere utilizatorului 2 numere intregi: a si b, si care va calcula urmatoarele:
	Suma, Diferenta,	Produsul	, Catul si restul impartirii celor doua numere (doar daca b > 0)	,Maximul dintre cele doua numere. */

    int a, b, max, min, rezultat;
    char operator1; //pentru citirea caracterelor de la tastatura
    cout << " Introduceti de la tastatura 2 valori de numere intregi: ";
    cin >> a >> b;
    cout << "Introduceti de la tastatura operatorul: " ;
    cin >> operator1;
    switch (operator1)
    {
        case '+':
        {
        rezultat = a+b;
        cout << " Suma celor 2 numere este: " << rezultat;
        cout << endl;
        }
        break;

        case '-':
        {
        rezultat = a-b;
        cout << " Diferenta celor 2 numere este: " << rezultat;
        cout << endl;
        }
        break;

        case '*':
        {
        rezultat = a*b;
        cout << " Produsul celor 2 numere este: " << rezultat;
        cout << endl;
        }
        break;

        case '/':
        {
            if(b>0)
            {
        rezultat = a/b;
        cout << " Catul impartirii celor 2 numere este: " << rezultat;
        cout << endl;
            }
            else cout << " Al doilea operand este 0.";
        }
        break;

        case '%':
        {
            if(b>0)
        {
        rezultat = a%b;
        cout << " Restul impartirii celor 2 numere este: " << rezultat;
        cout << endl;
        }
            else cout << "Al doilea operand este 0.";
        }
        break;

    default : cout << " Operator invalid ";
    }

    if(a>b)
    {
        max=a;
        cout << "Maximul dintre cele doua numere este: " << a;
    }
    else cout << " Maximul dintre cele doua numere este: " << b;
     cout << endl;

    if(a<b)
    {
        min=a;
        cout << "Minimul dintre cele doua numere este: " << a;
    }
    else cout << " Maximul dintre cele doua numere este: " << b;


    return 0;
}
