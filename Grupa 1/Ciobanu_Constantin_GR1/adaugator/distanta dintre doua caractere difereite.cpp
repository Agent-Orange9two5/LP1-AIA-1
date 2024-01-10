#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main() {

    string s;

    cout << "Scrie ceva" << endl;

    getline(cin, s);

    int result = -1;

    for (int i = 0; i < s.length(); i++) {

        int j = s.length() - 1;

        while (s[i] != s[j]) {
            j--;
        }

        result = fmax(result, j - i - 1);

    }
    
    cout << "Lungimea maxima dintre doua caractere identice este : " << result << endl;

    return 0;
}
