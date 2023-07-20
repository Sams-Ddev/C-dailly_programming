#include <stdio.h>

typedef int myInt;
typedef float myFloat;

int main() {
    myInt num1 = 42;
    myFloat num2 = 3.14;

    printf("Value 1: %d\n", num1);
    printf("Value 2: %.2f\n", num2);

    return 0;
}

