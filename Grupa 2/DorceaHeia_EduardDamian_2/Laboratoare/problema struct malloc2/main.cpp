
#include <iostream>
#include <stdlib.h>

using namespace std;
typedef struct
{
    int n,m;
    int **elem;
} Matrice;
int i,j,k;
Matrice alocare_matrice(int*aloc)
{
    Matrice A;
    cout<<"Introduceti linia:"<<endl;
    cout<<"Numar de linii:  ";
    cin>>A.n;
    cout<<"Numar de coloane: ";
    cin>>A.m;
    A.elem=(int*)calloc(A.n,sizeof(int));
    if(!A.elem)
    {
        cout<<"Eroare la alocarea zonei pointerilor de linie";
        *aloc=0;
    }
    else
    {
        for(i=0; i<A.n; i++)
        {
            A.elem[i]=(int*)calloc(A.m,sizeof(int));
            if(!A.elem[i])
            {
                cout<<"Eroare la alocarea pointerilor de coloana";
                *aloc=0;
            }
        }
    }
    if(*aloc)
    {

        for(i=0; i<A.n; ++i)
        {
            cout<<"Dati linia"<<i<<"cu elemente separate prin spatiu:"<<endl;
            for(j=0; j<A.m; j++)
                cin>>A.elem[i][j];
        }
        return A;
    }
    else
        cout<<"Alocare esuata"<<'/n';
}
int main()
{
    Matrice A,B,C;
    int aloc1=1,aloc2=1,aloc3=1;
    A=alocare_matrice(&aloc1);
    B=alocare_matrice(&aloc2);
    if(aloc1==1 && aloc2==1 && (A.m-B.n)==0)
    {
        C.n=A.n;
        C.m=B.m;
        C.elem=(int*)calloc(C.n,sizeof(int));
        if(!C.elem)
        {
            cout<<"Eroare la alocarea zonei pointerilor de linie";
            aloc3=0;
        }
        else
        {
            for(i=0; i<C.n; ++i)
            {
                C.elem[i]==(int*)calloc(C.m,sizeof(int));
                if(!C.elem)
                {
                    cout<<"Eroare la alocarea zonei pointerilor de coloana";
                    aloc3=0;
                }
            }
        }
        if(aloc3)
        {
            for(i=0; i<C.n; ++i)
                for(j=0; j<C.m; j++)
                {

                    C.elem[i][j]=0;
                    for(k=0; k<A.m; k++)
                        C.elem[i][j]+=A.elem[i][k]+B.elem[k][j];
                }
            for(i=0; i<C.n; i++)
            {
                cout<<endl;
                for(j=0; j<C.m; j++)
                    cout<<C.elem[i][j]<<" ";
            }
            for(i=0; i<A.n; ++i)
                free(A.elem[i]);
            free(A.elem);
            for(i=0; i<B.n; ++i)
                free(B.elem[i]);
            free(B.elem);
            for(i=0; i<C.n; ++i)
                free(C.elem[i]);
            free(C.elem);
        }
    }
    else
        cout<<"Alocare nereusita sau numarul de comanda nu coincide cu nr de linii";
    return 0;
}
