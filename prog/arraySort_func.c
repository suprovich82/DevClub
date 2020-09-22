#include <stdio.h>

void arraySort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i + 1; j <= size; j++ ) {
            if ( array[i] > array[j] ) {
                int tempMin = array[j];
                
                array[j] = array[i];
                array[i] = tempMin;
            }
        }
    }
    for (int x = 0; x < size; x++ ) {
        printf("%d  ", array[x]);
   }
}

int main() {
    int size = 10;
    int array[] = {1,5,3,4,7,6,9,8,10,2};
    int tempMin;
    
    
    for (int i = 0; i < size; i++ ) {
        printf("%d\n", array[i]);        
    } 
    printf("**\n");
    
    arrayReverse(array, size);
    


   return 0;
    
}

