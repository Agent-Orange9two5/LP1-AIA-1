#include <iostream>
#include <cmath> 

//folosim cmath pentru radacina patrata

using namespace std;

int main()

{
    int a, b, c, d, max=0, min=0, sum=0, dif=0, sumcif=0, r2=0, i;

    //Vom folosi variabilele min si max pentru a le folosi dupa comparatia celor 4 numere
            //a - numarul 1
            //b - numarul 2
            //c - numarul 3
            //d - numarul 4
            //i - variabila cu care parcurgem intervalul de numere cuprins intre min si max
            //max - variabila in care retinem maximul
            //min - variabila in care retinem minimul
            //sum - variabila in care retinem suma dintre min si max
            //dif - variabila in care retinem diferenta dintre min si max
            //sumcif - variabila in care retinem suma tuturor cifrelor celor 4 numere
            //r2 - variabila in care retinem radacina patrata

    //Acum, ne vom ocupa de introducerea celor 4 numere.

    cout<<"Introduceti primul numar:"<<endl;
        cin>>a;

    cout<<"Introduceti al doilea numar:"<<endl;
        cin>>b;


    cout<<"Introduceti al treilea numar:"<<endl;
        cin>>c;


    cout<<"Introduceti al patrulea numar:"<<endl;
        cin>>d;

    //Suntem inca la inceput, deci voi folosi una dintre cele mai simple metode pentru a afla min si max (la fel si pentru restul problemei)

        //max
        max=a;
        if(max<b)
            max=b;
        if(max<c)
            max=c;
        if(max<d)
            max=d;

            cout<<"Maximul dintre cele 4 numere citite este "<<max<<endl;

    //Aplicam acelasi principiu si pentru min

        //min
        min=a;
        if(min>b)
            min=b;
        if(min>c)
            min=c;
        if(min>d)
            min=d;

            cout<<"Minimul dintre cele 4 numere citite este "<<min<<endl;

    //Acum ca am aflat minimul si maximul, ne putem ocupa de restul cerintelor

        //Suma

        sum=max+min;
        cout<<"Suma dintre Minim si Maxim este "<<sum<<endl;

        //Diferenta

        dif=max-min;   
        cout<<"Diferenta dintre Minim si Maxim este "<<dif<<endl; 

        //Suma tuturor cifrelor celor 4 numere
        
        while(a!=0 && b!=0 && c!=0 && d!=0)
        {
            sumcif+=a%10+b%10+c%10+d%10;
                a/=10;
                    b/=10;
                        c/=10;
                            d/=10;
        }

        cout<<"Suma tuturor cifrelor celor 4 numere este "<<sumcif<<endl;

        //radacina patrata

        for(i=min; i<=max; i++)
        {
            cout<<"Radacina patrata a numarului "<<i<<" este "<<sqrt(i)<<endl;
        }

        return 0;

}
