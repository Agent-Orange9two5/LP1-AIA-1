#include <iostream>
using namespace std;
int main(){
    double a, b, c, media = 0;
    cout << "Notele studentului sunt: " << endl;
    cin >> a >> b >> c;
    cout << "Media lui este: ";
    media = (a + b + c)/3;
    cout << media << endl;
    if(media > 6)
        cout << "Studentul are nota de trecere";
    else 
        cout << "Studentul nu are nota de trecere";
    return 0;
}
