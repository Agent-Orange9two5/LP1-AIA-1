#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    /* 3. Scrieți un program care rezolvă ecuația de gradul 2, utilizatorul introduce de la tastatură parametrii a, b și c ai ecuației de forma: ax^2+bx+c=0 */
  
    float a,b,c,x1,x2,delta,x3;
    cout << " Introduceti parametrii a, b, c ai ecuatiei de gradul al doilea : ";
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    cout << " Delta este : " << delta << endl;
    if (delta > 0)
    {
        x1 = (-b - sqrt(delta) ) / 2*a;
        cout << " Prima solutie a ecuatiei este :" << x1;
        cout << endl;
        x2 = (-b + sqrt(delta) ) / 2*a;
        cout << " A doua solutie a ecuatiei este :" << x2;
    }
    else if (delta == 0)
    {
        x3= -b / 2*a;
        cout << " Ecuatia are doua solutii egale : " << x3;
    }
        else if (delta < 0)
            cout << " Ecuatia nu are solutii reale.";
    return 0;
}

