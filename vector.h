typedef struct vector vector;
typedef struct point point;

struct vector {
    int x;
    int y;
};

struct point {
    int x;
    int y;
};

extern vector* vector_add(vector *a, vector *b);
extern point* point_translation(point *p, vector *vec);
