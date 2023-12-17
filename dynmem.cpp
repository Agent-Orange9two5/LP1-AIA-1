#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare pointers for four variables
    int *num1, *num2, *num3, *num4;

    // Allocate memory for num1
    num1 = (int *)malloc(sizeof(int));
    if (num1 == NULL) {
        printf("Memory allocation failed for num1\n");
        return -1;
    }

    // Allocate memory for num2
    num2 = (int *)malloc(sizeof(int));
    if (num2 == NULL) {
        printf("Memory allocation failed for num2\n");
        free(num1); // Free the previously allocated memory
        return -1;
    }

    // Allocate memory for num3
    num3 = (int *)malloc(sizeof(int));
    if (num3 == NULL) {
        printf("Memory allocation failed for num3\n");
        free(num1); // Free the previously allocated memory
        free(num2); // Free the previously allocated memory
        return -1;
    }

    // Allocate memory for num4
    num4 = (int *)malloc(sizeof(int));
    if (num4 == NULL) {
        printf("Memory allocation failed for num4\n");
        free(num1); // Free the previously allocated memory
        free(num2); // Free the previously allocated memory
        free(num3); // Free the previously allocated memory
        return -1;
    }

    // Assign values to the allocated memory locations
    *num1 = 10;
    *num2 = 20;
    *num3 = 30;
    *num4 = 40;

    // Print the values
    printf("num1: %d\n", *num1);
    printf("num2: %d\n", *num2);
    printf("num3: %d\n", *num3);
    printf("num4: %d\n", *num4);

    // Free allocated memory
    free(num1);
    free(num2);
    free(num3);
    free(num4);

    return 0;
}
