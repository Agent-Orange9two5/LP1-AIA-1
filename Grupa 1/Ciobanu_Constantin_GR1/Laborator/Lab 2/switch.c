#include <stdio.h>
//#include <conio.h>


int main() {

    int num1, num2, result;
    char op;

    printf("Introduceti operatorul,primul numar, al doilea numar :");
    scanf("%c %d %d", &op,&num1,&num2);

    if (num1 > num2) {
        printf("Maximul dintre cele doua numere este : %d\n", num1);
    }   else {
        printf("Maximul dintre cele doua numere este : %d\n", num2);
        
    }

    switch (op)
    {
    case '+':
    {
        result = num1 + num2;
        break;
    }
    case '-': {
        result = num1 - num2;
        break;
    }
    case '*': {
        result = num1 * num2;
        break;
    }
    case '/': {
        result = num1 / num2;
        break;
    }
    
    default:
        printf("ERROR : Invalid Operator\n");
        break;
    }

    //getch();

    printf("Result : %d\n", result);

    return 0;
}
