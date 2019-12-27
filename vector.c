#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "math.h"

vector vectorAdd(vector a, vector b) {
    vector ret;
    ret.x = madd(a.x, b.x);
    ret.y = madd(a.y, b.y);

    return ret;
}

point* pointTranslation(point *p, vector *vec) {
    point *ret = malloc(sizeof(struct point));

    ret->x = (p->x + vec->x);
    ret->y = (p->y + vec->y);

    return ret;
}
