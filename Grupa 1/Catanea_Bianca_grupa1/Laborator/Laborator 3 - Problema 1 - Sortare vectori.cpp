#include <iostream>

using namespace std;

int main()
{
    // 1.	Sa se realizeze un program care va realiza cautarea unei valori intr-un vector.

    int v[100],a,n,i,j,aux,mijloc,ls,ld,x,gasit;
    cout << "Introduceti lungimea vectorului: ";
    cin >> n;
    cout << "Introduceti valorile corespunzatoare fiecarui vector: ";
    for (i=0;i<n;i++)
        cin >> v[i];

    //ordonam crescator vectorul
    cout << "Vectorul  ordonat crescator este: " ;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<=n;j++)
       { if(v[i]>v[j])
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
       }
    for(j=0;j<n;j++)
        cout << v[j] << " ";
    cout << endl;
    cout << "Introduceti numarul cautat: ";
    cin >> x; //x=nr cautat
    ls=1;
    ld=n;
    while(ls<=ld && gasit==0)
    {
            mijloc=(ls+ld)/2;
            if(v[mijloc]==x)
            {
                gasit=mijloc;
                break;
            }
            else if (v[mijloc]<x)
                      ls=mijloc+1; // caut in a doua jumatate
                 else ld=mijloc-1;  //caut in prima jumatate
        }
        if(gasit!=0)
            cout << x << " se gaseste pe pozitia " << gasit ;
        else cout << x << "nu se afla in vector";
    return 0;
}
