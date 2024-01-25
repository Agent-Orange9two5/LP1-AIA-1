#include <iostream>
#include <iomanip>


using namespace std;

int main() {

    double a, b, c, sum, med;

    cout << "Notele studentului : " << endl;
    cin >> setprecision(2) >> a;
    cin >> setprecision(2) >> b;
    cin >> setprecision(2) >> c;

    sum = a + b + c;
    med = sum / 3;
    

    if (med >= 6) {
        cout << "Studentul are nota de trecere : " << setprecision(6) << fixed << med << endl;
    }   else {
        cout << "Studentul nu are nota de trecere : " << setprecision(6) << fixed << med << endl;
    }
    
    return 0;
}
