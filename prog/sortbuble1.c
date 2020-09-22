#include <stdio.h>

void bubbleSort(int array[], int size) {
    int tmp;
    
    for ( int a = 0; a < size; a++ ) {
        for ( int b = 0; b < size; b++ ) {
            if (array[b] > array[b+1]) {
                tmp = array[b+1];
                array[b+1] = array[b];
                array[b] = tmp;
            }
        }
    }
}


int main() {
    int array[10] = { 6, 7, 8, 9, 10, 1, 2, 3, 4, 5 };
    int size = 10;
    
    for (int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    bubbleSort(array, size);
    
    for (int j = 0; j < size; j++ ) {
        printf("%d ", array[j]);
    }
    printf("\n");
    
    return 0;
}
