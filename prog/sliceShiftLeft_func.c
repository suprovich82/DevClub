#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end) {    
    if ( start > end ) {
        int temp = array[start];
        
        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = temp;
    }
}


int main() {
    int start, end, i;
    int size = 10;
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    
    
    scanf("%d%d", &start, &end);

 //   int temp = array[start];
 //   printf("temp = %d\n\n", temp);
    
 //   for ( ;  start <= end; start++ ) {
        
 //       array[start] = array[start+1];
 //       printf("1.array[s] = %d == 2.array[s+1] = %d  \n", array[start], array[start+1]);
        
 //   }
 //   printf("temp = %d\n", temp);
 //   printf("end = %d\n", end);
 //   printf("array[end] before temp = %d\n", array[end]);
    
 //   array[end] = temp;
    
//    printf("array[end] to temp = %d \n", array[end]);

// test
   
//    for ( int x = 0; x < size; x++ ) {
//        printf("%d ", array[x]);
//    }
//    printf("\n");
    
 //   return 0;
    
}
