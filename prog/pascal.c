#include <stdio.h>

int factorial(int limit) {
    int x = 1;
    
    for ( int i = 1; i <= limit; i++ ) {
        x *= i;
    }
    return x;
}

int pascal(int row, int num) {
    return factorial(row) / (factorial(num) * factorial(row-num));
}

int main() {
    int number;
    int y = 1;
    
    scanf("%d", &number);
    
    for ( int row = 0; row < number; row++ ) {
        for ( int num = 0; num < row; num++ ) {
            printf("%d ", pascal(row, num));
        }
        printf("%d\n", y);
    }
    
    return 0;
}
