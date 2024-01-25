//prob1
#include <stdio.h>
#include <conio.h>
using namespace std;
int main() {
    int a,b,rezultat ;
    char op;
    printf("Introduceti primul numar , operatorul de calcul , al doilea numar: ");
    scanf("%d%c%d", &a,&op,&b);
    if(a>b) 
        printf ("Maximul este : %d\n", a);
    else
    printf("Maximul este: %d\n", b); 
    switch(op){
        case '+' : {
            rezultat=a+b;
            printf("%d %c %d = %d",a,op,b,rezultat);
            break; }
         case '-' : {
            rezultat=a-b;
            printf("%d %c %d = %d",a,op,b,rezultat);
            break; }
         case '*' : {
            rezultat=a*b;
            printf("%d %c %d = %d",a,op,b,rezultat);
            break; }
        case '/': {
            if(b)  {
                rezultat=a/b;
                printf("%d %c %d = %d",a,op,b,rezultat); }
            else printf("Al doilea operand este 0. Eroare");
            break;  }
            case '%': {
                if(b)  {
                    rezultat=a%b;
                    printf("%d %c %d = %d",a,op,b,rezultat); }
                else printf("Al doilea operand este 0. Eroare");
                break; }
            default:printf("Operator invalid") ;  }
        getch(); // pt citirea caracterelor de la tastatura }


//prob2
#include <iostream>
using namespace std;
int main() {
    unsigned nr = 0;
    long x, x_init;
    cout<<"Introduceti un numar natural: ";
    cin>> x;
    x_init = x;
if(x) {  while(x)  {
        x/=10; nr ++; }
    cout<<"Numarul natural" << x_init << "are" << nr << "cifre.";}
else
cout<<"Numarul natural 0 are o cifra.";
return 0;} 


//prob3
#include <iostream>
#include <math.h>
using namespace std;
int main (){
    float a,b,c,d;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    if(a)    {
        d=b*b-4*a*c;
        if (d>=0)        {
            cout<<"x1=";
            cout<<((-b+sqrt(d))/(2*a));
            cout<<"x2="<<((-b-sqrt(d))/(2*a));        }
        else cout<<"x1 si x2 nu sunt reale";  }
    else if(b)
    cout<<"x="<<(-c/b);
    else if(c==0)
    cout<<"infinitate de solutii";
    else
    cout<<"ecuatia nu are solutii";
    return 0;}


//prob4-Sirul Fibonacci
#include <stdio.h>
#include <conio.h>
using namespace std;
void main(){
    long f0=1, f1=1;
    long fc;
    int i=1,n;
    printf("Introduceti numarul de termeni din sirul de fractii: ");
    scanf("%d",&n);
    //crearea algoritmului Fibonacci
    printf("%1d\n", f0);
    printf("%1d\n", f1);
    while(i<=n)   {
        fc=f0+f1;
        f0=f1;
        f1=fc;
        i++;
        printf("%1d\n", fc);    }
   getch(); }
