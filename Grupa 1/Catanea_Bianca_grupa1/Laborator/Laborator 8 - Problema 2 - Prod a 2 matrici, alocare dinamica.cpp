#include <iostream>
#include <stdlib.h>
using namespace std;
    int i,j,k;
    //Definirea unei structuri pentru a reprezenta o matrice
    typedef struct {
    int n,m; // Numarul de linii si coloane ale matricei
    int **elem; //POinter catre elementele matricei
    }Matrice;
    
    //Functie pentru alocarea dinamica a unei matrice
    Matrice alocare_matrice(int *aloc)
    {
        Matrice A;
        cout << "Introduceti  matricea A" << endl;
        cout << "Numar de linii: ";
        cin >> A.n;
        cout << "Numar de coloane: ";
        cin >> A.m;
        
        //Alocare memorie pentru vectorul de pointeri la int (liniile matricei)
        A.elem = (int **)calloc(A.n, sizeof(int *));
        
        if (!A.elem)
        {
            cout << "Eroare la alocarea zonei pointerilor de linie";
            *aloc=0;
        }
        else
        {
            //Alocare memorie pentru fiecare libie (vector de int) din matrice
            for(i=0;i<A.n;i++)
            {
                A.elem[i] = (int *)calloc(A.m, sizeof(int));
                if(!A.elem[i])
                {
                    cout << "Eroare la alocarea zonei pointerilor de coloana";
                    *aloc=0;
                }
            }
        }
        //Citirea valorilor matricei de la utilizator
        if(*aloc)
        {
            for(i=0;i<A.n;i++)
            {
                cout << "Dati linia " << i << " cu elemente separate prin spatiu: " << endl;
                for(j=0;j<A.m;j++)
                    cin >> A.elem[i][j];
                }
                return A;
        }
        else
            cout << "Alocare esuata" << endl;
    }
    int main()
{
    Matrice A, B, C;
    int aloc1 = 1, aloc2 = 1, aloc3 = 1;
    
    //Alocare si initializare matrice A
    A = alocare_matrice(&aloc1);
    
    //Alocare si initializare matrice B
    B= alocare_matrice(&aloc2);
    
    //Verificarea conditiilor pentru inmultirea matricelor
    if(aloc1 == 1 && aloc2 == 1 && (A.m-B.n) == 0 )
    {
        //Alocare memorie pentru matricea rezultat C
        C.n = A.n;
        C.m = B.m;
        C.elem = (int **)calloc(C.n, sizeof(int *));
        if(!C.elem)
        {
            cout << "Eroare la alocarea zonei pointerilor de linie";
            aloc3=0;
        }
        else
        {
            //Alocare memorie pentru fiecare linie (vector de int) din matricea rezultat
            for(i=0;i<C.n;i++)
            {
                C.elem[i] = (int)
            }
        }
    }
    //Alocare si initializare matrice C
    //C= alocare_matrice(&aloc3);
    
    return 0;
}
