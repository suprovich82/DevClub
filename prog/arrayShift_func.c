#include <stdio.h>

void arrayShift(int array[], int size, int shift) {
    int buffersize = size / 2;
    int buffer[buffersize];
    
    shift %= size;
    if ( shift < 0 ) {
        shift += size;
    }
    if ( shift <= buffersize ) {
        for ( int i = size - shift, j = 0; i < size; i++, j++ ) {
            buffer[j] = array[i];
        }
        for ( int i = size - 1, j = size - 1 - shift; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = buffer[i];
        }
    } else {
        for ( int i = size - 1 - shift; i >= 0; i-- ) {
            buffer[i] = array[i];
        }
        for ( int i = 0, j = size - shift; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = size - 1, j = size - 1 - shift; j >= 0; i--, j-- ) {
            array[i] = buffer[j];
        }
    }
}

// void arrayShift(int array[], int size, int shift) {
//     int flug = 0;
    
//     if ( shift < 0 ) {
//         shift *= -1;
//         flug = 1;
//     }
    
//     int difarray = size - shift;
//     int subarray[shift];
//     int k = difarray;
    
//     if ( flug == 1 ) {
//         for ( int i = 0; i < shift; i++ ) {
//             subarray[i] = array[i];
//         }
//         for ( int z = 0, x = difarray - 1; z < difarray ; z++, x++ ) {
//             array[z] = array[x];
//         }
//         for ( int y = 0; y < shift; y++, k++ ) {
//             array[k] = subarray[y];
//         } 
//     } else {  
//         for ( int i = 0; i < shift; i++, k++ ) {
//             subarray[i] = array[k];
//         }
//         for ( int z = 0, j = size - 1, x = difarray - 1; z < difarray ; z++, j--, x-- ) {
//             array[j] = array[x];
//         }
//         for ( int y = 0; y < shift; y++ ) {
//             array[y] = subarray[y];
//         }
//     }
// }

int main() {
    int size = 7;
    int shift = 3;
    int array[7] = { 1, 2, 3, 4, 5, 6, 7};
    
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    arrayShift(array, size, shift);
     
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}


// Написать функцию:
// void arrayShift(int array[], int size, int shift)
// Реализовать циклический сдвиг массива на shift элементов вправо. 
// Максимизировать производительность при оптимальном использовании памяти.
// Требуемая сложность: O(N)

// void arrayShift(int array[], int size, int shift) {
//     int difarray = size - shift;
//     int subarray[shift];
//     int k = difarray;
    
//     for ( int i = 0; i < shift; i++, k++ ) {
//         subarray[i] = array[k];
//     }
//     for ( int z = 0, j = size - 1, x = difarray - 1; z < difarray - 1 ; z++, j--, x-- ) {
//         array[j] = array[x];
//     }
//     for ( int y = 0; y < shift; y++ ) {
//         array[y] = subarray[y];
//     }
// }
//----------------------------------
// void arrayShift(int array[], int size, int shift) {
//     int difarray = size - shift;
//     int subarray[shift];
//     int k = difarray - 1;
     
//     for ( int i = 0, j = shift, x = size - 1, b = shift - 1; i < size; i++, k--, j--, x--, b-- ) {
//         if ( j > 0 ) {
//             subarray[b] = array[x];   
//         }
//         if ( i < difarray ) {
//             array[x] = array[k];;
//         }  
//     }
//     for ( int y = 0; y < shift; y++ ) {
//         array[y] = subarray[y];
//     }
// }
