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

extern vector vectorAdd(vector a, vector b);
extern point* pointTranslation(point *p, vector *vec);
