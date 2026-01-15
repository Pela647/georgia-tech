#include <stdio.h>

// Stack-allocated value return


typedef struct {
    int x;
    int y;
} coord_t;

// function returns coord_t
coord_t new_coord(int x, int  y) {
    coord_t c;
    c.x = x;
    c.y = y;
    return c;
}

int main() {
    coord_t c1 = new_coord(10,20);
    coord_t c2= new_coord(10,20);

    printf("c1: %d, %d \n", c1.x, c1.y);
    printf("c2: %d, %d \n", c2.x, c2.y);

    return 0;
}