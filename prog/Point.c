#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    fscanf(this, "(%g,%g)", other.x, other.y);
    other.x += other.x;
    other.y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    fscanf(this, "(%g,%g)", other.x, other.y);
    other.x -= other.x;
    other.y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    for ( int i = 0; a.x == b.x && a.y == b.y; i++ ) {
        if ( a.x == '\0' ) {
            return 1;
        }
    }
    return 0;
}

Vector vectorSum(Vector a, Vector b) {
    return a + b;
}

Vector vectorDiff(Vector a, Vector b) {
    return a - b;
}

double vectorLen(Vector this) {
    return hypot(this.x-this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}


int main() {
    int number, basis;
    
    scanf("%d%d", &number, &basis);
    
   

    return 0;
}


//С помощью известных вам инструментов реализовать тип Point (точка на координатной плоскости)
//с координатами x, y типа double.
//Также реализовать следующие функции:

//void pointPrint(Point a) - печать точки в виде (x, y). Воспользоваться шаблоном %g. 
//Предусмотреть возможность печати вида (5, 7.8) not equal to (13.9, 25.3)
//int pointEqual(Point a, Point b) - сравнение двух точек по координатам (равны или не равны).
//double pointDistance(Point a, Point b) - нахождение расстояния между двумя точками. 
//Воспользоваться функцией hypot() из библиотеки math.h

//Функция hypot() возвращает длину гипотенузы прямоугольного треугольника по заданным длинам двух сторон. 
//Функция hypotl() представляет собой версию этой функции для данных типа long double.