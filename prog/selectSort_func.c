#include <stdio.h>

void selectSort(int array[], int size) {
    int temp;
    
    for ( int i = 0; i < size - 1; i++ ) {
        int min = i;
        
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
                min = j;
            }
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}


int main() {
    // int array[10] = { 6, 7, 8, 9, 10, 1, 2, 3, 4, 5 };
    // int size = 10;
    int array[5] = { 64, 25, 5, 22, 11 };
    int size = 5;
    
    for (int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    selectSort(array, size);
    
    for (int j = 0; j < size; j++ ) {
        printf("%d ", array[j]);
    }
    printf("\n");
    
    return 0;
}
