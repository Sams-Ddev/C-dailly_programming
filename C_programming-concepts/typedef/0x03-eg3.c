#include <stdio.h>

/*Typedef for Function Pointer:*/

typedef int (*BinaryOperation)(int, int);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    BinaryOperation operation = add;
    printf("Result: %d\n", operation(5, 3));

    operation = multiply;
    printf("Result: %d\n", operation(5, 3));

    return 0;
}

