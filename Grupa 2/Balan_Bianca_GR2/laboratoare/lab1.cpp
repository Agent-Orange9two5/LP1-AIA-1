//prob1
#include <iostream>
using namespace std;
void problema1()  {
    char nume,prenume;
    cout<<"Initiala nume: ";
    cin>>nume;
    cout<<"Initiala prenume: ";
    cin>>prenume;
    cout<<"Salut, "<<nume<<" "<<prenume<<" !";
    return 0; }


//prob2
#include <stdio.h>
#include <stdlib.h>
void problema2() {
    float lungime, latime;
    float a , p;
    printf("Lungimea dreptunghiului este: ");
    scanf("%f", &lungime);
    printf("Latimea dreptunghiului este: ");
    scanf("%f", &latime);
    a = lungime * latime;
    p = 2 * (lungime + latime);
    printf("Aria dreptunghiului este: %0.2f\n", a);
    printf("Perimetrul dreptunghiului este: %0.2f\n", p);
}


//prob3
include <iostream>
using namespace std;
void problema3() {
    float c, f;
    cout<<"Grade in Fahrenheit: ";
    cin>>f;
    c = (5.0 / 9.0) * (f - 32);
    cout<<"Grade in Celsius: "<<c<< endl;
    cin>> c;
    return 0;
}
