#include <stdio.h>

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[end];
        
        for ( int i = end; i > start; i-- ) {
            array[i] = array[i-1];
        }
        array[start] = temp;
    }
}


int main() {
    int start, end, i;
    int size = 10;
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    
    
    scanf("%d%d", &start, &end);
    
        if ( start < end ) {
            int temp = array[end];
            printf("temp = %d\n", temp);
        
            for ( int i = end; i > start; i-- ) {
                array[i] = array[i-1];
                printf("%d ", array[i]);
            }
            printf("array[start] = %d\n", array[start]);
            array[start] = temp;
            printf("**temp = %d\n", temp);
        }
        printf("\n\n");

    for ( int j = 0; j < size; j++ ) {
        printf("* %d ", array[j]);
    }
    printf("\n");
    return 0;
}
