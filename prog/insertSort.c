#include <stdio.h>

void insertSort(int array[], int len) {
    for ( int i = 1; i < len; i++ ) {
        int j = i;
        int buf = array[j];
        
        for ( int k = 0; k < i; k++ ) {
            if ( j > 0 && array[j-1] > buf ) {
                array[j] = array[j-1];
                array[j-1] = buf;
                j -= 1;
            }
        }
    }
}

int main() {
    // int array[] = {9, 1, 10, 3, 4, 7, 6, 8, 2, 11, 5, 12};
    // int len = 12;
    // int array[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int len = 12;
    // int array[] = {1, 1, 1, 3, 3, 3, 5, 5, 5, 4, 4, 4};
    // int len = 12;
    int array[] = {1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1};
    int len = 12;
        
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    insertSort(array, len);
    
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}