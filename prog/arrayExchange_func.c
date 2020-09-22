#include <stdio.h>

void arrayExchange(int array[], int len) {
    for ( int i = 0, j = 1; j < len; i += 2, j += 2 ) {
        int temp = array[i];
        
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {    
    int array[]={10,11,12,13,14,15,16,18};
    int len = 9;
    int temp;
    
    for ( int i = 0, j = 1; i < len; i += 2, j += 2 ) {
        
        temp = array[i];
        printf("%d - %d ; ", i, array[i]);
        printf("%d - %d\n", j, array[j]);
           
        array[i] = array[j];      
        array[j] = temp;
 
    }

   
    for ( int x = 0; x < len; x++ ) {
        printf("%d ", array[x]);
    }
   
    
    return 0;
}


// ошибка 139 - вылажу за пределы масива