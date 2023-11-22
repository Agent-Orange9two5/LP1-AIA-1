#include <iostream>
using namespace std;
void towerofhanoi(int n, char source, char auxiliary, char destination)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<source<< " to "<<destination<<endl;
        return;
    }
    towerofhanoi(n-1,source,destination,auxiliary);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerofhanoi(n-1,auxiliary,source,destination);
}
int main()
{
    int num_disks=3;
    towerofhanoi(num_disks,'A','B','C');
    return 0;
}
