#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c, d, min = 2e9, max = -2e9, s = 0, dif = 0;
    cout << "Introduceti 4 numere reale: " << endl;
    cin >> a >> b >> c >> d;
        max = a;
        if(b > max)
            max = b;
        if(c > max)
            max = c;
        if(d > max)
            max = d;
        cout << "Maximul este: " << max << endl;
        min = a;
        if(b < min)
            min = b;
        if(c < min)
            min = c;
        if(d < min)
            min = d;
        cout << "Minimul este: " << min << endl;
        cout << "Suma dintre minim si maxim este :" << max + min << endl;
        cout << "Diferenta dintre minim si maxim este :" << max - min << endl;
        cout << "Radacina patrata a numerelor aflate intre minimul si maximul gasite: " << " " << endl;
        if(min < max)
        {
            for(float i = min; i <= max; i++)
            {   if((int)sqrt(i) == sqrt(i))
                    cout << sqrt(i); 
            }
        }
    return 0;
}
