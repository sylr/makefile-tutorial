#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

vector* vector_add(vector *a, vector *b) {
    vector *ret = malloc(sizeof(struct vector));

    ret->x = a->x + b->x;
    ret->y = a->y + b->y;

    return ret;
}

point* point_translation(point *p, vector *vec) {
    point *ret = malloc(sizeof(struct point));

    ret->x = (p->x + vec->x);
    ret->y = (p->y + vec->y);

    return ret;
}
