#include <stdio.h>

#define SIZE 3

void matrixMultiply(int matrix[SIZE][SIZE], int size, int multiplier) {
    for ( int column = 0; column < size; column++ ) {
        for ( int row = 0; row < size; row++ ) {
            matrix[column][row] *= multiplier;
        }
    }
}


int main() {
    int matrix[SIZE][SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int multiplier = 2;
    
    matrixMultiply(matrix, SIZE, multiplier);
    
    return 0;
}