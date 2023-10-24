#include <iostream>
#include <cmath>
/*se citesc 4 numere naturale de la tastatura.
Se cer:
aflarea maximului si minimului dintre cele 4 numere
calcularea sumei si diferentei dintre minim si maxim
suma tuturor cifrelor celor 4 numere
radacina patrata a numerelor aflate intre minimul si maximul gasite.
toate rezultate obtinute se vor afisa cu zecimale.*/

using namespace std;
int cifre(int x)
{
    int s=0;
    while(x!=0)
    {
        s=s+x%10;
        x=x/10;
    }
    return s;
}

int main()
{
    float a,b,c,d, min, max, s=0;
    cin>>a>>b>>c>>d;
    min=a;
    max=a;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    if(min>d)
        min=d;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    cout<<min<<" "<<max<<endl;
    cout<<"suma este "<<min+max<<endl<<"dif este "<< max-min<<endl;

    s=cifre(a)+cifre(b)+cifre(c)+cifre(d);
    cout<<"suma cif este "<<s<<endl;

    for(int i=min+1;i<max;i++)
        cout<<sqrt(i)<<" ";

    return 0;
}
