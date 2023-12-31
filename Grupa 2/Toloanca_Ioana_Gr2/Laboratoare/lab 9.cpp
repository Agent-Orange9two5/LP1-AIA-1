// ex1 recursivitate directa
#include <iostream>

using namespace std;
int fact_iterativ(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}
int fact_recursiv(int n) {
if(n==0)
    return 1;
    else return n*fact_recursiv(n-1);
}
int main()
{int n;
cout<<"Dati n";
cin>>n;
cout<<"N! cu metoda iterativa este egal cu:"<< fact_iterativ(n)<< endl;
    cout <<"N! cu metoda recursiva este egal cu:"<< fact_recursiv(n) << endl;
    return 0;
}


// ex 2 recursivitate indirecta 
#include <iostream>

using namespace std;
int fa(int);
int fb(int);
int fa(int n) {
if(n<=1) return 1;
else return n*fb(n-1); }
int fb(int n) {
    if(n<=1) return 1;
    else return n*fa(n-1);
}
int main()
{int num=5;
    cout << fa(num);
    return 0;
}


// ex3 recursivitate 
#include <iostream>

using namespace std;
int i=0;
void foo1(int);
void foo2(int);
void foo1(int n) {
    if(i<=n)
    {
        cout<<i<< " ";
        i++;
        foo2(n);
    }
    else return;
}
void foo2(int n){
if(i<=n) {
    cout<<i<<" ";
    i++;
    foo1(n);
}
else return;
}
int main(void)
{int n;
cin>>n;
foo1(n);
    return 0;
}


//ex4 TowerofHanoi
#include <iostream>

using namespace std;
void towerofHanoi(int n,char source, char auxiliary, char destination){
    if(n==1){
        cout<<"Move disk 1 from"<<" "<<source<< " to"<<" "<<destination<<endl;
        return;
    }
    towerofHanoi(n-1, source, destination, auxiliary);
    cout<<"Move disk"<< n<< "from"<<" "<<source<< "to"<<" "<<destination<<endl;
    towerofHanoi(n-1,auxiliary,source,destination);
}
int main()
{int num_disks=3;
   towerofHanoi(num_disks, 'A', 'B', 'C');
    return 0;
}





