#include <iostream>

using namespace std;

int main()
{

    int a[4][4], i, j, suma=0, ca, ogl, N[2], E[2], S[2], V[2], n=0, e=0, s=0, v=0;

//Se citeste de la tastatura matricea patratica de dimensiune 4
        cout<<"Introduceti elementele matricei: "<<endl;
            for (i=0; i<4; i++){
                for (j=0; j<4; j++){
                    cin>>a[i][j];
                }
            }

//Se afiseaza elementele de pe diagonala principala
        cout<<"Elementele de pe diagonala principala sunt: "<<endl;
            for (i=0; i<4; i++){ 
                cout<<a[i][i]<<" ";
            } cout<<endl;

//Se afiseaza elementele de pe diagonala secundara in ordine inversa
        cout<<"Elementele de pe diagonala secundara afisate in ordine inversa sunt: "<<endl;
            for (i=3; i>=0; i--){ 
                cout<<a[i][4-1-i]<<" ";
            } cout<<endl;

//Suma elementelor aflate deasupra diagonalei secundare
        for (i=0; i<3; i++){
            for (j=0; j<4; j++){
                if (i+j<4-1){
                suma+=a[i][j];
                }
            }
        } cout<<"Suma elementelor aflate deasupra diagonalei secundare este: "<<suma<<endl;

//Se afiseaza elementele palindroame de pe diagonala principala
    cout<<"Elementele palindroame de pe diagonala principala sunt: ";
        for (i=0; i<4; i++)
            for (j=0; j<4; j++)
                if (i==j){
                    ca=a[i][j];;
                    ogl=0;
                        while (ca!=0){
                            ogl=ogl*10+ca%10;
                            ca=ca/10;
                        }
                        if (a[i][j]==ogl)
                        cout<<a[i][j]<<" ";
                } cout<<endl;

//Stocam in 4 vectori triunghiurile ramase
        for (i=0; i<4; i++)
            for (j=0; j<4; j++){
                if (i<j && i+j<4-1)
                    N[n++]=a[i][j];
                    else if (i>j && i+j<4-1)
                        V[v++]=a[i][j];
                        else if (i<j && i+j>4-1)
                            E[e++]=a[i][j];
                            else if (i>j && i+j>4-1)
                                S[s++]=a[i][j]; 
            }
        cout<<"Elementele din primul triunghi ramas dupa excluderea diagonalelor: ";
            for (i=0; i<4; i++)
                cout<<N[i]<<" ";
            cout<<endl;
        cout<<"Elementele din al doilea triunghi ramas dupa excluderea diagonalelor: ";
            for (i=0; i<4; i++)
                cout<<E[i]<<" ";
            cout<<endl;
        cout<<"Elementele din al treilea triunghi ramas dupa excluderea diagonalelor: ";
            for (i=0; i<4; i++)
                cout<<S[i]<<" ";
            cout<<endl;
        cout<<"Elementele din al patrulea triunghi ramas dupa excluderea diagonalelor: ";
            for  (i=0; i<4; i++)
                cout<<V[i]<<" ";

return 0;
}
