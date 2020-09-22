#include <stdio.h>

#define SIZE 5

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int column = 0, col = size - 1; column < size && col >= 0; column++, col-- ) {
            target[row][column] = source[col][row];
        }
    }
}
int main() {
    int size = 5;
    int source[SIZE][SIZE] = { -1, -2, -3, -4, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -2, -3, -4, -5 };
    int target[SIZE][SIZE];
    
    for ( int row = 0; row < size; row++ ) {
        for ( int column = 0; column < size; column++ ) {
            printf("%d ", source[row][column]);
        }
        printf("\n");
    }
    printf("\n");
    
    matrixRotate90(target, source, size);
    
    for ( int row = 0; row < size; row++ ) {
        for ( int column = 0; column < size ; column++ ) {
            printf("%d ", target[row][column]);
        }
        printf("\n");
    }
    
    
    return 0;
}