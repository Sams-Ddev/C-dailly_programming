#include <stdio.h>

/*Typedef for Enum:*/
typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

int main() {
    Color selectedColor = GREEN;

    switch (selectedColor) {
        case RED:
            printf("Selected color: RED\n");
            break;
        case GREEN:
            printf("Selected color: GREEN\n");
            break;
        case BLUE:
            printf("Selected color: BLUE\n");
            break;
        default:
            printf("Invalid color selection\n");
    }

    return 0;
}

