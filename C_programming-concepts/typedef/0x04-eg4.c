#include <stdio.h>

/*Typedef for Array Type:*/

typedef int IntArray[5];

int main() {
    IntArray numbers = {1, 2, 3, 4, 5};

    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

