#include <stdio.h>
 
void merge(int array[], int lo, int mid, int hi) {
    int arrayBuffer[hi];
    int midDif = mid;
    int loDif = lo;
    
    for ( int i = lo; i < hi; i++ ) {
        if ( loDif < mid && midDif < hi ) {
            if ( array[loDif] <= array[midDif] ) {
                arrayBuffer[i] = array[loDif];
                loDif += 1;
            } else {
                arrayBuffer[i] = array[midDif];
                midDif += 1;
            }
        } else if ( loDif < mid ) {
            arrayBuffer[i] = array[loDif];
            loDif += 1;
        } else if ( midDif < hi ) {
            arrayBuffer[i] = array[midDif];
            midDif += 1;
        }
    }
    
    for ( int j = lo; j < hi; j++ ) {
        array[j] = arrayBuffer[j];
    }
}



int main() {      // 0   1   2     3 4 5 6 7 8    9 10 11 12 13 14 15 16  17   18
    int array[] = { 101,102,103,   1,2,3,4,5,6,13,   1, 2, 3, 4, 5, 6,10,11,12}; // 19
    // int array[] = { 1,2,3,4,5,6,   6,7,8,9, '\0' };
    // int array[] = {  101,102,103,  6,7,8,9, 2,3,4,5,6,  1, 1, 1, '\0'};
    // int array[] = { 9,9,9,   7,  1,2,3,4,5,6};
    // int array[] = { 2,4,6,8,        1,3,5,7 };
    // int array[] = { 1,2,12,        1,2,6,100};
    // int array[] = {99,100,101,102,103,104,  2,13,1000};
    int lo = 3;
    int mid = 10;
    int hi = 19;
    
    for (int i = 0; i < hi; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    merge(array, lo, mid, hi);
        
    // for (int i = 0; i < hi; i++) {
    //     printf("%d ", array[i]);
    // }
    // printf("\n");
    
    return 0;
}

// Условие задачи
// void merge(int array[], int lo, int mid, int hi)
// Слияние двух сортированных подмассивов в один отсортированный подмассив.
// Первый подмассив от lo до mid не включая mid
// Второй подмассив от mid до hi не включая hi

// Что делать в результате слияния одинаковых элементов подмассивов:
//     (1,2,3) и (1,2,3,4) = (1,1,2,2,3,3,4)

