#include <stdio.h>
#include "vector.h"

int main(int argc, char *argv[]) {
    vector one, two, three;

    one.x = 5;
    one.y = 9;
    two.x = 7;
    two.y = -3;

    three = add(one, two);

    printf("Vector one   x=%*d y=%*d\n", 2, one.x,   2, one.y);
    printf("Vector two   x=%*d y=%*d\n", 2, two.x,   2, two.y);
    printf("Vector three x=%*d y=%*d\n", 2, three.x, 2, three.y);

    return 0;
}