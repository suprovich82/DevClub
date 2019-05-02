#include <stdio.h>

int main() {
    int square, column, row;
    int a, b;
    
    scanf("%d", &square);
    a = square + square - 1;
    b = square * square - (square - 1);
    
    for ( row = 1; row <= square; row++ ) {
        for ( column = 1; column < square; column++ ) {
            printf("%d ", b);
            b += 1;
        }
        printf("%d\n", b);
        b -= a;
    }
    return 0;
}
