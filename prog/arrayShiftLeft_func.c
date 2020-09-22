#include <stdio.h>

void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    
    for ( int i = 1 ; i < size; i++) {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
}

int main() {
    int array[]={1,2,3,4,5};
    int size = 5;

    int temp = array[0];
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = array[i+1];
    }
    array[size-1] = temp;
    
    for ( int j = 0; j< size; j++ ) {
        printf("%d ", array[j]);
    }
    printf("****\n");

    return 0;
}
