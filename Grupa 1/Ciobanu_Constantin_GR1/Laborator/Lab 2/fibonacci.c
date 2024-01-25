#include <stdio.h>

int Fib(int a) {

    if ((a == 0) || (a == 1)) {
        return 1;
    }   else {
        return (Fib(a-1) + Fib(a-2));
    } 

}

int main() {

    int num = 0;
    int count = 1;

    printf("Da valoarea : \n");
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        printf("%d : Valoarea Fibonacci este : %d\n", count, Fib(i));
        count++;
    }

    return 0;
}
