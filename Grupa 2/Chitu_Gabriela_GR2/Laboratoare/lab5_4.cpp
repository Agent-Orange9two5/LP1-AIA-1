#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    string sir1, sir2;

    cout<<"Primul sir: ";
    getline(cin, sir1);
    cout<<"Al doilea sir: ";
    getline(cin, sir2);

    cout << "Lungimea pirmului sir este: " << sir1.size() << endl;
    cout << "Lungimea celui de-al doilea sir: " << sir2.length() << endl;


    int pos = sir1.find(sir2);

    if (pos == -1)
        cout << "Sirul 2 nu este continut in sirul 1" << endl;
    else
        cout << "Sirul 2 este inlus in sirul 1 incepand cu pozitia " << pos <<endl;


    string sir1_new = sir1.insert(3, "Limbaje de programare II");
    cout<< sir1_new << endl;

    sir1_new.append(" ");
    cout<< "Sirurile concatenate: " << sir1_new.append(sir2);

    return 0;
}