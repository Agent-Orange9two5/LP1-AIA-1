#include <iostream>
using namespace std;

void towerOfHanoi(int n,char source, char aux, char dest)
{
    if(n == 1)
    {
        cout<<"Move disk 1 from "<< source << " to " << dest<<endl;
        return;
    }
    towerOfHanoi(n-1, source, dest, aux);
    cout<<"Move disk " <<n  <<" from " << source << " to "<< dest <<endl;
    towerOfHanoi(n-1,aux,source,dest);
}

int main()
{
    int num_disks=3;
    towerOfHanoi(num_disks, 'A', 'B', 'C');
    return 0;
}
