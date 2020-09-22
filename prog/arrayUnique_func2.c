#include <stdio.h>

int arrayUnique(int array[], int size) {
    int len = 0;
    
    for ( int i = 1; i < size; i++ ) {
        int count = 0;
        
        for ( int j = 0; j < i; j++ ) {
            if ( array[i] == array[j] ) {
                count += 1;
            }
        }
        if ( count == 0 ) {
            len += 1;
            array[len] = array[i];
        }
    }
    return len + 1;
}

int main() {
    int array[26] = { 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 5, 4, 3, 2, 1 };
    int size = 26;
    // int array[12] = { 1, 7, 1, 2, 2, 6, 3, 3, 4, 4, 5, 5 };
    // int size = 12;
    // int array[6] = { 1, 2, 3, 3, 3, 6 };
    // int size = 6;
    // int array[3] = { 1, 1, 1 };
    // int size = 3;
    // int array[15] = { 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1 };
    // int size = 15; 
    // int array[9] = { 1, -1, -2, 2, 3, -3, 3, 4, -4 };
    // int size = 9;
    
    for (int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    arrayUnique(array, size);
    
    for (int n = 0; n < size; n++ ) {
        printf("*%d ", array[n]);
    }
    
    printf("\n");
    
    return 0;
}
