#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int temp = array[size-1];
    
    for ( int i = size - 1; 0 < i; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = temp;
}

int main() {
    int array[]={1,2,3,4,5};
    int size = 5;


    return 0;
}
