#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    char a[100][100];
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
        {
           a[i][j] = '*';
        }
    for(int i = 1; i <= n; i++)
      {
          for(int j = 1; j <= i; j++)
        {
            cout << a[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
}

