#include <iostream>

using namespace std;

void towerofHanoi(int n, char source, char auxiliary, char destination)
{
    if(n==1)
    {
        cout<<"move disc 1 from "<<source<<"to "<<destination<<endl;
        return;
    }
    towerofHanoi(n-1, source, destination, auxiliary);
    cout<<"move disk "<<n<<"from "<<source<<"to "<<destination<<endl;
    towerofHanoi(n-1,auxiliary, source, destination);
}

int main()
{
    int num_disk=3;
    towerofHanoi(num_disk, 'A', 'B', 'C');
    return 0;
}
