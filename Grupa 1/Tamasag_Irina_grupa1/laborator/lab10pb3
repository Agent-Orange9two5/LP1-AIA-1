#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, t;
    float mo, mf;
    ifstream f("note.txt");
    ofstream g("media.txt");
    f>>n1;
    cout<<"Nota1: "<<n1<<endl;
    f>>n2;
    cout<<"Nota1: "<<n2<<endl;
    f>>n3;
    cout<<"Nota3: "<<n3<<endl;
    f>>n4;
    cout<<"Nota 4: "<<n4<<endl;
    mo=(float)(n1+n2+n3+n4)/4;
    f>>t;
    cout<<"Nota la teza: "<<t<<endl;
    cout<<"Media notelor este: "<<mo<<endl;
    mf=(mo*3+ t)/3;
    cout<<"Media finala :"<<mf<<endl;
    g<<"Media finala este: "<<mf<<endl;
    f.close();
    g.close();
    return 0;
}
