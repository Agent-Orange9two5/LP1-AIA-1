#include <iostream>

using namespace std;

int main()
{
    /* 3.	Scrieți un program care cere utilizatorului să introducă o valoare pentru temperatura măsurată în grade Fahrenheit (F) și
    apoi realizează conversia către grade Celsius (C) folosind formula: C = (5 / 9) * (F - 32). */
  
    float f,c;
    cout << "Introduceti numarul de grade in Fahrenheit: ";
    cin >> f;
    c = ( 5.0 / 9.0 ) * (f -32);
    cout << "Numarul de grade convertit in Celsius este : " << c;
    return 0;
}
