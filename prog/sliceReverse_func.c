#include <stdio.h>

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; hi--, lo++ ) {
        int temp = array[lo];
        
        array[lo] = array[hi];
        array[hi] = temp;
    }
}

int main() {
    int array[]={0,1,2,3,4,5,6,7,8};
    int lo = 4;
    int hi = 2;
    
    for ( int i = lo, j = hi; i < j; i++, j-- ) {
        printf("*i = %d - *j = %d\n\n", i, j);
        int temp = array[i];
        printf("temp = %d\n\n", temp);
        
        array[i] = array[j];
        array[j] = temp;
        printf("i = %d - j = %d\n\n", array[i], array[j]);
    }
    
    for ( int i = 0; i < 9; i++ ) {
        printf("%d ",array[i]);
    }
    
    return 0;
}

