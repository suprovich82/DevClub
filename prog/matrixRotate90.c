#include <stdio.h>

#define SIZE 5

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int column = 0, col = size - 1; column < size && col >= 0; column++, col-- ) {
        for ( int row = 0; row < size; row++ ) {
            target[column][row] = source[row][col];
        }
    }
}

int main() {
    int size = 5;
    int source[SIZE][SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
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


// void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
//     for ( int row = 0; row < size; row++ ) {
//         for ( int column = 0, k = size - 1; column < size && k >= 0; column++, k-- ) {
//             target[row][column] = source[k][row];
//         }
//     }
// }