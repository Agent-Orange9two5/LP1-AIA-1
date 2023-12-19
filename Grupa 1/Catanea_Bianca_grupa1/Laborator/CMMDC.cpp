#include <iostream>
// functia recursiva pentru a calcula cmmdc
using namespace std;
int cmmdc(int a, int b)
{
    if (b ==0)
    {
        return a;
    }
    else
        {
        return cmmdc(b, a%b);
        }
}
int main()
{
    int num1, num2, rezultat;

    cout << "Introduceti primul numar: ";
    cin >> num1;

    cout << "Introduceti al doilea numar: ";
    cin >> num2;

    //Calculam cmmdc folosind functia recursiva
    rezultat = cmmdc (num1, num2);
    cout << "Cel mai mic divizor comun pentru " << num1 << " si " << num2 << " este: " << rezultat;
    return 0;
}
