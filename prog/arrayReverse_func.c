#include <stdio.h>

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int buffer = array[i];
        
        array[i] = array[j];
        array[j] = buffer;
    }
}

    
