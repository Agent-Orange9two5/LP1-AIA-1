#include <iostream>

using namespace std;

int main() {

    int num = 0;
    int count = 1;

    cout << "Introdu numarul : " << endl;
    cin >> num;

    while (num > 9) {

        num = num / 10;
        count++;

    }

    cout << "Numarul are lungimea : " << count << endl;

    return 0;
}
