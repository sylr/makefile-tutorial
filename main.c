#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(int argc, char *argv[]) {
    vector v1, v2;
    vector* v3;

    v1.x = 5;
    v1.y = 9;
    v2.x = 7;
    v2.y = -3;

    v3 = vector_add(&v1, &v2);

    printf("Vector one     x=%*d y=%*d\n", 2, v1.x,  2, v1.y);
    printf("Vector two     x=%*d y=%*d\n", 2, v2.x,  2, v2.y);
    printf("Vector three   x=%*d y=%*d\n", 2, v3->x, 2, v3->y);

    point p1;
    point* p2;

    p1.x = 3;
    p1.y = 13;
    p2 = point_translation(&p1, v3);

    printf("Point one      x=%*d y=%*d\n", 2, p1.x,  2, p1.y);
    printf("Point two      x=%*d y=%*d\n", 2, p2->x, 2, p2->y);

    return 0;
}
