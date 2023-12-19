#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Declaram pointeri pentru patru variabile
    int *num1, *num2, *num3, *num4;

    //Alocam memoria pentru primul numar
    num1 = (int *)malloc(sizeof(int));
    if(num1 == NULL )
    {
        cout << "Alocarea memoriei pentru num1 a esuat." << endl;
        return -1;
    }

    //Alocam memoria pentru al doilea numar
    num2 = (int*)malloc(sizeof(int));
    if(num2 == NULL)
    {
        cout << "Alocarea memoriei pentru num2 a esuat." << endl;
        free(num1); // Eliberam memoria alocata anterior
        return -1;
    }

    //Alocam memoria pentru al treilea numar
    num3 = (int *)malloc(sizeof(int));
    if(num3 == NULL)
    {
        cout << "Alocarea memoriei pentru num3 a esuat." << endl;
        free(num1);
        free(num2); // Eliberam memoria alocata anterior
        return -1;
    }

    //Alocam memoria pentru al patrulea numar
    num4 = (int *)malloc(sizeof(int));
    if(num4 == NULL)
    {
        cout << "Alocarea memoriei pentru num4 a esuat." << endl;
        free(num1);
        free(num2);
        free(num3); //Eliberam memoria alocata anterior
    }

    //Introducem valori pentru memoria alocata
    *num1=10;
    *num2=20;
    *num3=30;
    *num4=40;

    //Afisam valorile
    cout << "Primul numar este: ";
    cin >> *num1;
    cout << endl;

    cout << "Al doilea numar este: ";
    cin >> *num2;
    cout << endl;

    cout << "Al treilea numar este: ";
    cin >> *num3;
    cout << endl;

    cout << "Al patrulea numar este: ";
    cin >> *num4;
    cout << endl;

    //Eliberam memoria alocata
    free(num1);
    free(num2);
    free(num3);
    free(num4);

    return 0;
}
