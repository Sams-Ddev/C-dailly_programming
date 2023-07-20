#include <stdio.h>

/*Typedef for Struct:*/

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p;
    p.x = 10;
    p.y = 20;

    printf("Point: (%d, %d)\n", p.x, p.y);

    return 0;
}

