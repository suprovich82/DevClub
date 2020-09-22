
#include <stdio.h>

#define SIZE 3

//void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
//    int last = size - 1;
    
//    for ( int col = 0; col < size; col++ ) {
//        for ( int row = 0; row < last; row++ ) {
//            fprintf(out, "%d ", matrix[row][col]);
//        }
//        fprintf(out, "%d\n", matrix[last][col]);
//    }
//}

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    for ( int col = 0; col < size; col++ ) {
        for ( int row = 0; row < size - 1; row++ ) {
            fprintf(out, "%d ", matrix[row][col]);
        }
        fprintf(out, "%d\n", matrix[size-1][col]);
    }
}

int main() {
    FILE *out = fopen("task.out", "w");
    int matrix[SIZE][SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    matrixPrint(out, matrix, SIZE);
    fclose(out);
    
    return 0;
}