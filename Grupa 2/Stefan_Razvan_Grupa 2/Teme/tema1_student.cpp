#include <iostream>

using namespace std;

int main()

{
    float a,b,c,ma=0;

        //a - nota 1
        //b - nota 2
        //c - nota 3
        //ma - variabila pe care o voi folosi pentru media aritmetica

    cout<<"Introduceti prima nota ";
    cin>>a;
    cout<<endl;

    cout<<"Introduceti a doua nota ";
    cin>>b;
    cout<<endl;

    cout<<"Introduceti a treia nota ";
    cin>>c;
    cout<<endl;

    //Dupa ce am introdus toate cele 3 note, vom calcula media aritmetica a acestora

    ma=(a+b+c)/3.00;

    //Acum verificam daca studentul are sau nu medie de trecere.

    if(ma>=6)
    cout<<"Studentul are nota de trecere: "<<ma<<endl;
        else cout<<"Studentul nu are nota de trecere: "<<ma<<endl;

        return 0;


}
