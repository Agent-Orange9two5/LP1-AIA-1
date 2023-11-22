#include <iostream>

using namespace std;
void toH(int n, char sr, char aux, char dest){
    if (n == 1){
        cout<<"Move disk 1 from "<<sr<<" to "<<dest<<endl;
        return;
    }
    toH(n-1, sr,dest, aux);
    cout<<"Move disk "<<n<<" from "<<sr<<" to "<<dest<<endl;
    toH(n-1, aux, sr, dest);
}
int main()
{
    int num_disks=3;
    toH(num_disks, 'A', 'B', 'C');
    return 0;
}
