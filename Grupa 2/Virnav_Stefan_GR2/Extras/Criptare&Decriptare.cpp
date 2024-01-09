#include <iostream>
#include <cstring>

/*Programul utilizeaza o varianta modificata a algoritmului lui  Vigenère pentru a cripta si decripta
texte formate din litere mari si cifre*/
class Matrix
{
public:
    char matrice[36][36];
    //Constructor
    Matrix()
    {
        char a[36][36];
        //Generare matrice
        strcpy(a[0],"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        strcpy(matrice[0],a[0]);
    }
};
int main()
{

}
