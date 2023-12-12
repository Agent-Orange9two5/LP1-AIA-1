#include<iostream>
#include<math.h>
using namespace std;

double cotan(double);

int main()
{
int i;
double x;
double(*func_trig[])(double)={sin,cos,tan,cotan};
cout <<" Nr   Sinus      Cosinus    Tan     Cotan";
for(x=0.01;x<=M_PI;x+=0.1)
{cout<<endl<<x<<" ";
    for(i=0;i<4;i++)
        cout<<func_trig[i](x)<<" ";}

        return 0;
}
double cotan(double z)
{
return(1/tan(z));
}
