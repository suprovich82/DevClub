#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    return a.x == b.x && a.y == b.y;
}

Vector vectorSum(Vector a, Vector b) {
    Vector sum = a;
    
    vectorIncrement(&sum, b);
    return sum;
}

Vector vectorDiff(Vector a, Vector b) {
    Vector diff = a;
    
    vectorDecrement(&diff, b);
    return diff;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}

int main() {
    int number, basis;
    
    scanf("%d%d", &number, &basis);
    
   

    return 0;
}

// С помощью известных вам инструментов реализовать тип Vector (вектор на координатной плоскости)
// с координатами x, y типа double. Также реализовать следующие функции:

// void vectorIncrement(Vector *this, Vector other)
// void vectorDecrement(Vector *this, Vector other)
// int vectorEqual(Vector a, Vector b) - cравнение векторов по координатам
// Vector vectorSum(Vector a, Vector b)
// Vector vectorDiff(Vector a, Vector b)
// double vectorLen(Vector this) – нахождение длины вектора. Воспользоваться функцией hypot()
// из библиотеки math.h
// void vectorPrint(Vector this) - печать вектора в виде (x, y). Воспользоваться шаблоном %g

-------